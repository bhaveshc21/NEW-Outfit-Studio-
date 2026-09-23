from flask import Blueprint, request, jsonify, current_app
import mysql.connector
from services.wardrobe_service import WardrobeService

wardrobe_bp = Blueprint('wardrobe', __name__)

def get_db():
    connection = mysql.connector.connect(
        host=current_app.config['DATABASE_HOST'],
        port=current_app.config['DATABASE_PORT'],
        database=current_app.config['DATABASE_NAME'],
        user=current_app.config['DATABASE_USER'],
        password=current_app.config['DATABASE_PASSWORD']
    )
    return connection

@wardrobe_bp.route('', methods=['POST'])
def add_wardrobe_item():
    if 'image' not in request.files:
        return jsonify({"success": False, "message": "No image part in the request"}), 400
        
    image_file = request.files['image']
    if image_file.filename == '':
        return jsonify({"success": False, "message": "No selected file"}), 400
        
    user_id = request.form.get('user_id')
    name = request.form.get('name')
    category = request.form.get('category')
    color = request.form.get('color', 'Unknown')
    
    if not all([user_id, name, category]):
        return jsonify({"success": False, "message": "Missing required fields"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    db = get_db()
    try:
        service = WardrobeService(db)
        data, error = service.add_wardrobe_item(user_id, name, category, color, image_file)
        
        if error:
            return jsonify({"success": False, "message": error}), 400
            
        # Smart Hybrid Logic: Trigger Tripo3D AI for complex geometry
        complex_categories = ['jacket', 'coat', 'shoes', 'footwear', 'sneakers', 'boots']
        if any(c in category.lower() for c in complex_categories):
            from services.tripo_service import TripoService
            tripo = TripoService(get_db)
            
            # Construct a full URL for Tripo to download the image
            # In a real app, this would be a public S3 URL. For local dev, we construct it:
            host = request.host_url.rstrip('/')
            image_url = f"{host}/{data['image_path']}"
            
            tripo.generate_3d_model(data['id'], image_url)
            
        return jsonify({
            "success": True,
            "message": "Wardrobe item added successfully",
            "data": data
        }), 201
    except Exception as e:
        print(f"Wardrobe POST error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@wardrobe_bp.route('/<int:user_id>', methods=['GET'])
def get_wardrobe(user_id):
    db = get_db()
    try:
        service = WardrobeService(db)
        items = service.get_wardrobe(user_id)
        
        return jsonify({
            "success": True,
            "message": "Wardrobe retrieved successfully",
            "data": items
        }), 200
    except Exception as e:
        print(f"Wardrobe GET error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@wardrobe_bp.route('/item/<int:item_id>', methods=['GET'])
def get_wardrobe_item(item_id):
    user_id = request.args.get('user_id')
    if not user_id:
        return jsonify({"success": False, "message": "user_id is required"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    db = get_db()
    try:
        service = WardrobeService(db)
        item = service.get_wardrobe_item(item_id, user_id)
        
        if not item:
            return jsonify({
                "success": False,
                "message": "Wardrobe item not found"
            }), 404
            
        return jsonify({
            "success": True,
            "message": "Item retrieved",
            "data": item
        }), 200
    except Exception as e:
        print(f"Wardrobe item GET error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@wardrobe_bp.route('/<int:item_id>', methods=['PUT'])
def update_wardrobe_item(item_id):
    user_id = request.form.get('user_id')
    name = request.form.get('name')
    category = request.form.get('category')
    color = request.form.get('color', 'Unknown')
    
    if not all([user_id, name, category]):
        return jsonify({"success": False, "message": "Missing required fields"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    image_file = request.files.get('image')
    if image_file and image_file.filename == '':
        image_file = None
        
    db = get_db()
    try:
        service = WardrobeService(db)
        data, error = service.update_wardrobe_item(item_id, user_id, name, category, color, image_file)
        
        if error:
            return jsonify({"success": False, "message": error}), 400
            
        return jsonify({
            "success": True,
            "message": "Wardrobe item updated successfully",
            "data": data
        }), 200
    except Exception as e:
        print(f"Wardrobe PUT error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()

@wardrobe_bp.route('/<int:item_id>', methods=['DELETE'])
def delete_wardrobe_item(item_id):
    user_id = request.args.get('user_id')
    if not user_id:
        return jsonify({"success": False, "message": "user_id is required"}), 400
        
    try:
        user_id = int(user_id)
    except ValueError:
        return jsonify({"success": False, "message": "user_id must be an integer"}), 400
        
    db = get_db()
    try:
        service = WardrobeService(db)
        success, error = service.delete_wardrobe_item(item_id, user_id)
        
        if error:
            return jsonify({"success": False, "message": error}), 400
            
        return jsonify({
            "success": True,
            "message": "Wardrobe item deleted successfully"
        }), 200
    except Exception as e:
        print(f"Wardrobe DELETE error: {e}")
        return jsonify({"success": False, "message": "Internal server error"}), 500
    finally:
        if db.is_connected():
            db.close()
