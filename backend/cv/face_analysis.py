import cv2
import mediapipe as mp
from mediapipe.tasks import python
from mediapipe.tasks.python import vision
import numpy as np
import os

def estimate_face_shape(cv_image):
    """
    Estimates the face shape using MediaPipe Face Landmarker Tasks API.
    Returns: shape (str), error (str)
    """
    try:
        base_options = python.BaseOptions(model_asset_path=os.path.join(os.path.dirname(__file__), '..', 'face_landmarker.task'))
        options = vision.FaceLandmarkerOptions(base_options=base_options,
                                               output_face_blendshapes=False,
                                               output_facial_transformation_matrixes=False,
                                               num_faces=2)
        detector = vision.FaceLandmarker.create_from_options(options)
        
        # Convert to RGB and then to mp.Image
        rgb_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)
        mp_image = mp.Image(image_format=mp.ImageFormat.SRGB, data=rgb_image)
        
        detection_result = detector.detect(mp_image)
        
        if not detection_result.face_landmarks:
            return None, "No face detected in the image."
            
        if len(detection_result.face_landmarks) > 1:
            return None, "Multiple faces detected. Please provide an image with a single face."
            
        face_landmarks = detection_result.face_landmarks[0]
        
        # Extract key landmarks
        top_of_head = face_landmarks[10]
        bottom_of_chin = face_landmarks[152]
        left_cheek = face_landmarks[234]
        right_cheek = face_landmarks[454]
        left_jaw = face_landmarks[132]
        right_jaw = face_landmarks[361]
        
        face_length = np.sqrt((top_of_head.x - bottom_of_chin.x)**2 + (top_of_head.y - bottom_of_chin.y)**2)
        face_width = np.sqrt((left_cheek.x - right_cheek.x)**2 + (left_cheek.y - right_cheek.y)**2)
        jaw_width = np.sqrt((left_jaw.x - right_jaw.x)**2 + (left_jaw.y - right_jaw.y)**2)
        
        length_to_width_ratio = face_length / face_width if face_width > 0 else 0
        
        if length_to_width_ratio > 1.5:
            return "Oblong", None
        elif length_to_width_ratio < 1.2:
            if jaw_width / face_width > 0.8:
                return "Square", None
            else:
                return "Round", None
        else:
            if jaw_width / face_width > 0.8:
                return "Square", None
            elif jaw_width / face_width < 0.65:
                return "Heart", None
            else:
                return "Oval", None
    except Exception as e:
        print(f"MediaPipe Face Error: {e}")
        return None, "Error processing face shape using MediaPipe."
