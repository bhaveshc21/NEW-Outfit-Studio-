import os
import cv2
import numpy as np
from PIL import Image

def process_uploaded_image(file_stream):
    """
    Reads an uploaded image stream into an OpenCV format (numpy array).
    Also resizes if it's too large to maintain performance.
    """
    try:
        image = Image.open(file_stream)
        
        # Convert to RGB (in case of RGBA or other formats)
        image = image.convert('RGB')
        
        # Convert PIL image to OpenCV format (BGR)
        cv_image = np.array(image)
        cv_image = cv2.cvtColor(cv_image, cv2.COLOR_RGB2BGR)
        
        # Resize if width or height is larger than 1000px
        max_dimension = 1000
        height, width = cv_image.shape[:2]
        if max(height, width) > max_dimension:
            scaling_factor = max_dimension / float(max(height, width))
            new_size = (int(width * scaling_factor), int(height * scaling_factor))
            cv_image = cv2.resize(cv_image, new_size, interpolation=cv2.INTER_AREA)
            
        return cv_image
    except Exception as e:
        print(f"Error processing image: {e}")
        return None
