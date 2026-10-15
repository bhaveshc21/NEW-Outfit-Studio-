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
            cursor.execute("SELECT visualization_image, profile_image FROM users WHERE id = %s", (user_id,))
            user_row = cursor.fetchone()
            cursor.close()
            
            raw_path = user_row.get('visualization_image') if user_row else None
            if not raw_path and user_row:
                raw_path = user_row.get('profile_image')
                
            if not raw_path:
                return jsonify({"success": False, "message": "You haven't uploaded a Virtual Try-On Model image or profile photo."}), 400
                
            cleaned_path = raw_path.lstrip('/\\')
            import os
            backend_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
            root_dir = os.path.dirname(backend_dir)
            candidates = [
                os.path.join(backend_dir, cleaned_path),
                os.path.join(root_dir, cleaned_path),
                os.path.abspath(cleaned_path),
                os.path.join(backend_dir, 'uploads', os.path.basename(cleaned_path)),
                os.path.join(backend_dir, 'uploads', 'visualizations', os.path.basename(cleaned_path)),
                os.path.join(backend_dir, 'uploads', 'profiles', os.path.basename(cleaned_path)),
            ]
            full_path = None
            for p in candidates:
                if os.path.exists(p) and os.path.isfile(p):
                    full_path = p
                    break
                    
            if not full_path:
                print(f"DEBUG: Virtual try-on image not found on disk. Tried candidates: {candidates}")
                return jsonify({"success": False, "message": "Your Virtual Try-On Model image could not be found on the server."}), 400
                
            with open(full_path, "rb") as f:
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
