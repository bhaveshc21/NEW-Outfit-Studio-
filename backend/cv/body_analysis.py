def estimate_body_type(profile_data):
    """
    Estimates body type using profile measurements.
    Categories: Rectangle, Triangle/Pear, Inverted Triangle, Hourglass, Apple
    Measurements: chest, waist, hip, shoulder (all in cm/inches)
    """
    if not profile_data:
        return None, "Profile measurements are missing."
        
    try:
        chest = float(profile_data.get('chest', 0))
        waist = float(profile_data.get('waist', 0))
        hip = float(profile_data.get('hip', 0))
        shoulder = float(profile_data.get('shoulder', 0))
    except (TypeError, ValueError):
        return None, "Measurements must be numbers."
    
    if chest == 0 or waist == 0 or hip == 0:
        return None, "Insufficient measurements (chest, waist, hip required)."
        
    # Hourglass: Chest and hips are similar, waist is significantly smaller
    if abs(chest - hip) <= 3 and waist < (chest * 0.75):
        return "Hourglass", None
        
    # Rectangle: Chest, waist, and hips are all fairly similar
    if abs(chest - hip) <= 3 and abs(chest - waist) <= 3:
        return "Rectangle", None
        
    # Triangle/Pear: Hips are significantly larger than chest
    if hip > chest + 3:
        return "Triangle/Pear", None
        
    # Inverted Triangle: Chest/Shoulders significantly larger than hips
    if chest > hip + 3 or (shoulder > 0 and shoulder > hip + 3):
        return "Inverted Triangle", None
        
    # Apple: Waist is larger than chest and hips
    if waist > chest and waist > hip:
        return "Apple", None
        
    # Default fallback
    return "Rectangle", None
