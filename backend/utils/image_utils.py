import os
from rembg import remove
from PIL import Image
import io

def remove_background_and_save(input_path, output_path=None):
    """
    Reads an image from input_path, removes its background using rembg,
    and saves the transparent PNG to output_path.
    If output_path is None, it overwrites the input_path.
    """
    if output_path is None:
        output_path = input_path
        
    try:
        with open(input_path, 'rb') as i:
            input_data = i.read()
            
        output_data = remove(input_data)
        
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
        print(f"Error removing background: {e}")
        # If background removal fails, just return the original path
        return input_path
        
def remove_background_from_bytes(input_bytes):
    """
    Removes background from image bytes using rembg.
    Returns bytes of transparent PNG.
    """
    try:
        output_bytes = remove(input_bytes)
        return output_bytes
    except Exception as e:
        print(f"Error removing background from bytes: {e}")
        return input_bytes
