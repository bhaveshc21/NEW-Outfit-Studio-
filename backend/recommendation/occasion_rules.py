OCCASIONS = [
    "College",
    "Office",
    "Interview",
    "Party",
    "Traditional",
    "Travel",
    "Casual"
]

def get_occasion_score(item, occasion, gender="Female"):
    """
    Returns a suitability score (0-100) for an item based on the occasion.
    Also returns a boolean indicating if it's a completely invalid choice (e.g. shorts for traditional).
    """
    if not occasion:
        return 50, False  # Neutral score if no occasion provided
        
    occasion = occasion.lower()
    cat = (item.get('category', '') + ' ' + item.get('subCategory', '') + ' ' + item.get('name', '')).lower()
    
    score = 50
    is_invalid = False
    
    is_male = gender and gender.lower() == "male"
    is_kurta = 'kurta' in cat
    
    # If it's a kurta for a male and the occasion is NOT traditional, it's strictly invalid.
    if is_male and is_kurta and occasion != 'traditional':
        return 0, True
        
    if is_male and occasion == 'traditional':
        if not any(w in cat for w in ['kurta', 'jean', 'sandal']):
            return 0, True
        else:
            return 90, False
    
    if occasion == 'college':
        if any(w in cat for w in ['tshirt', 'shirt', 'sleeveless top', 'long sleeved top', 'crop top', 'jean', 'skirt', 'legging', 'sweatpant', 'jacket', 'sneaker', 'sandal', 'sport', 'frock', 'kurta']):
            score += 30
        if any(w in cat for w in ['formal', 'blazer', 'tie', 'suit', 'long dress', 'heel', 'shorts']):
            score -= 30
            is_invalid = True
            
    elif occasion == 'office':
        if any(w in cat for w in ['shirt', 'long sleeved top', 'trouser', 'skirt', 'blazer', 'formal', 'heel', 'sneaker', 'shoe', 'sandal', 'slipper', 'kurta']):
            score += 40
        if any(w in cat for w in ['jean', 'tshirt', 'jacket', 'sleeveless top']):
            score -= 10 # slightly penalized but not invalid
        if any(w in cat for w in ['crop top', 'legging', 'sweatpant', 'sport', 'croc', 'bodycon', 'frock', 'long dress', 'shorts']):
            score -= 40
            is_invalid = True
                
    elif occasion == 'interview':
        if any(w in cat for w in ['shirt', 'long sleeved top', 'trouser', 'blazer', 'formal', 'heel', 'suit', 'tie']):
            score += 40
        if any(w in cat for w in ['tshirt', 'sleeveless top', 'crop top', 'jean', 'legging', 'sweatpant', 'jacket', 'sneaker', 'slipper', 'sandal', 'sport', 'croc', 'bodycon', 'frock', 'long dress', 'shorts', 'kurta']):
            score -= 40
            is_invalid = True
            
    elif occasion == 'party':
        if any(w in cat for w in ['crop top', 'skirt', 'jacket', 'blazer', 'heel', 'bodycon', 'frock', 'long dress']):
            score += 45
        if 'formal' in cat and 'shoe' not in cat:
            score += 45
        elif any(w in cat for w in ['shirt', 'sleeveless top', 'trouser', 'sneaker']):
            score += 20
        elif any(w in cat for w in ['tshirt', 'jean', 'legging', 'sweatpant']):
            score += 5
        if any(w in cat for w in ['slipper', 'sandal', 'sport', 'croc', 'suit', 'tie', 'kurta', 'shorts', 'formal shoe']):
            score -= 20
            is_invalid = True
            
    elif occasion == 'traditional':
        if any(w in cat for w in ['shirt', 'long sleeved top', 'trouser', 'blazer', 'formal', 'heel', 'long dress', 'suit', 'tie', 'kurta']):
            score += 40
        if any(w in cat for w in ['tshirt', 'sleeveless top', 'crop top', 'jean', 'legging', 'sweatpant', 'jacket', 'sneaker', 'slipper', 'sandal', 'sport', 'croc', 'bodycon', 'shorts']):
            score -= 40
            is_invalid = True
            
    elif occasion == 'travel':
        if any(w in cat for w in ['tshirt', 'sleeveless top', 'crop top', 'jean', 'legging', 'sweatpant', 'jacket', 'sneaker', 'sport', 'slipper', 'croc', 'kurta']):
            score += 40
        if any(w in cat for w in ['trouser', 'blazer', 'formal', 'heel', 'long dress', 'bodycon', 'frock', 'suit', 'tie', 'shorts']):
            score -= 40
            is_invalid = True
            
    elif occasion == 'casual':
        if any(w in cat for w in ['tshirt', 'crop top', 'sweatpant', 'shorts', 'sneaker', 'slipper', 'sandal', 'sport', 'croc']):
            score += 50
        elif any(w in cat for w in ['shirt', 'sleeveless top', 'jean', 'skirt', 'legging', 'jacket']):
            score += 20
        if any(w in cat for w in ['trouser', 'blazer', 'formal', 'heel', 'long dress', 'bodycon', 'suit', 'tie', 'kurta']):
            score -= 40
            is_invalid = True
            
    # clamp score
    score = max(0, min(100, score))
    return score, is_invalid

def get_missing_occasion_categories(wardrobe_items, occasion):
    """
    Identifies what the user is missing for the selected occasion.
    Returns a list of missing item strings.
    """
    if not occasion:
        return []
        
    occasion = occasion.lower()
    categories = [(item.get('category', '') + ' ' + item.get('subCategory', '') + ' ' + item.get('name', '')).lower() for item in wardrobe_items]
    
    missing = []
    
    if occasion in ['office', 'interview', 'traditional']:
        has_formal_top = any('shirt' in c or 'formal' in c or 'sleeved' in c for c in categories if 'tshirt' not in c)
        has_formal_bottom = any('trouser' in c or 'formal' in c for c in categories)
        has_formal_shoes = any('formal' in c or 'heel' in c for c in categories)
        
        if not has_formal_top:
            missing.append({"item": "Formal shirt", "reason": f"Would create more suitable {occasion} combinations."})
        if not has_formal_bottom:
            missing.append({"item": "Formal trousers", "reason": f"Would complete more suitable {occasion} combinations."})
        if not has_formal_shoes:
            missing.append({"item": "Formal footwear", "reason": f"Would complete more suitable {occasion} combinations."})
            
    elif occasion in ['college', 'travel', 'casual']:
        has_casual_top = any('tshirt' in c or 'crop top' in c for c in categories)
        has_casual_bottom = any('jean' in c or 'legging' in c or 'sweatpant' in c for c in categories)
        has_casual_shoes = any('sneaker' in c or 'sport' in c or 'croc' in c for c in categories)
        
        if not has_casual_top:
            missing.append({"item": "Casual t-shirt", "reason": f"Essential for comfortable {occasion} wear."})
        if not has_casual_bottom:
            missing.append({"item": "Casual bottoms (jeans, sweatpants)", "reason": f"Provides comfortable and stylish options for {occasion}."})
        if not has_casual_shoes:
            missing.append({"item": "Comfortable sneakers", "reason": f"Provides comfort and style for {occasion}."})
            
    return missing
