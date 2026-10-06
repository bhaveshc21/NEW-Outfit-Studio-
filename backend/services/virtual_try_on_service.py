import os
import time
import uuid
import base64
from werkzeug.utils import secure_filename
from google import genai
from google.genai import types
from PIL import Image
from config import Config
from recommendation.virtual_try_on_prompt import get_virtual_try_on_prompt

class VirtualTryOnService:
    def __init__(self, db_connection):
        self.db = db_connection
        self.uploads_dir = os.path.join(os.path.dirname(os.path.dirname(__file__)), 'uploads')
        self.generated_dir = os.path.join(self.uploads_dir, 'generated')
        if not os.path.exists(self.generated_dir):
            os.makedirs(self.generated_dir)
            
        self.client = None
        api_key = Config.GEMINI_API_KEY
        print(f"DEBUG: Initializing VirtualTryOnService with API Key: {api_key}")
        if api_key:
            try:
                self.client = genai.Client(api_key=api_key, http_options={'timeout': 300000})
                print("DEBUG: Gemini Client initialized successfully.")
            except Exception as e:
                print(f"DEBUG: Failed to initialize Gemini Client: {e}")

    def _get_wardrobe_item(self, item_id, user_id):
        if not item_id:
            return None
        cursor = self.db.cursor(dictionary=True)
        try:
            cursor.execute("SELECT * FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, user_id))
            return cursor.fetchone()
        finally:
            cursor.close()

    def _load_image(self, relative_path):
        """Loads an image from the uploads directory given its relative path stored in DB."""
        if not relative_path:
            return None
        full_path = os.path.join(os.path.dirname(os.path.dirname(__file__)), relative_path)
        if os.path.exists(full_path):
            try:
                return Image.open(full_path).convert('RGB')
            except Exception as e:
                print(f"Error loading image {full_path}: {e}")
                return None
        return None

    def _save_generated_image(self, pil_image):
        """Saves generated image to disk and returns the relative path."""
        filename = f"vto_{uuid.uuid4().hex}_{int(time.time())}.jpg"
        file_path = os.path.join(self.generated_dir, filename)
        pil_image.save(file_path, "JPEG", quality=85)
        return f"uploads/generated/{filename}"

    def generate_virtual_try_on(self, user_id, outfit_data):
        if not self.client:
            return {"success": False, "message": "Gemini API key is not configured."}

        # 1. Validate Wardrobe Items and Collect Images
        outfit_parts = []
        clothing_images = []
        
        def add_item_if_valid(item_id, part_name):
            item = self._get_wardrobe_item(item_id, user_id)
            if item:
                # Check if it's a dress
                cat = item.get('category', '').lower()
                name = item.get('name', '').lower()
                if any(k in cat or k in name for k in ['dress', 'maxi', 'gown', 'one piece']):
                    outfit_parts.append("Dress")
                else:
                    outfit_parts.append(part_name)
                    
                img = self._load_image(item.get('image_path'))
                if img:
                    clothing_images.append(img)
                return item
            return None

        # Outfit parts extraction
        top_id = outfit_data.get('top', {}).get('id') if isinstance(outfit_data.get('top'), dict) else outfit_data.get('top_id')
        bottom_id = outfit_data.get('bottom', {}).get('id') if isinstance(outfit_data.get('bottom'), dict) else outfit_data.get('bottom_id')
        outerwear_id = outfit_data.get('outerwear', {}).get('id') if isinstance(outfit_data.get('outerwear'), dict) else outfit_data.get('outerwear_id')
        footwear_id = outfit_data.get('footwear', {}).get('id') if isinstance(outfit_data.get('footwear'), dict) else outfit_data.get('footwear_id')
        
        accessories = outfit_data.get('accessories', [])
        accessory_ids = [acc.get('id') for acc in accessories if isinstance(acc, dict)] if isinstance(accessories, list) else outfit_data.get('accessory_ids', [])

        top_item = add_item_if_valid(top_id, "Top")
        bottom_item = add_item_if_valid(bottom_id, "Bottom")
        outerwear_item = add_item_if_valid(outerwear_id, "Outerwear")
        footwear_item = add_item_if_valid(footwear_id, "Footwear")
        
        for acc_id in accessory_ids:
            add_item_if_valid(acc_id, "Accessory")

        if not clothing_images:
            return {"success": False, "message": "No valid clothing images found in the selected outfit."}

        # 2. Process User Photo from Profile
        cursor = self.db.cursor(dictionary=True)
        try:
            cursor.execute("SELECT profile_image FROM users WHERE id = %s", (user_id,))
            user_record = cursor.fetchone()
            if not user_record or not user_record.get('profile_image'):
                return {"success": False, "message": "Please set a profile image in your profile first."}
                
            profile_image_path = user_record['profile_image']
            # profile_image usually starts with '/uploads/', so strip leading slash for os.path.join
            if profile_image_path.startswith('/'):
                profile_image_path = profile_image_path[1:]
                
            user_photo = self._load_image(profile_image_path)
            if not user_photo:
                return {"success": False, "message": "Failed to load your profile image. Please upload a new one."}
        finally:
            cursor.close()

        # 3. Construct the Multimodal Request
        prompt = get_virtual_try_on_prompt(outfit_parts)
        
        contents = [prompt, user_photo]
        for img in clothing_images:
            contents.append(img)

        try:
            model_name = os.environ.get('GEMINI_MODEL', 'gemini-3.1-flash-image')
            
            with open("route_hit.log", "a") as f:
                f.write(f"DEBUG: Starting Gemini generate_content with model {model_name} and {len(contents)} parts...\n")
            print(f"DEBUG: Starting Gemini generate_content with model {model_name} and {len(contents)} parts...", flush=True)
            start_time = time.time()
            # Using generate_content which fails fast on quota errors
            response = self.client.models.generate_content(
                model=model_name,
                contents=contents,
                config=types.GenerateContentConfig(
                    response_modalities=["IMAGE"],
                    image_config=types.ImageConfig(
                        aspect_ratio="1:1"
                    )
                )
            )
            with open("route_hit.log", "a") as f:
                f.write(f"DEBUG: Gemini API responded in {time.time() - start_time:.2f} seconds\n")
            print(f"DEBUG: Gemini API responded in {time.time() - start_time:.2f} seconds", flush=True)
            
            if response and response.parts:
                generated_image = None
                for part in response.parts:
                    if part.inline_data:
                        generated_image = part.inline_data.data
                        break
                        
                if generated_image:
                    # Save to disk
                    filename = f"vto_{uuid.uuid4().hex}_{int(time.time())}.png"
                    file_path = os.path.join(self.generated_dir, filename)
                    with open(file_path, "wb") as f:
                        f.write(generated_image)
                    
                image_url = f"uploads/generated/{filename}"
                return {
                    "success": True, 
                    "message": "Virtual try-on generated successfully.",
                    "data": {
                        "image_url": image_url,
                        "outfit": outfit_data
                    }
                }
            else:
                return {"success": False, "message": "The AI model did not return an image."}

        except Exception as e:
            print(f"Gemini API Error: {e}")
            return {"success": False, "message": f"AI Generation failed: {str(e)}"}
