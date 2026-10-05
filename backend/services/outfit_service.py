from recommendation.outfit_generator import OutfitGenerator
import traceback

class OutfitService:
    def __init__(self, db_connection):
        self.db = db_connection
        
    def generate_outfits(self, user_id, limit=10, occasion=None, weather_data=None):
        try:
            cursor = self.db.cursor(dictionary=True)
            
            # Fetch user profile
            cursor.execute("SELECT p.*, u.gender FROM profiles p JOIN users u ON p.user_id = u.id WHERE p.user_id = %s", (user_id,))
            profile = cursor.fetchone()
            
            # Fetch user wardrobe
            cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s", (user_id,))
            wardrobe_items = cursor.fetchall()
            
            # Fetch appearance data
            cursor.execute("SELECT skin_tone FROM appearance_analysis WHERE user_id = %s", (user_id,))
            appearance = cursor.fetchone()
            
            cursor.close()
            
            # Initialize Generator
            generator = OutfitGenerator(wardrobe_items, profile, appearance)
            result = generator.generate_outfits(limit=limit, occasion=occasion, weather_data=weather_data)
            
            return result
            
        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
