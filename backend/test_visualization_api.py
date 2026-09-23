import unittest
from app import create_app

class TestVisualizationApi(unittest.TestCase):
    def setUp(self):
        self.app = create_app()
        self.client = self.app.test_client()
        # In a real test, we would set up test database data and get a real token.
        # Here we just check that the endpoint exists and requires authentication.
        
    def test_visualization_endpoint_requires_auth(self):
        payload = {
            "top": {"id": 1, "category": "T-Shirt", "color": "White"}
        }
        response = self.client.post('/api/visualization/prepare', json=payload)
        
        # Should return 401 Unauthorized or missing token
        self.assertEqual(response.status_code, 401)
        data = response.get_json()
        self.assertIn('Token is missing', data.get('message', ''))
        
if __name__ == '__main__':
    unittest.main()
