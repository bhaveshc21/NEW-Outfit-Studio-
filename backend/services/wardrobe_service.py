import os
import werkzeug
import time

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

    def get_wardrobe(self, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s ORDER BY created_at DESC", (user_id,))
        items = cursor.fetchall()
        cursor.close()
        return items

    def get_wardrobe_item(self, item_id, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
        item = cursor.fetchone()
        cursor.close()
        return item
        
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
