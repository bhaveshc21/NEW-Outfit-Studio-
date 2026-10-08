import os
import werkzeug
import time
from datetime import datetime
from utils.image_utils import remove_background_and_save

class WardrobeService:
    def __init__(self, db_connection):
        self.db = db_connection
        self.upload_dir = os.path.join('uploads', 'wardrobe')
        os.makedirs(self.upload_dir, exist_ok=True)
        
    def add_wardrobe_item(self, user_id, name, category, color, image_file):
        try:
            # Save image securely
            filename = werkzeug.utils.secure_filename(image_file.filename)
            unique_filename = f"{user_id}_{int(time.time())}_{filename}"
            image_path = os.path.join(self.upload_dir, unique_filename)
            
            image_file.seek(0)
            image_file.save(image_path)
            
            # Remove background and update image_path
            image_path = remove_background_and_save(image_path)
            
            from cv.color_analysis import detect_dominant_color
            color = detect_dominant_color(image_path)
            
            # Database insert
            cursor = self.db.cursor()
            query = """
            INSERT INTO wardrobe_items (user_id, name, category, color, image_path)
            VALUES (%s, %s, %s, %s, %s)
            """
            cursor.execute(query, (user_id, name, category, color, image_path))
            self.db.commit()
            
            item_id = cursor.lastrowid
            cursor.close()
            
            return {
                "id": item_id,
                "user_id": user_id,
                "name": name,
                "category": category,
                "color": color,
                "image_path": image_path
            }, None
        except Exception as e:
            print(f"Wardrobe DB Error: {e}")
            return None, "Database error occurred while saving the wardrobe item."

    def _process_item_usage(self, item):
        if not item: return item
        if 'usage_count' not in item:
            item['usage_count'] = 0
        if 'last_worn_at' not in item:
            item['last_worn_at'] = None
            
        last_worn = item.get('last_worn_at')
        
        if item.get('usage_count', 0) == 0 and last_worn is None:
            item['days_since_last_worn'] = None
            item['usage_status'] = "Never Worn"
            item['is_rarely_used'] = False
        else:
            if last_worn:
                delta = datetime.now() - last_worn
                days = delta.days
                item['days_since_last_worn'] = days
                
                now = datetime.now()
                months_diff = (now.year - last_worn.year) * 12 + now.month - last_worn.month
                if now.day < last_worn.day:
                    months_diff -= 1
                    
                if months_diff >= 4:
                    item['usage_status'] = "Rarely Used"
                    item['is_rarely_used'] = True
                else:
                    item['usage_status'] = "Recently Used"
                    item['is_rarely_used'] = False
            else:
                item['days_since_last_worn'] = None
                item['usage_status'] = "Recently Used"
                item['is_rarely_used'] = False
                
        if isinstance(item.get('created_at'), datetime):
            item['created_at'] = item['created_at'].isoformat()
        if isinstance(item.get('last_worn_at'), datetime):
            item['last_worn_at'] = item['last_worn_at'].isoformat()
            
        return item

    def get_wardrobe(self, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s ORDER BY created_at DESC", (user_id,))
        items = cursor.fetchall()
        cursor.close()
        return [self._process_item_usage(item) for item in items]

    def get_wardrobe_item(self, item_id, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
        item = cursor.fetchone()
        cursor.close()
        return self._process_item_usage(item)
        
    def update_wardrobe_item(self, item_id, user_id, name, category, color, image_file=None):
        try:
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("SELECT image_path FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            item = cursor.fetchone()
            
            if not item:
                return None, "Item not found or does not belong to user."
                
            image_path = item['image_path']
            
            if image_file:
                # User provided a new image, save it
                filename = werkzeug.utils.secure_filename(image_file.filename)
                unique_filename = f"{user_id}_{int(time.time())}_{filename}"
                image_path = os.path.join(self.upload_dir, unique_filename)
                image_file.seek(0)
                image_file.save(image_path)
                
                # Remove background and update image_path
                image_path = remove_background_and_save(image_path)
                
                from cv.color_analysis import detect_dominant_color
                color = detect_dominant_color(image_path)
                
                # Delete old image safely (optional but good practice)
                if os.path.exists(item['image_path']):
                    try:
                        os.remove(item['image_path'])
                    except Exception as e:
                        print(f"Could not delete old image: {e}")
            
            query = """
            UPDATE wardrobe_items 
            SET name = %s, category = %s, color = %s, image_path = %s
            WHERE id = %s AND user_id = %s
            """
            cursor.execute(query, (name, category, color, image_path, item_id, user_id))
            self.db.commit()
            cursor.close()
            
            return {
                "id": item_id,
                "user_id": user_id,
                "name": name,
                "category": category,
                "color": color,
                "image_path": image_path
            }, None
        except Exception as e:
            print(f"Wardrobe DB Error: {e}")
            return None, "Database error occurred while updating the wardrobe item."

    def delete_wardrobe_item(self, item_id, user_id):
        try:
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("SELECT image_path FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            item = cursor.fetchone()
            
            if not item:
                return False, "Item not found or does not belong to user."
                
            # Remove from DB
            cursor.execute("DELETE FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            self.db.commit()
            cursor.close()
            
            # Remove image file safely
            if os.path.exists(item['image_path']):
                try:
                    os.remove(item['image_path'])
                except Exception as e:
                    print(f"Could not delete image on item deletion: {e}")
                    
            return True, None
        except Exception as e:
            print(f"Wardrobe DB Error: {e}")
            return False, "Database error occurred while deleting the wardrobe item."

    def get_donation_bin(self, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM donation_bin WHERE user_id = %s ORDER BY created_at DESC", (user_id,))
        items = cursor.fetchall()
        cursor.close()
        for item in items:
            if isinstance(item.get('created_at'), datetime):
                item['created_at'] = item['created_at'].isoformat()
        return items

    def donate_wardrobe_item(self, item_id, user_id):
        try:
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("SELECT * FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            item = cursor.fetchone()
            
            if not item:
                return False, "Item not found or does not belong to user."
                
            # Insert into donation_bin
            cursor.execute("""
            INSERT INTO donation_bin (user_id, name, category, color, image_path)
            VALUES (%s, %s, %s, %s, %s)
            """, (item['user_id'], item['name'], item['category'], item['color'], item['image_path']))
            
            # Remove from wardrobe_items
            cursor.execute("DELETE FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            self.db.commit()
            cursor.close()
            
            # Do NOT remove image file because it's still needed by the donation_bin
                    
            return True, None
        except Exception as e:
            print(f"Wardrobe DB Error: {e}")
            return False, "Database error occurred while donating the wardrobe item."

    def mark_item_as_worn(self, item_id, user_id):
        try:
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("SELECT id FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            if not cursor.fetchone():
                return None, "Item not found or does not belong to user."
                
            cursor.execute("""
            UPDATE wardrobe_items 
            SET usage_count = usage_count + 1, last_worn_at = NOW()
            WHERE id = %s AND user_id = %s
            """, (item_id, user_id))
            self.db.commit()
            
            cursor.execute("SELECT * FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            updated_item = cursor.fetchone()
            cursor.close()
            
            return self._process_item_usage(updated_item), None
        except Exception as e:
            print(f"Wardrobe DB Error in mark_as_worn: {e}")
            return None, "Database error occurred while marking item as worn."

    def get_rarely_used_items(self, user_id):
        try:
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("""
                SELECT * FROM wardrobe_items 
                WHERE user_id = %s 
                AND last_worn_at IS NOT NULL 
                AND last_worn_at <= DATE_SUB(NOW(), INTERVAL 4 MONTH)
                ORDER BY last_worn_at ASC
            """, (user_id,))
            items = cursor.fetchall()
            cursor.close()
            return [self._process_item_usage(item) for item in items]
        except Exception as e:
            print(f"Wardrobe DB Error in get_rarely_used_items: {e}")
            return []
