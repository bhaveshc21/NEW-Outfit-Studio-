import cv2
import numpy as np

def detect_dominant_color(image_path):
    """
    Detects the dominant color of an image using OpenCV and K-Means clustering.
    Returns the closest basic color name.
    """
    image = cv2.imread(image_path)
    if image is None:
        return "Unknown"
        
    # Resize to speed up processing
    image = cv2.resize(image, (100, 100))
    
    # Crop the center to avoid background dominance
    h, w = image.shape[:2]
    start_y = h // 4
    end_y = h * 3 // 4
    start_x = w // 4
    end_x = w * 3 // 4
    image = image[start_y:end_y, start_x:end_x]
    
    # Convert BGR to RGB
    image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    
    # Reshape the image to be a list of pixels
    pixels = image.reshape((-1, 3))
    pixels = np.float32(pixels)
    
    # Define criteria, number of clusters(K) and apply kmeans()
    # criteria = (type, max_iter, epsilon)
    criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 10, 1.0)
    K = 1
    _, labels, centers = cv2.kmeans(pixels, K, None, criteria, 10, cv2.KMEANS_RANDOM_CENTERS)
    
    # Get the dominant color
    dominant_color = np.uint8(centers)[0]
    
    # Convert to standard color name
    return rgb_to_color_name(dominant_color)

def rgb_to_color_name(rgb):
    import colorsys
    r, g, b = rgb
    
    # Normalize RGB to 0-1
    h, s, v = colorsys.rgb_to_hsv(r/255.0, g/255.0, b/255.0)
    
    # Convert back to standard scales: H (0-360), S (0-100), V (0-100)
    h = h * 360
    s = s * 100
    v = v * 100
    
    # Grayscale/Black/White check
    if v < 15:
        return "Black"
    if v > 85 and s < 15:
        return "White"
    if s < 15:
        return "Grey"
        
    # Hue-based classification
    if h < 15 or h >= 345:
        return "Red"
    elif 15 <= h < 45:
        if s < 35 and v > 60: return "Beige"
        if v < 60: return "Brown"
        return "Orange"
    elif 45 <= h < 65:
        if s < 35 and v > 60: return "Beige"
        return "Yellow"
    elif 65 <= h < 150:
        return "Green"
    elif 150 <= h < 190:
        return "Cyan"
    elif 190 <= h < 270:
        return "Blue"
    elif 270 <= h < 315:
        return "Purple"
    elif 315 <= h < 345:
        return "Pink"
    else:
        return "Unknown"
