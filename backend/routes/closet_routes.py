from flask import Blueprint, jsonify
from utils.auth_middleware import token_required
from services.closet_statistics_service import get_closet_statistics

closet_bp = Blueprint('closet_bp', __name__)

@closet_bp.route('/statistics/<int:user_id>', methods=['GET'])
@token_required
def get_statistics(current_user_id, user_id):
    # Verify ownership
    if current_user_id != user_id:
        return jsonify({
            "success": False,
            "message": "Unauthorized access to closet statistics"
        }), 403
        
    result = get_closet_statistics(user_id)
    
    if result.get("success"):
        return jsonify(result), 200
    else:
        # Check if it was a not found error
        if result.get("message") == "User not found":
            return jsonify(result), 404
        return jsonify(result), 500
