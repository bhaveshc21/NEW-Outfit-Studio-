OCCASIONS = [
    "College",
    "Office",
    "Interview",
    "Party",
    "Wedding",
    "Travel",
    "Casual"
]

def get_occasion_score(item, occasion):
    """
    Returns a suitability score (0-100) for an item based on the occasion.
    Also returns a boolean indicating if it's a completely invalid choice (e.g. shorts for wedding).
    """
    if not occasion:
        return 50, False  # Neutral score if no occasion provided
        
    occasion = occasion.lower()
    cat = item.get('category', '').lower()
    
    score = 50
    is_invalid = False
    
    if occasion == 'college':
        if 't-shirt' in cat or 'jean' in cat or 'sneaker' in cat or 'casual' in cat:
            score += 30
        elif 'formal' in cat or 'suit' in cat:
            score -= 20
            
    elif occasion == 'office':
        if 'formal' in cat or 'shirt' in cat or 'trouser' in cat:
            score += 30
        if 't-shirt' in cat or 'short' in cat or 'sneaker' in cat:
            score -= 30
            if 'short' in cat:
                is_invalid = True
                
    elif occasion == 'interview':
        if 'formal' in cat or 'suit' in cat or 'tie' in cat or 'shirt' in cat:
            score += 40
        if 't-shirt' in cat or 'short' in cat or 'jean' in cat or 'sneaker' in cat:
            score -= 40
            is_invalid = True
            
    elif occasion == 'party':
        if 'party' in cat or 'dress' in cat or 'stylish' in cat or 'jacket' in cat:
            score += 30
        if 'formal' in cat and 'trouser' not in cat: # some formal trousers can be partied in
            score -= 10
            
    elif occasion == 'wedding':
        if 'formal' in cat or 'suit' in cat or 'traditional' in cat or 'dress' in cat:
            score += 40
        if 't-shirt' in cat or 'short' in cat or 'jean' in cat or 'sneaker' in cat:
            score -= 40
            is_invalid = True
            
    elif occasion == 'travel':
        if 'casual' in cat or 't-shirt' in cat or 'jean' in cat or 'sneaker' in cat or 'comfortable' in cat:
            score += 30
        if 'formal' in cat or 'suit' in cat:
            score -= 30
            
    elif occasion == 'casual':
        if 'casual' in cat or 't-shirt' in cat or 'jean' in cat or 'sneaker' in cat or 'short' in cat:
            score += 30
        if 'formal' in cat or 'suit' in cat:
            score -= 30
            
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
    categories = [item.get('category', '').lower() for item in wardrobe_items]
    
    missing = []
    
    if occasion in ['office', 'interview', 'wedding']:
        has_formal_top = any('shirt' in c or 'formal' in c for c in categories if 't-shirt' not in c)
        has_formal_bottom = any('trouser' in c or 'formal' in c for c in categories)
        has_formal_shoes = any('formal' in c or 'leather' in c for c in categories if 'shoe' in c)
        
        if not has_formal_top:
            missing.append({"item": "Formal shirt", "reason": f"Would create more suitable {occasion} combinations."})
        if not has_formal_bottom:
            missing.append({"item": "Formal trousers", "reason": f"Would complete more suitable {occasion} combinations."})
        if not has_formal_shoes:
            missing.append({"item": "Formal footwear", "reason": f"Would complete more suitable {occasion} combinations."})
            
    elif occasion in ['college', 'travel', 'casual']:
        has_casual_top = any('t-shirt' in c or 'casual' in c for c in categories)
        has_casual_bottom = any('jean' in c or 'short' in c for c in categories)
        has_casual_shoes = any('sneaker' in c or 'casual' in c for c in categories)
        
        if not has_casual_top:
            missing.append({"item": "Casual t-shirt", "reason": f"Essential for comfortable {occasion} wear."})
        if not has_casual_shoes:
            missing.append({"item": "Comfortable sneakers", "reason": f"Provides comfort and style for {occasion}."})
            
    return missing
