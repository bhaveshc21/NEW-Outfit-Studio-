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

def color_pair_score(color1, color2):
    """Calculate a compatibility score between 0 and 100 for two colors."""
    c1 = normalize_color(color1)
    c2 = normalize_color(color2)
    
    if not c1 or not c2:
        return 70.0  # Default safe score if colors are unknown
        
    if c1 == c2:
        if c1 in NEUTRAL_COLORS:
            return 85.0
        return 80.0  # Monochromatic look
        
    pair = frozenset([c1, c2])
    if pair in COMPATIBLE_PAIRS:
        return 100.0
        
    is_c1_neutral = c1 in NEUTRAL_COLORS
    is_c2_neutral = c2 in NEUTRAL_COLORS
    
    if is_c1_neutral and is_c2_neutral:
        return 90.0
        
    if is_c1_neutral or is_c2_neutral:
        return 95.0
        
    return 30.0  # Clashing colors

def calculate_outfit_color_score(top_color, bottom_color, footwear_color):
    """
    Calculate a basic color harmony score out of 100.
    """
    tb_score = color_pair_score(top_color, bottom_color)
    bf_score = color_pair_score(bottom_color, footwear_color)
    tf_score = color_pair_score(top_color, footwear_color)
    
    # Weights: Top/Bottom is most important (50%), Bottom/Footwear (30%), Top/Footwear (20%)
    return (tb_score * 0.5) + (bf_score * 0.3) + (tf_score * 0.2)
