import unittest
import json
import jwt
from datetime import datetime, timedelta
from app import create_app
from config import Config
import mysql.connector

class ClosetStatisticsTestCase(unittest.TestCase):
    def setUp(self):
        self.app = create_app()
        self.client = self.app.test_client()
        
        # Connect to DB and set up test data
        self.db = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            database=Config.DATABASE_NAME,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD
        )
        self.cursor = self.db.cursor(dictionary=True)
        
        # Clean up existing test user if present
        self.cursor.execute("DELETE FROM users WHERE email='test_closet@example.com'")
        self.cursor.execute("DELETE FROM users WHERE email='test_empty@example.com'")
        
        # Insert test users
        self.cursor.execute(
            "INSERT INTO users (name, email, password) VALUES (%s, %s, %s)",
            ("Test Closet", "test_closet@example.com", "hashed_password")
        )
        self.user_id = self.cursor.lastrowid
        
        self.cursor.execute(
            "INSERT INTO users (name, email, password) VALUES (%s, %s, %s)",
            ("Test Empty", "test_empty@example.com", "hashed_password")
        )
        self.empty_user_id = self.cursor.lastrowid
        
        # Insert test wardrobe items
        items = [
            (self.user_id, "White T", "T-Shirt", "White", "path/1.jpg"),
            (self.user_id, "Blue Jeans", "Jeans", "Blue", "path/2.jpg"),
            (self.user_id, "Black Shoes", "Shoe", "Black", "path/3.jpg"),
            (self.user_id, "White Shirt", "Shirt", "white", "path/4.jpg"),
            (self.user_id, "Grey T", "T-Shirt", "Grey", "path/5.jpg"),
        ]
        
        for item in items:
            self.cursor.execute(
                "INSERT INTO wardrobe_items (user_id, name, category, color, image_path) VALUES (%s, %s, %s, %s, %s)",
                item
            )
            
        self.db.commit()
        
        # Generate tokens
        self.token = self.generate_token(self.user_id)
        self.empty_token = self.generate_token(self.empty_user_id)

    def generate_token(self, user_id):
        token = jwt.encode({
            'user_id': user_id,
            'exp': datetime.utcnow() + timedelta(hours=24)
        }, Config.SECRET_KEY, algorithm="HS256")
        return token
        
    def tearDown(self):
        self.cursor.execute("DELETE FROM wardrobe_items WHERE user_id IN (%s, %s)", (self.user_id, self.empty_user_id))
        self.cursor.execute("DELETE FROM users WHERE id IN (%s, %s)", (self.user_id, self.empty_user_id))
        self.db.commit()
        self.cursor.close()
        self.db.close()

    def test_get_statistics_success(self):
        response = self.client.get(
            f'/api/closet/statistics/{self.user_id}',
            headers={'Authorization': f'Bearer {self.token}'}
        )
        data = json.loads(response.data)
        
        self.assertEqual(response.status_code, 200)
        self.assertTrue(data['success'])
        
        stats = data['data']
        self.assertEqual(stats['total_items'], 5)
        
        # Check categories normalization
        cats = {c['name']: c['count'] for c in stats['category_distribution']}
        self.assertEqual(cats.get('T-Shirts'), 2)
        self.assertEqual(cats.get('Jeans'), 1)
        self.assertEqual(cats.get('Shoes'), 1)
        
        # Check colors
        colors = {c['name']: c['count'] for c in stats['color_distribution']}
        self.assertEqual(colors.get('White'), 2)
        self.assertEqual(colors.get('Blue'), 1)
        self.assertEqual(colors.get('Black'), 1)
        
        # Check usage / saved logic (must be false)
        self.assertFalse(stats['usage']['available'])
        self.assertFalse(stats['saved_outfits']['available'])
        
        # Check gaps
        # With T-Shirt (Top), Jeans (Bottom), Shoe (Footwear), Shirt (Top)
        # Should have Accessories and Jackets missing
        gaps = stats['wardrobe_gaps']
        self.assertIn('Jackets', gaps['optional'])
        self.assertIn('Accessories', gaps['optional'])
        self.assertEqual(len(gaps['critical']), 0)
        
    def test_get_statistics_empty(self):
        response = self.client.get(
            f'/api/closet/statistics/{self.empty_user_id}',
            headers={'Authorization': f'Bearer {self.empty_token}'}
        )
        data = json.loads(response.data)
        
        self.assertEqual(response.status_code, 200)
        self.assertTrue(data['success'])
        
        stats = data['data']
        self.assertEqual(stats['total_items'], 0)
        self.assertEqual(len(stats['category_distribution']), 0)
        
        gaps = stats['wardrobe_gaps']
        self.assertIn('Tops', gaps['critical'])
        self.assertIn('Bottoms', gaps['critical'])
        self.assertIn('Footwear', gaps['critical'])
        
    def test_get_statistics_unauthorized(self):
        # Try to access self.user_id with self.empty_token
        response = self.client.get(
            f'/api/closet/statistics/{self.user_id}',
            headers={'Authorization': f'Bearer {self.empty_token}'}
        )
        self.assertEqual(response.status_code, 403)

if __name__ == '__main__':
    unittest.main()
