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
        
        # We can accept an optional limit, occasion, and location in the body
        data = request.get_json(silent=True) or {}
        limit = data.get('limit', 10)
        occasion = data.get('occasion', None)
        location = data.get('location', 'Pune') # Default fallback
        
        weather_data = None
        if occasion:
            from services.weather_service import WeatherService
            weather_service = WeatherService()
            weather_data = weather_service.get_weather(location)
            
        result = service.generate_outfits(current_user_id, limit=limit, occasion=occasion, weather_data=weather_data)
        
        if not result.get('success'):
            return jsonify(result), 400
            
        # Add context back to the response if it's context-aware
        if occasion:
            if 'data' not in result:
                result['data'] = {}
            result['data']['occasion'] = occasion
            result['data']['weather'] = weather_data
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Outfit Generation error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/score', methods=['POST'])
@token_required
def score_outfit(current_user_id):
    db = get_db()
    try:
        from services.outfit_score_service import OutfitScoreService
        service = OutfitScoreService(db)
        
        data = request.get_json(silent=True)
        if not data:
            return jsonify({"success": False, "message": "Invalid JSON request"}), 400
            
        result = service.score_outfit(current_user_id, data)
        
        if not result.get('success'):
            return jsonify(result), 400
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Outfit Score error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/complete-look', methods=['POST'])
@token_required
def complete_look(current_user_id):
    db = get_db()
    try:
        from services.complete_look_service import CompleteLookService
        service = CompleteLookService(db)
        
        data = request.get_json(silent=True) or {}
        locked_item_id = data.get('locked_item_id')
        
        if not locked_item_id:
            return jsonify({"success": False, "message": "locked_item_id is required"}), 400
            
        limit = data.get('limit', 5)
        occasion = data.get('occasion', None)
        location = data.get('location', None)
        
        result = service.generate_complete_look(
            current_user_id, 
            locked_item_id=locked_item_id, 
            limit=limit, 
            occasion=occasion, 
            location=location
        )
        
        if not result.get('success'):
            return jsonify(result), 400
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Complete Look error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/compare', methods=['POST'])
@token_required
def compare_outfits(current_user_id):
    db = get_db()
    try:
        from services.outfit_comparison_service import OutfitComparisonService
        service = OutfitComparisonService(db)
        
        data = request.get_json(silent=True)
        if not data:
            return jsonify({"success": False, "message": "Invalid JSON request"}), 400
            
        result = service.compare_outfits(current_user_id, data)
        
        if not result.get('success'):
            return jsonify(result), 400
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Outfit Compare error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/explain', methods=['POST'])
@token_required
def explain_outfit(current_user_id):
    db = get_db()
    try:
        from services.outfit_explanation_service import OutfitExplanationService
        service = OutfitExplanationService(db)
        
        data = request.get_json(silent=True)
        if not data:
            return jsonify({"success": False, "message": "Invalid JSON request"}), 400
            
        result = service.explain_outfit(current_user_id, data)
        
        if not result.get('success'):
            return jsonify(result), 400
            
        return jsonify(result), 200
        
    except Exception as e:
        print(f"Outfit Explain error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
