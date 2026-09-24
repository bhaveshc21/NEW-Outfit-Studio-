from flask import Blueprint, request, jsonify
from utils.auth_middleware import token_required
from services.visualization_service import prepare_visualization_data

visualization_bp = Blueprint('visualization', __name__)

@visualization_bp.route('/prepare', methods=['POST'])
@token_required
def prepare_visualization(current_user_id):
    """
    Expects a JSON payload containing the outfit data.
    Returns the visualization data mapping for Unity.
    """
    try:
        data = request.get_json()
        if data is None:
            return jsonify({
                "success": False,
                "message": "No data provided"
            }), 400
            
        result = prepare_visualization_data(current_user_id, data)
        
        if result['success']:
            return jsonify(result), 200
        else:
            return jsonify(result), 500
            
    except Exception as e:
        return jsonify({
            "success": False,
            "message": f"An error occurred: {str(e)}"
        }), 500
