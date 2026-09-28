from flask import Blueprint, jsonify, request
from services.dashboard_service import DashboardService
from utils.auth_middleware import token_required

dashboard_bp = Blueprint('dashboard', __name__)

@dashboard_bp.route('/', methods=['GET'])
@token_required
def get_dashboard(current_user_id):
    try:
        user_id = current_user_id
        data = DashboardService.get_dashboard_data(user_id)
        
        return jsonify({
            "success": True,
            "message": "Dashboard data retrieved successfully.",
            "data": data
        }), 200
        
    except Exception as e:
        return jsonify({
            "success": False,
            "message": f"An error occurred: {str(e)}"
        }), 500
