import cv2
import numpy as np
import os

def estimate_skin_tone(cv_image):
    """
    Estimates skin tone category using OpenCV.
    Categories: Light, Medium, Tan, Deep
    """
    try:
        # Use Haar Cascade to find the face
        cascade_path = os.path.join(os.path.dirname(__file__), 'haarcascade_frontalface_default.xml')
        face_cascade = cv2.CascadeClassifier(cascade_path)
        
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        faces = face_cascade.detectMultiScale(gray, 1.1, 4)
        
        if len(faces) > 0:
            # Get the first detected face
            x, y, w, h = faces[0]
            # Crop the center of the face to avoid hair, background, and shadows
            center_y, center_x = y + h // 2, x + w // 2
            crop_size_y = h // 4
            crop_size_x = w // 4
        else:
            # Fallback to the upper-middle section of the image (usually where the face is)
            height, width = cv_image.shape[:2]
            center_y, center_x = height // 4, width // 2
            crop_size_y = height // 10
            crop_size_x = width // 10

        if crop_size_y == 0 or crop_size_x == 0:
            return "Deep", None # Fallback
            
        skin_crop = cv_image[max(0, center_y - crop_size_y) : center_y + crop_size_y, 
                             max(0, center_x - crop_size_x) : center_x + crop_size_x]
                             
        if skin_crop.size == 0:
            return "Deep", None
            
        # Convert to YCrCb color space which is good for skin tone analysis
        ycrcb = cv2.cvtColor(skin_crop, cv2.COLOR_BGR2YCrCb)
        
        # Calculate average Y (luminance) channel
        avg_y = np.mean(ycrcb[:,:,0])
        
        # Updated thresholds for better accuracy on dark skin tones
        if avg_y > 165:
            return "Light", None
        elif avg_y > 120:
            return "Medium", None
        elif avg_y > 75:
            return "Tan", None
        else:
            return "Deep", None
    except Exception as e:
        print(f"Skin analysis error: {e}")
        return "Deep", None
