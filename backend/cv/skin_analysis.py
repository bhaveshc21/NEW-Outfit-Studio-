import cv2
import numpy as np

def estimate_skin_tone(cv_image):
    """
    Estimates skin tone category using OpenCV.
    Categories: Light, Medium, Tan, Deep
    """
    # Let's crop the center 20% of the image as a very rough "cheek/forehead" approximation
    height, width = cv_image.shape[:2]
    center_y, center_x = height // 2, width // 2
    crop_size_y = height // 10
    crop_size_x = width // 10
    
    # Avoid out of bounds
    if crop_size_y == 0 or crop_size_x == 0:
        return "Medium", None # Fallback
        
    skin_crop = cv_image[center_y - crop_size_y : center_y + crop_size_y, 
                         center_x - crop_size_x : center_x + crop_size_x]
                         
    # Convert to YCrCb color space which is good for skin tone analysis
    ycrcb = cv2.cvtColor(skin_crop, cv2.COLOR_BGR2YCrCb)
    
    # Calculate average Y (luminance) channel
    avg_y = np.mean(ycrcb[:,:,0])
    
    # Heuristic thresholds
    if avg_y > 180:
        return "Light", None
    elif avg_y > 130:
        return "Medium", None
    elif avg_y > 90:
        return "Tan", None
    else:
        return "Deep", None
