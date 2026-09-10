from flask import Blueprint, request, jsonify, current_app
import mysql.connector
from services.appearance_service import AppearanceService

appearance_bp = Blueprint('appearance', __name__)

def get_db():
    connection = mysql.connector.connect(
        host=current_app.config['DATABASE_HOST'],
        port=current_app.config['DATABASE_PORT'],
        database=current_app.config['DATABASE_NAME'],
        user=current_app.config['DATABASE_USER'],
        password=current_app.config['DATABASE_PASSWORD']
    )
    return connection

@appearance_bp.route('/analyze', methods=['POST'])
def analyze_appearance():
    if 'image' not in request.files:
        return jsonify({"success": False, "message": "No image part in the request"}), 400
        
    image_file = request.files['image']
    if image_file.filename == '':
        return jsonify({"success": False, "message": "No selected file"}), 400
        
    # User ID typically comes from JWT token, but if not implemented we can take it from form data
    user_id = request.form.get('user_id')
    if not user_id:
        return jsonify({"success": False, "message": "user_id is required"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    db = get_db()
    try:
        service = AppearanceService(db)
        data, error = service.analyze_appearance(user_id, image_file)
        
        if error:
            return jsonify({"success": False, "message": error}), 400
            
        return jsonify({
            "success": True,
            "message": "Appearance analysis completed",
            "data": data
        }), 200
        
    except Exception as e:
        import traceback
        error_trace = traceback.format_exc()
        print(f"Analyze endpoint error: {error_trace}")
        return jsonify({"success": False, "message": f"Internal server error: {str(e)}\n{error_trace}"}), 500
    finally:
        if db.is_connected():
            db.close()

@appearance_bp.route('/<int:user_id>', methods=['GET'])
def get_appearance(user_id):
    db = get_db()
    try:
        service = AppearanceService(db)
        data = service.get_appearance(user_id)
        
        if not data:
            return jsonify({
                "success": False,
                "message": "Appearance analysis not found for this user"
            }), 404
            
        return jsonify({
            "success": True,
            "message": "Appearance retrieved",
            "data": data
        }), 200
    except Exception as e:
        print(f"Get appearance endpoint error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
