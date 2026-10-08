from recommendation.outfit_generator import OutfitGenerator, is_long_dress
from recommendation.outfit_score import evaluate_outfit
from services.weather_service import WeatherService
import traceback

class CompleteLookService:
    def __init__(self, db_connection):
        self.db = db_connection

    def generate_complete_look(self, user_id, locked_item_id, limit=5, occasion=None, location=None):
        try:
            cursor = self.db.cursor(dictionary=True)
            
            # Fetch user profile
            cursor.execute("SELECT p.*, u.gender FROM profiles p JOIN users u ON p.user_id = u.id WHERE p.user_id = %s", (user_id,))
            profile = cursor.fetchone()
            
            # Fetch user wardrobe
            cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s", (user_id,))
            wardrobe_items = cursor.fetchall()
            cursor.close()
            
            # Identify locked item
            locked_item = next((item for item in wardrobe_items if item['id'] == locked_item_id), None)
            if not locked_item:
                return {"success": False, "message": "Locked item not found or does not belong to you."}
                
            # Weather
            weather_data = None
            if location:
                weather_service = WeatherService()
                weather_data = weather_service.get_weather(location)
                
            # Initialize Generator
            generator = OutfitGenerator(wardrobe_items, profile)
            
            # Filter lists based on locked item
            locked_cat = locked_item.get('category', '').lower()
            missing_components = []
            
            if is_long_dress(locked_item):
                generator.dresses = [locked_item]
                generator.tops = []
                generator.bottoms = []
                missing_components = ["Footwear"]
            elif 'jacket' in locked_cat or 'blazer' in locked_cat or 'coat' in locked_cat or 'cardigan' in locked_cat or 'sweater' in locked_cat:
                generator.outerwear = [locked_item]
                missing_components = ["Inner Layer", "Bottom", "Footwear"]
            elif 'shirt' in locked_cat or 'top' in locked_cat or 'kurta' in locked_cat:
                generator.tops = [locked_item]
                generator.dresses = []
                missing_components = ["Bottom", "Footwear"]
            elif 'jean' in locked_cat or 'trouser' in locked_cat or 'pant' in locked_cat or 'bottom' in locked_cat or 'short' in locked_cat or 'skirt' in locked_cat or 'legging' in locked_cat or 'sweatpant' in locked_cat:
                generator.bottoms = [locked_item]
                generator.dresses = []
                missing_components = ["Top", "Footwear"]
            elif any(keyword in locked_cat for keyword in ['shoe', 'footwear', 'sneaker', 'slipper', 'sandal', 'sport', 'formal', 'heel', 'croc', 'boot']):
                generator.footwear = [locked_item]
                missing_components = ["Top", "Bottom"]
            elif 'accessory' in locked_cat or 'watch' in locked_cat or 'belt' in locked_cat or 'hat' in locked_cat:
                generator.accessories = [locked_item]
                missing_components = ["Top", "Bottom", "Footwear"]
            else:
                return {"success": False, "message": "Unknown category for locked item."}
                
            gen_result = generator.generate_outfits(limit=50, occasion=occasion, weather_data=weather_data)
            
            if not gen_result.get("success"):
                return gen_result
                
            generated_outfits = gen_result.get("data", {}).get("outfits", [])
            
            if not generated_outfits:
                return {
                    "success": False, 
                    "message": "We couldn't create a complete look because your wardrobe does not contain suitable pieces."
                }
                
            scored_looks = []
            seen_signatures = set()
            
            for outfit in generated_outfits:
                # Ensure the locked item is actually in the outfit
                outfit_item_ids = [
                    outfit.get('top', {}).get('id') if outfit.get('top') else None,
                    outfit.get('bottom', {}).get('id') if outfit.get('bottom') else None,
                    outfit.get('outerwear', {}).get('id') if outfit.get('outerwear') else None,
                    outfit.get('footwear', {}).get('id') if outfit.get('footwear') else None,
                ]
                
                if locked_item_id not in outfit_item_ids:
                    if not outfit.get('accessories') or locked_item_id not in [a.get('id') for a in outfit.get('accessories', [])]:
                        continue
                
                # Signature to avoid duplicate identical outfits
                signature = tuple(sorted([i for i in outfit_item_ids if i is not None]))
                if signature in seen_signatures:
                    continue
                seen_signatures.add(signature)
                
                eval_res = evaluate_outfit({
                    "top": outfit.get('top'),
                    "bottom": outfit.get('bottom'),
                    "outerwear": outfit.get('outerwear'),
                    "footwear": outfit.get('footwear'),
                    "accessories": outfit.get('accessories', [])
                }, occasion, weather_data)
                
                if eval_res.get("success"):
                    f_score = eval_res.get("fashion_score", 0)
                    reason = "Good combination."
                    factors = eval_res.get("factors", {})
                    # Try to extract the reason from combination or color
                    if factors.get("combination", {}).get("status") == "PASS":
                        reason = factors["combination"]["reason"]
                    elif factors.get("color_coordination", {}).get("status") == "PASS":
                        reason = factors["color_coordination"]["reason"]
                        
                    scored_looks.append({
                        "id": outfit.get('id', 0),
                        "recommendation_score": f_score,
                        "rating": eval_res.get("rating"),
                        "top": outfit.get('top'),
                        "outerwear": outfit.get('outerwear'),
                        "bottom": outfit.get('bottom'),
                        "footwear": outfit.get('footwear'),
                        "accessories": outfit.get('accessories', []),
                        "reason": reason,
                        "factors": factors
                    })
            
            # Sort by recommendation_score descending
            scored_looks.sort(key=lambda x: x["recommendation_score"], reverse=True)
            
            # Limit results
            final_looks = scored_looks[:limit]
            
            if not final_looks:
                return {
                    "success": False, 
                    "message": "Could not find compatible items for a complete look."
                }
                
            return {
                "success": True,
                "message": "Complete looks generated successfully.",
                "data": {
                    "locked_item": locked_item,
                    "missing_components": missing_components,
                    "looks": final_looks
                }
            }
            
        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
