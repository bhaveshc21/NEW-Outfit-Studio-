from flask import Blueprint, request, jsonify, current_app
from services.virtual_try_on_service import VirtualTryOnService
from utils.auth_middleware import token_required
import mysql.connector
from config import Config
import json

virtual_try_on_bp = Blueprint('virtual_try_on', __name__)

def get_db_connection():
    return mysql.connector.connect(
        host=Config.DATABASE_HOST,
        user=Config.DATABASE_USER,
        password=Config.DATABASE_PASSWORD,
        database=Config.DATABASE_NAME
    )

@virtual_try_on_bp.route('/', methods=['POST'])
@token_required
def generate_try_on(current_user):
    user_id = current_user['id'] if isinstance(current_user, dict) else current_user
    with open("route_hit.log", "a") as f:
        f.write(f"DEBUG: generate_try_on route hit by user {user_id}\n")
    print(f"DEBUG: generate_try_on route hit by user {user_id}", flush=True)
    db = get_db_connection()
    try:
        user_photo_bytes = None
        outfit_data = None
        
        # Check if the request is multipart/form-data
        if 'multipart/form-data' in request.content_type:
            if 'image' not in request.files:
                return jsonify({"success": False, "message": "Missing image file"}), 400
            file = request.files['image']
            user_photo_bytes = file.read()
            
            outfit_data_str = request.form.get('outfit_data')
            if not outfit_data_str:
                return jsonify({"success": False, "message": "Missing outfit_data"}), 400
            
            try:
                outfit_data = json.loads(outfit_data_str)
            except json.JSONDecodeError:
                return jsonify({"success": False, "message": "Invalid JSON in outfit_data"}), 400
        elif request.is_json:
            outfit_data = request.json.get('outfit_data')
            if not outfit_data:
                return jsonify({"success": False, "message": "Missing outfit_data"}), 400
                
            cursor = db.cursor(dictionary=True)
            cursor.execute("SELECT visualization_image FROM users WHERE id = %s", (user_id,))
            user_row = cursor.fetchone()
            cursor.close()
            
            if not user_row or not user_row.get('visualization_image'):
                return jsonify({"success": False, "message": "You haven't uploaded a Virtual Try-On Model image in your profile."}), 400
                
            vis_image_path = user_row['visualization_image']
            if vis_image_path.startswith('/'):
                vis_image_path = vis_image_path[1:] # remove leading slash
                
            import os
            if not os.path.exists(vis_image_path):
                return jsonify({"success": False, "message": "Your Virtual Try-On Model image could not be found on the server."}), 400
                
            with open(vis_image_path, "rb") as f:
                user_photo_bytes = f.read()
        else:
            return jsonify({"success": False, "message": "Request must be JSON or multipart/form-data"}), 400

        service = VirtualTryOnService(db)
        result = service.generate_virtual_try_on(current_user, outfit_data, user_photo_bytes)
        if result.get("success"):
            return jsonify(result), 200
        else:
            return jsonify(result), 400
    except Exception as e:
        print(f"Error in generate_try_on: {e}")
        return jsonify({"success": False, "message": str(e)}), 500
    finally:
        db.close()
