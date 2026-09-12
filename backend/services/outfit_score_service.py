import traceback
from recommendation.outfit_score import evaluate_outfit
from recommendation.outfit_generator import OutfitGenerator
from services.weather_service import WeatherService

class OutfitScoreService:
    def __init__(self, db_connection):
        self.db = db_connection

    def score_outfit(self, user_id, outfit_request):
        """
        outfit_request: {
            "outfit": {
                "top_id": 1,
                "bottom_id": 2,
                "footwear_id": 3,
                "accessory_ids": [4]
            },
            "occasion": "Office",
            "weather": {
                "temperature": 28,
                "condition": "Rain"
            } # optional
        }
        """
        try:
            outfit_data = outfit_request.get("outfit", {})
            top_id = outfit_data.get("top_id")
            bottom_id = outfit_data.get("bottom_id")
            footwear_id = outfit_data.get("footwear_id")
            accessory_ids = outfit_data.get("accessory_ids", [])

            if not top_id or not bottom_id or not footwear_id:
                return {"success": False, "message": "A valid outfit with at least a top, bottom and footwear is required."}

            cursor = self.db.cursor(dictionary=True)

            # Fetch all required items and verify ownership
            item_ids = [top_id, bottom_id, footwear_id] + accessory_ids
            format_strings = ','.join(['%s'] * len(item_ids))
            
            query = f"SELECT * FROM wardrobe_items WHERE id IN ({format_strings}) AND user_id = %s"
            cursor.execute(query, tuple(item_ids) + (user_id,))
            items = cursor.fetchall()

            if len(items) < len(set(item_ids)):
                return {"success": False, "message": "One or more outfit items are invalid or do not belong to you."}

            # Map items
            item_map = {item['id']: item for item in items}
            current_outfit = {
                "top": item_map.get(top_id),
                "bottom": item_map.get(bottom_id),
                "footwear": item_map.get(footwear_id),
                "accessories": [item_map.get(acc_id) for acc_id in accessory_ids if acc_id in item_map]
            }

            occasion = outfit_request.get("occasion")
            weather_data = outfit_request.get("weather")
            
            # If weather is not provided but location is, attempt to fetch it
            if not weather_data and "location" in outfit_request:
                weather_service = WeatherService()
                weather_data = weather_service.get_weather(outfit_request.get("location"))

            # 1. Evaluate current outfit
            evaluation_result = evaluate_outfit(current_outfit, occasion, weather_data)
            
            if not evaluation_result.get("success"):
                return evaluation_result
                
            current_score = evaluation_result.get("fashion_score")

            # 2. Attempt to find an improved outfit using the user's wardrobe
            # Fetch user profile and entire wardrobe
            cursor.execute("SELECT * FROM profiles WHERE user_id = %s", (user_id,))
            profile = cursor.fetchone()
            
            cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s", (user_id,))
            wardrobe_items = cursor.fetchall()
            cursor.close()

            generator = OutfitGenerator(wardrobe_items, profile)
            # The generator returns a list of sorted outfits
            gen_result = generator.generate_outfits(limit=5, occasion=occasion, weather_data=weather_data)
            
            improved_outfit = None
            improved_score = current_score

            if gen_result.get("success") and gen_result.get("data", {}).get("outfits"):
                best_generated = gen_result["data"]["outfits"][0]
                # Evaluate the best generated outfit to see its fashion score
                best_gen_eval = evaluate_outfit(
                    {
                        "top": best_generated["top"],
                        "bottom": best_generated["bottom"],
                        "footwear": best_generated["footwear"],
                        "accessories": best_generated.get("accessories", [])
                    },
                    occasion,
                    weather_data
                )
                
                if best_gen_eval.get("success") and best_gen_eval.get("fashion_score", 0) > current_score:
                    improved_score = best_gen_eval["fashion_score"]
                    improved_outfit = {
                        "top": best_generated["top"],
                        "bottom": best_generated["bottom"],
                        "footwear": best_generated["footwear"],
                        "accessories": best_generated.get("accessories", [])
                    }
                    
            if not improved_outfit:
                if "Your current wardrobe does not contain a better combination right now." not in evaluation_result["improvement_suggestions"]:
                    evaluation_result["improvement_suggestions"].append("Your current wardrobe does not contain a significantly better combination right now.")

            return {
                "success": True,
                "message": "Outfit scored successfully.",
                "data": {
                    "fashion_score": current_score,
                    "rating": evaluation_result.get("rating"),
                    "factors": evaluation_result.get("factors"),
                    "current_outfit": current_outfit,
                    "improvement_suggestions": evaluation_result.get("improvement_suggestions"),
                    "improved_outfit": improved_outfit,
                    "improved_score": improved_score if improved_outfit else None
                }
            }

        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
