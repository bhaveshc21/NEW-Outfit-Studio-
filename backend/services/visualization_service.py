import mysql.connector
from config import Config

def get_db_connection():
    return mysql.connector.connect(
        host=Config.DATABASE_HOST,
        port=Config.DATABASE_PORT,
        database=Config.DATABASE_NAME,
        user=Config.DATABASE_USER,
        password=Config.DATABASE_PASSWORD
    )

def prepare_visualization_data(user_id, outfit_data):
    """
    Retrieves user profile and appearance data and maps outfit to 3D model keys.
    """
    connection = get_db_connection()
    cursor = connection.cursor(dictionary=True)
    
    try:
        # Get profile data (height, gender)
        cursor.execute("SELECT p.height, u.gender FROM profiles p JOIN users u ON p.user_id = u.id WHERE p.user_id = %s", (user_id,))
        profile = cursor.fetchone()
        height = profile['height'] if profile and profile['height'] else 170.0 # Default height
        gender = profile['gender'] if profile and profile['gender'] else "female"
        
        # Get appearance data (body_type, skin_tone)
        cursor.execute("SELECT body_type, skin_tone FROM appearance_analysis WHERE user_id = %s", (user_id,))
        appearance = cursor.fetchone()
        
        body_type = appearance['body_type'] if appearance and appearance['body_type'] else "Rectangle"
        skin_tone = appearance['skin_tone'] if appearance and appearance['skin_tone'] else "Medium"
        
        # Pre-fetch the wardrobe items to get their image_path and model_3d_url
        item_ids = []
        if outfit_data.get('top', {}).get('id'): item_ids.append(outfit_data['top']['id'])
        if outfit_data.get('bottom', {}).get('id'): item_ids.append(outfit_data['bottom']['id'])
        if outfit_data.get('footwear', {}).get('id'): item_ids.append(outfit_data['footwear']['id'])
        
        item_details = {}
        if item_ids:
            format_strings = ','.join(['%s'] * len(item_ids))
            cursor.execute(f"SELECT id, image_path, model_3d_url FROM wardrobe_items WHERE id IN ({format_strings})", tuple(item_ids))
            for row in cursor.fetchall():
                item_details[row['id']] = row
        
        from flask import request
        host = request.host_url.rstrip('/') if request else "http://10.0.2.2:5000"

        # Helper function to map a wardrobe item to a model key and append urls
        def map_item_data(item):
            if not item:
                return None
            
            category = item.get('category', '').lower()
            color = item.get('color', '').lower()
            
            # Simple fallback model mapping
            model_key = f"generic_item"
            if 't-shirt' in category or 'shirt' in category:
                model_key = f"{color}_tshirt" if color else "generic_tshirt"
            elif 'jeans' in category or 'pants' in category or 'bottom' in category:
                model_key = f"{color}_jeans" if color else "generic_jeans"
            elif 'sneakers' in category or 'shoes' in category or 'footwear' in category:
                model_key = f"{color}_sneakers" if color else "generic_sneakers"
            elif 'jacket' in category or 'coat' in category:
                model_key = f"{color}_jacket" if color else "generic_jacket"
            
            item_id = item.get('id')
            details = item_details.get(item_id, {})
            
            image_url = f"{host}/{details['image_path']}" if details.get('image_path') else None
            
            return {
                "id": item_id,
                "name": item.get('name'),
                "model_key": model_key,
                "image_url": image_url,
                "model_3d_url": details.get('model_3d_url')
            }

        # Construct the response payload
        mapped_outfit = {
            "top": map_item_data(outfit_data.get('top')),
            "bottom": map_item_data(outfit_data.get('bottom')),
            "footwear": map_item_data(outfit_data.get('footwear')),
            "accessories": [] # Simplified for prototype
        }
        
        return {
            "success": True,
            "message": "Visualization data prepared successfully.",
            "data": {
                "profile": {
                    "height": height,
                    "gender": gender,
                    "body_type": body_type,
                    "skin_tone": skin_tone
                },
                "outfit": mapped_outfit
            }
        }
        
    except Exception as e:
        return {
            "success": False,
            "message": f"Error preparing visualization data: {str(e)}"
        }
    finally:
        if cursor:
            cursor.close()
        if connection:
            connection.close()
