NEUTRAL_COLORS = {
    'black', 'white', 'grey', 'gray', 'beige', 'brown', 'cream', 'navy', 'tan'
}

COMPATIBLE_PAIRS = {
    # Blue goes well with these
    frozenset(['blue', 'white']),
    frozenset(['blue', 'black']),
    frozenset(['blue', 'grey']),
    frozenset(['blue', 'beige']),
    frozenset(['blue', 'brown']),
    
    # Red pairs
    frozenset(['red', 'black']),
    frozenset(['red', 'white']),
    frozenset(['red', 'navy']),
    frozenset(['red', 'grey']),
    
    # Green pairs
    frozenset(['green', 'brown']),
    frozenset(['green', 'beige']),
    frozenset(['green', 'white']),
    frozenset(['green', 'black']),
    
    # Yellow pairs
    frozenset(['yellow', 'blue']),
    frozenset(['yellow', 'navy']),
    frozenset(['yellow', 'white']),
    frozenset(['yellow', 'grey']),
    
    # Pink pairs
    frozenset(['pink', 'white']),
    frozenset(['pink', 'grey']),
    frozenset(['pink', 'navy']),
    frozenset(['pink', 'black']),
}

def normalize_color(color_name):
    """Normalize a color string for matching."""
    if not color_name:
        return ""
    return color_name.strip().lower()

def is_compatible(color1, color2):
    """
    Check if two colors are compatible.
    Returns True if:
    - They are the same color
    - Both are neutral colors
    - One of them is a neutral color
    - They are explicitly defined in COMPATIBLE_PAIRS
    """
    c1 = normalize_color(color1)
    c2 = normalize_color(color2)
    
    if not c1 or not c2:
        return True # If a color is missing, assume it's compatible rather than rejecting
        
    if c1 == c2:
        return True
        
    if c1 in NEUTRAL_COLORS or c2 in NEUTRAL_COLORS:
        return True
        
    pair = frozenset([c1, c2])
    if pair in COMPATIBLE_PAIRS:
        return True
        
    return False

def calculate_outfit_color_score(top_color, bottom_color, footwear_color):
    """
    Calculate a basic color harmony score.
    Max score 30 for perfect combinations.
    """
    score = 0
    if is_compatible(top_color, bottom_color):
        score += 15
    if is_compatible(bottom_color, footwear_color):
        score += 10
    if is_compatible(top_color, footwear_color):
        score += 5
        
    return score
