from flask import Blueprint, request, jsonify, current_app
import mysql.connector
from services.outfit_service import OutfitService
from utils.auth_middleware import token_required

outfit_bp = Blueprint('outfit', __name__)

def get_db():
    connection = mysql.connector.connect(
        host=current_app.config['DATABASE_HOST'],
        port=current_app.config['DATABASE_PORT'],
        database=current_app.config['DATABASE_NAME'],
        user=current_app.config['DATABASE_USER'],
        password=current_app.config['DATABASE_PASSWORD']
    )
    return connection

@outfit_bp.route('/generate', methods=['POST'])
@token_required
def generate_outfits(current_user_id):
    db = get_db()
    try:
        service = OutfitService(db)
        
        # We can accept an optional limit in the body
        data = request.get_json(silent=True) or {}
        limit = data.get('limit', 10)
        
        result = service.generate_outfits(current_user_id, limit=limit)
        
        if not result.get('success'):
            return jsonify(result), 400
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Outfit Generation error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
