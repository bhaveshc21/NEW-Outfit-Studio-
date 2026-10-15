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
        cleaned_path = relative_path.lstrip('/\\')
        backend_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
        root_dir = os.path.dirname(backend_dir)
        candidates = [
            os.path.join(backend_dir, cleaned_path),
            os.path.join(root_dir, cleaned_path),
            os.path.abspath(cleaned_path),
            os.path.join(backend_dir, 'uploads', os.path.basename(cleaned_path)),
            os.path.join(backend_dir, 'uploads', 'wardrobe', os.path.basename(cleaned_path)),
        ]
        for p in candidates:
            if os.path.exists(p) and os.path.isfile(p):
                try:
                    return Image.open(p).convert('RGB')
                except Exception as e:
                    print(f"Error loading image {p}: {e}")
                    return None
        print(f"DEBUG: Could not find wardrobe image on disk: {relative_path}. Tried: {candidates}")
        return None

    def _save_generated_image(self, pil_image):
        """Saves generated image to disk and returns the relative path."""
        filename = f"vto_{uuid.uuid4().hex}_{int(time.time())}.jpg"
        file_path = os.path.join(self.generated_dir, filename)
        pil_image.save(file_path, "JPEG", quality=85)
        return f"uploads/generated/{filename}"

    def generate_virtual_try_on(self, user_id, outfit_data, user_photo_bytes):
        if not self.client:
            return {"success": False, "message": "Gemini API key is not configured. Please add GEMINI_API_KEY to backend/.env."}

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

        # 2. Process User Photo from Bytes
        import io
        try:
            user_photo = Image.open(io.BytesIO(user_photo_bytes)).convert('RGB')
        except Exception as e:
            return {"success": False, "message": "Failed to read the uploaded image. Please provide a valid image."}

        # 3. Construct the Multimodal Request for Gemini AI
        prompt = get_virtual_try_on_prompt(outfit_parts)
        
        contents = [prompt, user_photo]
        for img in clothing_images:
            contents.append(img)

        # Candidate models to try in order of preference
        models_to_try = [
            os.environ.get('GEMINI_MODEL', 'gemini-3.1-flash-image'),
            'gemini-3.1-flash-image-preview',
            'gemini-3.1-flash-lite-image',
            'gemini-2.5-flash-image',
            'gemini-3-pro-image-preview'
        ]
        
        last_error = None
        for model_name in models_to_try:
            try:
                with open("route_hit.log", "a") as f:
                    f.write(f"DEBUG: Starting Gemini generate_content with model {model_name} and {len(contents)} parts...\n")
                print(f"DEBUG: Starting Gemini generate_content with model {model_name} and {len(contents)} parts...", flush=True)
                start_time = time.time()
                
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
            except Exception as e:
                last_error = e
                print(f"Gemini API Error with model {model_name}: {e}", flush=True)
                if "RESOURCE_EXHAUSTED" in str(e) or "429" in str(e):
                    continue
                else:
                    break

        error_str = str(last_error) if last_error else "AI model did not return an image."
        if "RESOURCE_EXHAUSTED" in error_str or "429" in error_str:
            friendly_msg = "Gemini API daily quota limit reached (429 RESOURCE_EXHAUSTED). Please update GEMINI_API_KEY in backend/.env with a new key to continue visualizing outfits."
        else:
            friendly_msg = f"AI Generation failed: {error_str}"
            
        return {"success": False, "message": friendly_msg}
