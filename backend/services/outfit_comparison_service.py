import traceback
from recommendation.outfit_score import evaluate_outfit
from services.weather_service import WeatherService

class OutfitComparisonService:
    def __init__(self, db_connection):
        self.db = db_connection

    def compare_outfits(self, user_id, data):
        """
        data: {
            "outfits": [
                {
                    "id": "A", # optional
                    "top_id": 1,
                    "outerwear_id": 5, 
                    "bottom_id": 2, 
                    "footwear_id": 3,
                    "accessory_ids": [4]
                },
                ...
            ],
            "occasion": "Casual",
            "location": "Pune",
            "weather": {...}
        }
        """
        try:
            outfits_req = data.get("outfits", [])
            if not outfits_req or len(outfits_req) < 2:
                return {"success": False, "message": "Please select at least two outfits to compare."}

            occasion = data.get("occasion")
            weather_data = data.get("weather")
            
            if not weather_data and "location" in data:
                weather_service = WeatherService()
                weather_data = weather_service.get_weather(data.get("location"))

            cursor = self.db.cursor(dictionary=True)
            compared_outfits = []

            for idx, req_outfit in enumerate(outfits_req):
                outfit_id = req_outfit.get("id", f"Outfit {idx + 1}")
                
                # Support both flat IDs (top_id) and nested objects (top.id) from GeneratedOutfit model
                top_id = req_outfit.get("top_id") or (req_outfit.get("top", {}).get("id") if isinstance(req_outfit.get("top"), dict) else None)
                outerwear_id = req_outfit.get("outerwear_id") or (req_outfit.get("outerwear", {}).get("id") if isinstance(req_outfit.get("outerwear"), dict) else None)
                bottom_id = req_outfit.get("bottom_id") or (req_outfit.get("bottom", {}).get("id") if isinstance(req_outfit.get("bottom"), dict) else None)
                footwear_id = req_outfit.get("footwear_id") or (req_outfit.get("footwear", {}).get("id") if isinstance(req_outfit.get("footwear"), dict) else None)
                
                accessory_ids = req_outfit.get("accessory_ids", [])
                if not accessory_ids and req_outfit.get("accessories"):
                    accessory_ids = [acc.get("id") for acc in req_outfit.get("accessories") if isinstance(acc, dict)]

                if not top_id or not footwear_id:
                    return {"success": False, "message": f"Outfit {outfit_id} must have at least a top/dress and footwear."}

                item_ids = [top_id, footwear_id] + accessory_ids
                if bottom_id: item_ids.append(bottom_id)
                if outerwear_id: item_ids.append(outerwear_id)
                
                format_strings = ','.join(['%s'] * len(item_ids))
                query = f"SELECT * FROM wardrobe_items WHERE id IN ({format_strings}) AND user_id = %s"
                cursor.execute(query, tuple(item_ids) + (user_id,))
                items = cursor.fetchall()

                if len(items) < len(set(item_ids)):
                    return {"success": False, "message": f"One or more items in {outfit_id} are invalid or do not belong to you."}

                item_map = {item['id']: item for item in items}
                current_outfit = {
                    "top": item_map.get(top_id),
                    "outerwear": item_map.get(outerwear_id) if outerwear_id else None,
                    "bottom": item_map.get(bottom_id) if bottom_id else None,
                    "footwear": item_map.get(footwear_id),
                    "accessories": [item_map.get(acc_id) for acc_id in accessory_ids if acc_id in item_map]
                }

                evaluation_result = evaluate_outfit(current_outfit, occasion, weather_data)
                
                if not evaluation_result.get("success"):
                    return {"success": False, "message": f"Failed to evaluate {outfit_id}: {evaluation_result.get('message')}"}

                factors_dict = evaluation_result.get("factors", {})
                flat_factors = {}
                for f_key, f_val in factors_dict.items():
                    key_title = f_key.replace("_", " ").title()
                    if isinstance(f_val, dict) and "reason" in f_val:
                        flat_factors[key_title] = f_val["reason"]
                    else:
                        flat_factors[key_title] = str(f_val)

                compared_outfits.append({
                    "id": outfit_id,
                    "outfit_index": idx,
                    "fashion_score": evaluation_result.get("fashion_score"),
                    "rating": evaluation_result.get("rating"),
                    "factors": flat_factors,
                    "items": current_outfit
                })

            cursor.close()

            return {
                "success": True,
                "message": "Outfits compared successfully.",
                "results": compared_outfits,
                "occasion": occasion,
                "weather": weather_data
            }

        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
