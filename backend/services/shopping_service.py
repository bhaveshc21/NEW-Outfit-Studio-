import os
import werkzeug
import time
from services.wardrobe_service import WardrobeService
from recommendation.shopping_assistant import ShoppingAssistant

class ShoppingService:
    def __init__(self, db_connection):
        self.db = db_connection
        self.upload_dir = os.path.join('uploads', 'shopping')
        os.makedirs(self.upload_dir, exist_ok=True)
        
    def analyze_potential_purchase(self, user_id, category, color, image_file):
        try:
            # We save the image temporarily or permanently for history if we wanted.
            # For now, just save it so we have a valid image_path in the frontend if needed.
            filename = werkzeug.utils.secure_filename(image_file.filename)
            unique_filename = f"shopping_{user_id}_{int(time.time())}_{filename}"
            image_path = os.path.join(self.upload_dir, unique_filename)
            
            image_file.seek(0)
            image_file.save(image_path)
            
            # Use basic heuristics if category or color missing
            if not category or category == "Unknown":
                category = "Top" # fallback heuristic
                
            if not color or color == "Unknown":
                color = "Black" # fallback heuristic
                
            new_item = {
                'name': 'Potential Purchase',
                'category': category,
                'color': color,
                'image_path': image_path
            }
            
            # Fetch current wardrobe
            wardrobe_service = WardrobeService(self.db)
            current_wardrobe = wardrobe_service.get_wardrobe(user_id)
            
            # Fetch user profile to get preferred_colors if they exist
            cursor = self.db.cursor(dictionary=True)
            cursor.execute("SELECT * FROM profiles WHERE user_id = %s", (user_id,))
            profile = cursor.fetchone()
            cursor.close()
            
            # Analyze using ShoppingAssistant
            assistant = ShoppingAssistant(current_wardrobe, profile)
            result = assistant.analyze_item(new_item)
            
            # Also attach the detected/used category and color back to the client
            result['detected_category'] = category
            result['detected_color'] = color
            result['image_path'] = image_path
            
            return result, None
            
        except Exception as e:
            print(f"ShoppingService Error: {e}")
            return None, "An error occurred while analyzing the item."
