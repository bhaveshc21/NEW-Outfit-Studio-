from recommendation.outfit_generator import OutfitGenerator
import traceback

class OutfitService:
    def __init__(self, db_connection):
        self.db = db_connection
        
    def generate_outfits(self, user_id, limit=10):
        try:
            cursor = self.db.cursor(dictionary=True)
            
            # Fetch user profile
            cursor.execute("SELECT * FROM profiles WHERE user_id = %s", (user_id,))
            profile = cursor.fetchone()
            
            # Fetch user wardrobe
            cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s", (user_id,))
            wardrobe_items = cursor.fetchall()
            
            cursor.close()
            
            # Initialize Generator
            generator = OutfitGenerator(wardrobe_items, profile)
            result = generator.generate_outfits(limit=limit)
            
            return result
            
        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
