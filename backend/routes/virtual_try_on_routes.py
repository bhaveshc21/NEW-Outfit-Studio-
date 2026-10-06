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
        data = request.get_json(silent=True)
        if not data:
            return jsonify({"success": False, "message": "Missing JSON body"}), 400
            
        outfit_data = data.get('outfit_data')
        if not outfit_data:
            return jsonify({"success": False, "message": "Missing outfit_data"}), 400

        service = VirtualTryOnService(db)
        result = service.generate_virtual_try_on(current_user, outfit_data)
        if result.get("success"):
            return jsonify(result), 200
        else:
            return jsonify(result), 400
    except Exception as e:
        print(f"Error in generate_try_on: {e}")
        return jsonify({"success": False, "message": str(e)}), 500
    finally:
        db.close()
