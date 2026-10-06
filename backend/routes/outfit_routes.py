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

@outfit_bp.route('/worn', methods=['POST'])
@token_required
def mark_outfit_worn(current_user_id):
    db = get_db()
    try:
        data = request.get_json(silent=True)
        if not data or 'item_ids' not in data:
            return jsonify({"success": False, "message": "item_ids array is required"}), 400
            
        item_ids = data['item_ids']
        if not isinstance(item_ids, list):
            return jsonify({"success": False, "message": "item_ids must be a list"}), 400
            
        from services.wardrobe_service import WardrobeService
        wardrobe_service = WardrobeService(db)
        
        success_count = 0
        
        top_id = None
        outerwear_id = None
        bottom_id = None
        footwear_id = None
        
        cursor = db.cursor(dictionary=True)
        
        for item_id in item_ids:
            if item_id:
                # Update item worn timestamp and usage count
                item, error = wardrobe_service.mark_item_as_worn(item_id, current_user_id)
                if item is not None:
                    success_count += 1
                
                # Identify category to build outfit record
                cursor.execute("SELECT category FROM wardrobe_items WHERE id = %s AND user_id = %s", (item_id, current_user_id))
                row = cursor.fetchone()
                if row:
                    cat_lower = row['category'].lower()
                    if any(word in cat_lower for word in ['blazer', 'jacket', 'coat', 'outerwear']):
                        outerwear_id = item_id
                    elif any(word in cat_lower for word in ['trouser', 'jean', 'skirt', 'pant', 'bottom', 'short']):
                        bottom_id = item_id
                    elif any(word in cat_lower for word in ['footwear', 'shoe', 'sneaker', 'heel', 'boot']):
                        footwear_id = item_id
                    else:
                        top_id = item_id

        if top_id or bottom_id or outerwear_id or footwear_id:
            cursor.execute("""
                INSERT INTO saved_outfits (user_id, top_id, outerwear_id, bottom_id, footwear_id, fashion_score, reason)
                VALUES (%s, %s, %s, %s, %s, %s, %s)
            """, (current_user_id, top_id, outerwear_id, bottom_id, footwear_id, 0.0, 'Worn by user'))
            db.commit()
            
        cursor.close()
                    
        return jsonify({
            "success": True, 
            "message": f"Successfully marked {success_count} items as worn",
            "marked_count": success_count
        }), 200
        
    except Exception as e:
        print(f"Mark Outfit Worn error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/save', methods=['POST'])
@token_required
def save_outfit(current_user_id):
    db = get_db()
    try:
        data = request.get_json(silent=True)
        if not data or 'outfit' not in data:
            return jsonify({"success": False, "message": "outfit object is required"}), 400
            
        outfit_data = data['outfit']
        top = outfit_data.get('top')
        top_id = top.get('id') if top and isinstance(top, dict) else outfit_data.get('top_id')
        
        outerwear = outfit_data.get('outerwear')
        outerwear_id = outerwear.get('id') if outerwear and isinstance(outerwear, dict) else outfit_data.get('outerwear_id')
        
        bottom = outfit_data.get('bottom')
        bottom_id = bottom.get('id') if bottom and isinstance(bottom, dict) else outfit_data.get('bottom_id')
        
        footwear = outfit_data.get('footwear')
        footwear_id = footwear.get('id') if footwear and isinstance(footwear, dict) else outfit_data.get('footwear_id')
        score = outfit_data.get('recommendation_score')
        reason = outfit_data.get('reason')
        
        cursor = db.cursor()
        query = """
            INSERT INTO saved_outfits (user_id, top_id, outerwear_id, bottom_id, footwear_id, fashion_score, reason)
            VALUES (%s, %s, %s, %s, %s, %s, %s)
        """
        cursor.execute(query, (current_user_id, top_id, outerwear_id, bottom_id, footwear_id, score, reason))
        db.commit()
        cursor.close()
        
        return jsonify({
            "success": True, 
            "message": "Outfit saved successfully"
        }), 200
        
    except Exception as e:
        print(f"Save Outfit error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/saved', methods=['GET'])
@token_required
def get_saved_outfits(current_user_id):
    db = get_db()
    try:
        cursor = db.cursor(dictionary=True)
        query = """
            SELECT so.id as saved_outfit_id, so.fashion_score as recommendation_score, so.reason,
                   t.id as top_id, t.name as top_name, t.category as top_category, t.color as top_color, t.image_path as top_image_path,
                   o.id as out_id, o.name as out_name, o.category as out_category, o.color as out_color, o.image_path as out_image_path,
                   b.id as bot_id, b.name as bot_name, b.category as bot_category, b.color as bot_color, b.image_path as bot_image_path,
                   f.id as foot_id, f.name as foot_name, f.category as foot_category, f.color as foot_color, f.image_path as foot_image_path
            FROM saved_outfits so
            LEFT JOIN wardrobe_items t ON so.top_id = t.id
            LEFT JOIN wardrobe_items o ON so.outerwear_id = o.id
            LEFT JOIN wardrobe_items b ON so.bottom_id = b.id
            LEFT JOIN wardrobe_items f ON so.footwear_id = f.id
            WHERE so.user_id = %s AND (so.reason != 'Worn by user' OR so.reason IS NULL)
            ORDER BY so.created_at DESC
        """
        cursor.execute(query, (current_user_id,))
        results = cursor.fetchall()
        cursor.close()
        
        outfits = []
        for row in results:
            outfit = {
                "id": row['saved_outfit_id'],
                "recommendation_score": row['recommendation_score'] or 0.0,
                "reason": row['reason'] or "User saved outfit",
                "top": {"id": row['top_id'], "name": row['top_name'], "category": row['top_category'], "color": row['top_color'], "image_path": row['top_image_path']} if row['top_id'] else None,
                "outerwear": {"id": row['out_id'], "name": row['out_name'], "category": row['out_category'], "color": row['out_color'], "image_path": row['out_image_path']} if row['out_id'] else None,
                "bottom": {"id": row['bot_id'], "name": row['bot_name'], "category": row['bot_category'], "color": row['bot_color'], "image_path": row['bot_image_path']} if row['bot_id'] else None,
                "footwear": {"id": row['foot_id'], "name": row['foot_name'], "category": row['foot_category'], "color": row['foot_color'], "image_path": row['foot_image_path']} if row['foot_id'] else None
            }
            outfits.append(outfit)
            
        return jsonify({
            "success": True, 
            "data": {
                "outfits": outfits
            }
        }), 200
        
    except Exception as e:
        print(f"Get Saved Outfits error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@outfit_bp.route('/saved/<int:outfit_id>', methods=['DELETE'])
@token_required
def delete_saved_outfit(current_user_id, outfit_id):
    db = get_db()
    try:
        cursor = db.cursor()
        cursor.execute("DELETE FROM saved_outfits WHERE id = %s AND user_id = %s", (outfit_id, current_user_id))
        db.commit()
        cursor.close()
        return jsonify({"success": True, "message": "Saved outfit deleted"}), 200
    except Exception as e:
        print(f"Delete saved outfit error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
