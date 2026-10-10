import os
from PIL import Image
import io
import requests

def remove_background_and_save(input_path, output_path=None):
    """
    Reads an image from input_path, removes its background using Hugging Face API,
    and saves the transparent PNG to output_path.
    If output_path is None, it overwrites the input_path.
    """
    if output_path is None:
        output_path = input_path
        
    hf_api_key = os.environ.get("HF_API_KEY")
    
    if not hf_api_key:
        print("Warning: No HF_API_KEY found. Skipping background removal.")
        return input_path

    try:
        with open(input_path, 'rb') as i:
            input_data = i.read()
            
        API_URL = "https://api-inference.huggingface.co/models/briaai/RMBG-1.4"
        headers = {"Authorization": f"Bearer {hf_api_key}"}
        
        response = requests.post(API_URL, headers=headers, data=input_data)
        
        if response.status_code != 200:
            print(f"Hugging Face API Error: {response.status_code} - {response.text}")
            return input_path
            
        output_data = response.content
        
        # Ensure we save as PNG to keep transparency
        img = Image.open(io.BytesIO(output_data))
        
        # Change extension to .png if it's not already
        base, _ = os.path.splitext(output_path)
        final_output_path = base + ".png"
        
        img.save(final_output_path, format="PNG")
        
        # If we changed the extension and we were overwriting, remove the old file
        if final_output_path != input_path and output_path == input_path:
            try:
                os.remove(input_path)
            except Exception as e:
                print(f"Error removing old image: {e}")
                
        return final_output_path
        
    except Exception as e:
        print(f"Error removing background via API: {e}")
        return input_path
        
def remove_background_from_bytes(input_bytes):
    """
    Removes background from image bytes using Hugging Face API.
    Returns bytes of transparent PNG.
    """
    hf_api_key = os.environ.get("HF_API_KEY")
    
    if not hf_api_key:
        print("Warning: No HF_API_KEY found. Skipping background removal.")
        return input_bytes

    try:
        API_URL = "https://api-inference.huggingface.co/models/briaai/RMBG-1.4"
        headers = {"Authorization": f"Bearer {hf_api_key}"}
        
        response = requests.post(API_URL, headers=headers, data=input_bytes)
        
        if response.status_code == 200:
            return response.content
        else:
            print(f"Hugging Face API Error: {response.status_code} - {response.text}")
            return input_bytes
            
    except Exception as e:
        print(f"Error removing background from bytes via API: {e}")
        return input_bytes
