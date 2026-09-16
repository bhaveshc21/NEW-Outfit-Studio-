from flask import Blueprint, request, jsonify, current_app
import mysql.connector
from services.shopping_service import ShoppingService

shopping_bp = Blueprint('shopping', __name__)

def get_db():
    connection = mysql.connector.connect(
        host=current_app.config['DATABASE_HOST'],
        port=current_app.config['DATABASE_PORT'],
        database=current_app.config['DATABASE_NAME'],
        user=current_app.config['DATABASE_USER'],
        password=current_app.config['DATABASE_PASSWORD']
    )
    return connection

@shopping_bp.route('/analyze', methods=['POST'])
def analyze_shopping_item():
    if 'image' not in request.files:
        return jsonify({"success": False, "message": "No image part in the request"}), 400
        
    image_file = request.files['image']
    if image_file.filename == '':
        return jsonify({"success": False, "message": "No selected file"}), 400
        
    user_id = request.form.get('user_id')
    
    if not user_id:
        return jsonify({"success": False, "message": "Missing user_id field"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    category = request.form.get('category')
    color = request.form.get('color')
    
    db = get_db()
    try:
        service = ShoppingService(db)
        data, error = service.analyze_potential_purchase(user_id, category, color, image_file)
        
        if error:
            return jsonify({"success": False, "message": error}), 400
            
        return jsonify({
            "success": True,
            "message": "Shopping item analyzed successfully",
            "data": data
        }), 200
    except Exception as e:
        print(f"Shopping POST error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
