import os
import werkzeug
from cv.image_utils import process_uploaded_image
from cv.face_analysis import estimate_face_shape
from cv.skin_analysis import estimate_skin_tone
from cv.body_analysis import estimate_body_type

class AppearanceService:
    def __init__(self, db_connection):
        self.db = db_connection
        
    def get_profile(self, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT * FROM profiles WHERE user_id = %s", (user_id,))
        profile = cursor.fetchone()
        cursor.close()
        return profile
        
    def analyze_appearance(self, user_id, image_file):
        # 1. Image preprocessing
        cv_image = process_uploaded_image(image_file)
        if cv_image is None:
            return None, "Failed to process the uploaded image. Please ensure it's a valid image file."
            
        # 2. Face shape estimation
        face_shape, face_err = estimate_face_shape(cv_image)
        if face_err:
            return None, face_err
            
        # 3. Skin tone estimation
        skin_tone, skin_err = estimate_skin_tone(cv_image)
        if skin_err:
            return None, skin_err
            
        # 4. Body type estimation
        profile = self.get_profile(user_id)
        body_type, body_err = estimate_body_type(profile)
        # We don't fail completely if body type fails, just use None or a default
        if body_err:
            print(f"Body type warning: {body_err}")
            
        # Save image securely
        upload_dir = os.path.join('uploads', 'appearance')
        os.makedirs(upload_dir, exist_ok=True)
        filename = werkzeug.utils.secure_filename(image_file.filename)
        # Give it a unique name
        filename = f"{user_id}_{filename}"
        image_path = os.path.join(upload_dir, filename)
        
        # We need to save the stream, but it was consumed by PIL.
        # So we seek to 0 and save.
        image_file.seek(0)
        image_file.save(image_path)
        
        # 5. Database update
        try:
            cursor = self.db.cursor()
            
            # Check if exists
            cursor.execute("SELECT id FROM appearance_analysis WHERE user_id = %s", (user_id,))
            exists = cursor.fetchone()
            
            if exists:
                query = """
                UPDATE appearance_analysis 
                SET face_shape = %s, skin_tone = %s, body_type = %s, image_path = %s
                WHERE user_id = %s
                """
                cursor.execute(query, (face_shape, skin_tone, body_type, image_path, user_id))
            else:
                query = """
                INSERT INTO appearance_analysis (user_id, face_shape, skin_tone, body_type, image_path)
                VALUES (%s, %s, %s, %s, %s)
                """
                cursor.execute(query, (user_id, face_shape, skin_tone, body_type, image_path))
                
            self.db.commit()
            cursor.close()
            
            return {
                "face_shape": face_shape,
                "skin_tone": skin_tone,
                "body_type": body_type
            }, None
            
        except Exception as e:
            print(f"DB Error: {e}")
            return None, "Database error occurred while saving the analysis."
            
    def get_appearance(self, user_id):
        cursor = self.db.cursor(dictionary=True)
        cursor.execute("SELECT face_shape, skin_tone, body_type FROM appearance_analysis WHERE user_id = %s", (user_id,))
        result = cursor.fetchone()
        cursor.close()
        return result
