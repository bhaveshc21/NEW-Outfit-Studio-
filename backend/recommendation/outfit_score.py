from recommendation.color_rules import calculate_outfit_color_score
from recommendation.occasion_rules import get_occasion_score
from recommendation.weather_rules import get_weather_score

def evaluate_outfit(outfit, occasion=None, weather_data=None):
    """
    Evaluates an outfit out of 100 points based on 5 factors:
    - Color Coordination (20)
    - Occasion Suitability (20)
    - Weather Suitability (20)
    - Clothing Combination (20)
    - Accessories (20)
    """
    factors = {}
    total_score = 0
    suggestions = []
    
    top = outfit.get("top")
    bottom = outfit.get("bottom")
    footwear = outfit.get("footwear")
    accessories = outfit.get("accessories", [])

    if not top or not bottom or not footwear:
        return {
            "success": False,
            "message": "A complete outfit must have a top, bottom, and footwear."
        }

    # 1. Color Coordination (0-20)
    color_raw = calculate_outfit_color_score(top.get('color'), bottom.get('color'), footwear.get('color'))
    # calculate_outfit_color_score max is 30. We scale it to 20.
    color_score = min(20, round((color_raw / 30) * 20)) if color_raw > 0 else 0
    
    if color_score >= 15:
        color_status = "PASS"
        color_label = "Excellent"
        color_reason = "The colors coordinate very well together."
    elif color_score >= 10:
        color_status = "PASS"
        color_label = "Good"
        color_reason = "The colors form a good combination."
    else:
        color_status = "NEEDS_IMPROVEMENT"
        color_label = "Poor"
        color_reason = "The colors in this outfit clash."
        suggestions.append("Consider replacing the top or bottom with a color that coordinates better.")
        
    factors["color_coordination"] = {
        "score": color_score,
        "max_score": 20,
        "status": color_status,
        "label": color_label,
        "reason": color_reason
    }

    # 2. Occasion Suitability (0-20)
    if occasion:
        top_occ_raw, top_occ_inv = get_occasion_score(top, occasion)
        bot_occ_raw, bot_occ_inv = get_occasion_score(bottom, occasion)
        shoe_occ_raw, shoe_occ_inv = get_occasion_score(footwear, occasion)
        
        occ_avg = (top_occ_raw + bot_occ_raw + shoe_occ_raw) / 3
        # get_occasion_score is 0-100. Scale to 20.
        occ_score = min(20, round((occ_avg / 100) * 20))
        
        if top_occ_inv or bot_occ_inv or shoe_occ_inv:
            occ_score = max(0, occ_score - 10) # Heavy penalty
            
        if occ_score >= 15:
            occ_status = "PASS"
            occ_label = "Suitable"
            occ_reason = f"The outfit is highly appropriate for {occasion}."
        elif occ_score >= 10:
            occ_status = "PASS"
            occ_label = "Acceptable"
            occ_reason = f"The outfit works for {occasion}."
        else:
            occ_status = "NEEDS_IMPROVEMENT"
            occ_label = "Inappropriate"
            occ_reason = f"This outfit is not well-suited for {occasion}."
            suggestions.append(f"Choose more appropriate clothing for {occasion}.")
    else:
        occ_score = 20 # Neutral
        occ_status = "PASS"
        occ_label = "N/A"
        occ_reason = "No occasion specified."
        
    factors["occasion"] = {
        "score": occ_score,
        "max_score": 20,
        "status": occ_status,
        "label": occ_label,
        "reason": occ_reason
    }

    # 3. Weather Suitability (0-20)
    if weather_data:
        top_wea_raw, top_wea_inv = get_weather_score(top, weather_data)
        bot_wea_raw, bot_wea_inv = get_weather_score(bottom, weather_data)
        shoe_wea_raw, shoe_wea_inv = get_weather_score(footwear, weather_data)
        
        wea_avg = (top_wea_raw + bot_wea_raw + shoe_wea_raw) / 3
        wea_score = min(20, round((wea_avg / 100) * 20))
        
        if top_wea_inv or bot_wea_inv or shoe_wea_inv:
            wea_score = max(0, wea_score - 10)
            
        if wea_score >= 15:
            wea_status = "PASS"
            wea_label = "Suitable"
            wea_reason = "The outfit is perfect for the current weather."
        elif wea_score >= 10:
            wea_status = "PASS"
            wea_label = "Acceptable"
            wea_reason = "The outfit is acceptable for the weather."
        else:
            wea_status = "NEEDS_IMPROVEMENT"
            wea_label = "Unsuitable"
            wea_reason = "The outfit is not ideal for the current weather."
            suggestions.append("Replace items with more weather-appropriate clothing.")
    else:
        wea_score = 20 # Neutral
        wea_status = "PASS"
        wea_label = "N/A"
        wea_reason = "No weather specified."
        
    factors["weather"] = {
        "score": wea_score,
        "max_score": 20,
        "status": wea_status,
        "label": wea_label,
        "reason": wea_reason
    }

    # 4. Clothing Combination (0-20)
    comb_score = 20
    is_invalid_combo = False
    
    # Simple check for incompatible items.
    top_cat = top.get('category', '').lower()
    bot_cat = bottom.get('category', '').lower()
    shoe_cat = footwear.get('category', '').lower()
    
    if ('formal' in top_cat or 'suit' in top_cat) and ('short' in bot_cat or 'sweat' in bot_cat):
        comb_score -= 10
        is_invalid_combo = True
        
    if ('formal' in top_cat or 'formal' in bot_cat) and ('sneaker' in shoe_cat or 'sport' in shoe_cat):
        comb_score -= 5
        
    if ('t-shirt' in top_cat or 'sport' in top_cat) and ('formal' in shoe_cat):
        comb_score -= 5
        
    comb_score = max(0, comb_score)
    
    if comb_score >= 15:
        comb_status = "PASS"
        comb_label = "Good"
        comb_reason = "The clothing pieces form a well-balanced combination."
    else:
        comb_status = "NEEDS_IMPROVEMENT"
        comb_label = "Mismatched"
        comb_reason = "Some clothing pieces clash in style."
        suggestions.append("Consider replacing mismatched clothing pieces.")
        
    factors["combination"] = {
        "score": comb_score,
        "max_score": 20,
        "status": comb_status,
        "label": comb_label,
        "reason": comb_reason
    }

    # 5. Accessories (0-20)
    acc_score = 15 # Default good if none, but room for improvement
    has_accessory = len(accessories) > 0
    
    if has_accessory:
        if len(accessories) > 3:
            acc_score = 10 # Over-accessorized
            acc_label = "Too Many"
            acc_status = "NEEDS_IMPROVEMENT"
            acc_reason = "Too many accessories can clutter the outfit."
            suggestions.append("Consider reducing the number of accessories.")
        else:
            acc_score = 20
            acc_label = "Excellent"
            acc_status = "PASS"
            acc_reason = "Accessories complement the outfit well."
    else:
        acc_label = "Acceptable"
        acc_status = "NEEDS_IMPROVEMENT"
        acc_reason = "An accessory could complete the outfit."
        suggestions.append("Add a suitable accessory (like a watch, belt, or hat) to complete the outfit.")
        
    factors["accessories"] = {
        "score": acc_score,
        "max_score": 20,
        "status": acc_status,
        "label": acc_label,
        "reason": acc_reason
    }

    # Final Score Calculation
    total_score = color_score + occ_score + wea_score + comb_score + acc_score
    total_score = max(0, min(100, total_score))
    
    # Rating Label
    if total_score >= 90:
        rating = "Excellent"
    elif total_score >= 80:
        rating = "Very Good"
    elif total_score >= 70:
        rating = "Good"
    elif total_score >= 60:
        rating = "Fair"
    else:
        rating = "Needs Improvement"

    return {
        "success": True,
        "fashion_score": total_score,
        "rating": rating,
        "factors": factors,
        "improvement_suggestions": suggestions
    }
