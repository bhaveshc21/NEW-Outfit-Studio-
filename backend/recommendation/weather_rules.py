def get_weather_score(item, weather_data):
    """
    Returns a suitability score (0-100) for an item based on the weather.
    Also returns a boolean indicating if it's a completely invalid choice (e.g. heavy jacket in 40C).
    """
    if not weather_data:
        return 50, False  # Neutral score if no weather provided
        
    temp = weather_data.get('temperature', 20)
    condition = weather_data.get('condition', 'Clear').lower()
    
    cat = item.get('category', '').lower()
    
    score = 50
    is_invalid = False
    
    # Temperature rules
    if temp >= 28: # HOT
        if 'jacket' in cat or 'sweater' in cat or 'coat' in cat or 'winter' in cat:
            score -= 40
            is_invalid = True
        elif 'short' in cat or 't-shirt' in cat or 'light' in cat:
            score += 30
    elif 15 <= temp < 28: # MILD
        score += 10 # generally most clothes are fine
    elif temp < 15: # COLD
        if 'jacket' in cat or 'sweater' in cat or 'coat' in cat or 'winter' in cat:
            score += 40
        elif 'short' in cat or 'sleeveless' in cat:
            score -= 30
            is_invalid = True
            
    # Condition rules
    if 'rain' in condition or 'thunderstorm' in condition:
        if 'jacket' in cat or 'rain' in cat or 'waterproof' in cat:
            score += 30
        if 'sneaker' in cat and 'canvas' in cat:
            score -= 20
    elif 'snow' in condition:
        if 'jacket' in cat or 'coat' in cat or 'winter' in cat or 'boot' in cat:
            score += 30
        if 'sneaker' in cat or 'short' in cat:
            score -= 40
            is_invalid = True
            
    # clamp score
    score = max(0, min(100, score))
    return score, is_invalid

def get_missing_weather_categories(wardrobe_items, weather_data, occasion):
    """
    Identifies what the user is missing for the current weather.
    Returns a list of missing item strings.
    """
    if not weather_data:
        return []
        
    temp = weather_data.get('temperature', 20)
    condition = weather_data.get('condition', 'Clear').lower()
    occasion = occasion.lower() if occasion else ''
    
    categories = [item.get('category', '').lower() for item in wardrobe_items]
    
    missing = []
    
    if temp < 15:
        has_warm_layer = any('jacket' in c or 'sweater' in c or 'coat' in c for c in categories)
        if not has_warm_layer:
            if occasion in ['office', 'interview', 'wedding']:
                missing.append({"item": "Formal jacket or coat", "reason": "Would expand formal outfit options for cooler weather."})
            else:
                missing.append({"item": "Lightweight jacket", "reason": "Would expand casual outfit options for cooler weather."})
                
    if 'rain' in condition or 'thunderstorm' in condition:
        has_rain_protection = any('jacket' in c or 'coat' in c for c in categories)
        if not has_rain_protection:
            missing.append({"item": "Rain jacket or outerwear", "reason": f"Could improve {occasion if occasion else 'your'} outfit options during rainy weather."})
            
    return missing
