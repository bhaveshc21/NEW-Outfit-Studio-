import traceback
from recommendation.outfit_score import evaluate_outfit
from services.weather_service import WeatherService
from services.appearance_service import AppearanceService

class OutfitExplanationService:
    def __init__(self, db_connection):
        self.db = db_connection

    def explain_outfit(self, user_id, data):
        """
        data: {
            "outfit": {
                "top_id": 1,
                "bottom_id": 2, 
                "footwear_id": 3,
                "accessory_ids": [4]
            },
            "occasion": "Casual",
            "location": "Pune",
            "weather": {...} # optional
        }
        """
        try:
            req_outfit = data.get("outfit", {})
            if not req_outfit:
                return {"success": False, "message": "Outfit data is required."}

            occasion = data.get("occasion")
            weather_data = data.get("weather")
            
            if not weather_data and "location" in data:
                weather_service = WeatherService()
                weather_data = weather_service.get_weather(data.get("location"))

            cursor = self.db.cursor(dictionary=True)

            # Support flat IDs and nested objects
            top_id = req_outfit.get("top_id") or (req_outfit.get("top", {}).get("id") if isinstance(req_outfit.get("top"), dict) else None)
            outerwear_id = req_outfit.get("outerwear_id") or (req_outfit.get("outerwear", {}).get("id") if isinstance(req_outfit.get("outerwear"), dict) else None)
            bottom_id = req_outfit.get("bottom_id") or (req_outfit.get("bottom", {}).get("id") if isinstance(req_outfit.get("bottom"), dict) else None)
            footwear_id = req_outfit.get("footwear_id") or (req_outfit.get("footwear", {}).get("id") if isinstance(req_outfit.get("footwear"), dict) else None)
            
            accessory_ids = req_outfit.get("accessory_ids", [])
            if not accessory_ids and req_outfit.get("accessories"):
                accessory_ids = [acc.get("id") for acc in req_outfit.get("accessories") if isinstance(acc, dict)]

            if not top_id or not footwear_id:
                return {"success": False, "message": "Outfit must have at least a top/dress and footwear."}

            item_ids = [top_id, footwear_id] + accessory_ids
            if bottom_id: item_ids.append(bottom_id)
            if outerwear_id: item_ids.append(outerwear_id)
            
            format_strings = ','.join(['%s'] * len(item_ids))
            query = f"SELECT * FROM wardrobe_items WHERE id IN ({format_strings}) AND user_id = %s"
            cursor.execute(query, tuple(item_ids) + (user_id,))
            items = cursor.fetchall()

            if len(items) < len(set(item_ids)):
                return {"success": False, "message": "One or more items in the outfit are invalid or do not belong to you."}

            item_map = {item['id']: item for item in items}
            current_outfit = {
                "top": item_map.get(top_id),
                "outerwear": item_map.get(outerwear_id) if outerwear_id else None,
                "bottom": item_map.get(bottom_id) if bottom_id else None,
                "footwear": item_map.get(footwear_id),
                "accessories": [item_map.get(acc_id) for acc_id in accessory_ids if acc_id in item_map]
            }

            # Evaluate outfit to get factors
            evaluation_result = evaluate_outfit(current_outfit, occasion, weather_data)
            
            if not evaluation_result.get("success"):
                return {"success": False, "message": f"Failed to evaluate outfit: {evaluation_result.get('message')}"}
                
            # Get Appearance info
            app_service = AppearanceService(self.db)
            appearance_data = app_service.get_appearance(user_id)

            factors_output = {}
            reasons_list = []
            
            eval_factors = evaluation_result.get("factors", {})
            
            # Wardrobe Factor
            valid_items = [item for item in items if item is not None]
            factors_output["wardrobe"] = {
                "available": True,
                "status": "PASS",
                "reason": f"This outfit uses {len(valid_items)} items already available in your wardrobe."
            }
            reasons_list.append(factors_output["wardrobe"]["reason"])

            # Color Coordination
            if "color_coordination" in eval_factors:
                c_factor = eval_factors["color_coordination"]
                factors_output["color"] = {
                    "available": True,
                    "status": c_factor["status"],
                    "reason": c_factor["reason"]
                }
                reasons_list.append(c_factor["reason"])

            # Occasion Suitability
            if "occasion" in eval_factors:
                o_factor = eval_factors["occasion"]
                factors_output["occasion"] = {
                    "available": bool(occasion),
                    "status": o_factor["status"],
                    "reason": o_factor["reason"]
                }
                if occasion:
                    reasons_list.append(o_factor["reason"])

            # Weather Suitability
            if "weather" in eval_factors:
                w_factor = eval_factors["weather"]
                factors_output["weather"] = {
                    "available": bool(weather_data),
                    "status": w_factor["status"],
                    "reason": w_factor["reason"]
                }
                if weather_data:
                    reasons_list.append(w_factor["reason"])
                    
            # Appearance
            if appearance_data and not isinstance(appearance_data, dict):
                # The appearance_service returns dict directly if exists or None, wait, checking the code...
                pass
            
            if appearance_data:
                factors_output["appearance"] = {
                    "available": True,
                    "status": "N/A",
                    "reason": f"Appearance information (Face: {appearance_data.get('face_shape', 'N/A')}, Body: {appearance_data.get('body_type', 'N/A')}, Skin: {appearance_data.get('skin_tone', 'N/A')}) is available, but was not used to score this specific recommendation."
                }
                reasons_list.append("Appearance information is available but not used for this recommendation.")
            else:
                factors_output["appearance"] = {
                    "available": False,
                    "status": "N/A",
                    "reason": "Appearance-based explanation is not available for this recommendation."
                }

            # Generate summary
            summary = "This outfit was recommended based on its overall styling harmony."
            if occasion and weather_data:
                summary = f"This outfit is recommended because it fits your selected occasion ({occasion}), works well with the current weather, and has good color coordination."
            elif occasion:
                summary = f"This outfit is recommended because it fits your selected occasion ({occasion}) and has good color coordination."
            elif weather_data:
                summary = f"This outfit is recommended because it works well with the current weather and has good color coordination."

            cursor.close()

            return {
                "success": True,
                "message": "Outfit explanation generated successfully.",
                "data": {
                    "title": "Why this outfit?",
                    "summary": summary,
                    "reasons": reasons_list,
                    "factors": factors_output,
                    "fashion_score": evaluation_result.get("fashion_score")
                }
            }

        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": f"Service error: {str(e)}"}
