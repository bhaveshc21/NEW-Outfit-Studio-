from flask import Blueprint, request, jsonify, current_app
import mysql.connector
from utils.auth_middleware import token_required
from services.planner_service import PlannerService

planner_bp = Blueprint('planner', __name__)
planner_service = PlannerService()

def get_db():
    connection = mysql.connector.connect(
        host=current_app.config['DATABASE_HOST'],
        port=current_app.config['DATABASE_PORT'],
        database=current_app.config['DATABASE_NAME'],
        user=current_app.config['DATABASE_USER'],
        password=current_app.config['DATABASE_PASSWORD']
    )
    return connection

@planner_bp.route('/generate', methods=['POST'])
@token_required
def generate_plan(current_user_id):
    data = request.get_json()
    start_date = data.get('start_date')
    location = data.get('location', 'Pune')
    
    if not start_date:
        return jsonify({'success': False, 'message': 'start_date is required.'}), 400
        
    db = get_db()
    result = planner_service.generate_weekly_plan(db, current_user_id, start_date, location)
    db.close()
    
    return jsonify(result)

@planner_bp.route('/day/<date>/lock', methods=['POST'])
@token_required
def toggle_lock(current_user_id, date):
    data = request.get_json()
    is_locked = data.get('is_locked', True)
    
    db = get_db()
    cursor = db.cursor()
    try:
        cursor.execute("UPDATE planned_outfits SET is_locked = %s WHERE user_id = %s AND planned_date = %s",
                       (is_locked, current_user_id, date))
        db.commit()
        success = cursor.rowcount > 0
        return jsonify({'success': success, 'message': 'Lock state updated' if success else 'Outfit not found for this date'})
    except Exception as e:
        return jsonify({'success': False, 'message': str(e)}), 500
    finally:
        cursor.close()
        db.close()

@planner_bp.route('/day/<date>/regenerate', methods=['POST'])
@token_required
def regenerate_day(current_user_id, date):
    data = request.get_json()
    location = data.get('location', 'Pune')
    
    db = get_db()
    result = planner_service.regenerate_day(db, current_user_id, date, location)
    db.close()
    
    return jsonify(result)

@planner_bp.route('/schedules', methods=['POST'])
@token_required
def save_schedule(current_user_id):
    data = request.get_json()
    occasion = data.get('occasion')
    is_recurring = data.get('is_recurring', True)
    day_of_week = data.get('day_of_week') # 0-6 for Mon-Sun
    specific_date = data.get('specific_date') # YYYY-MM-DD
    
    db = get_db()
    cursor = db.cursor()
    try:
        if is_recurring:
            cursor.execute("DELETE FROM planner_schedules WHERE user_id = %s AND day_of_week = %s AND is_recurring = 1", (current_user_id, day_of_week))
            cursor.execute("INSERT INTO planner_schedules (user_id, occasion, is_recurring, day_of_week) VALUES (%s, %s, %s, %s)",
                           (current_user_id, occasion, True, day_of_week))
        else:
            cursor.execute("DELETE FROM planner_schedules WHERE user_id = %s AND specific_date = %s AND is_recurring = 0", (current_user_id, specific_date))
            cursor.execute("INSERT INTO planner_schedules (user_id, occasion, is_recurring, specific_date) VALUES (%s, %s, %s, %s)",
                           (current_user_id, occasion, False, specific_date))
        db.commit()
        return jsonify({'success': True, 'message': 'Schedule saved successfully.'})
    except Exception as e:
        return jsonify({'success': False, 'message': str(e)}), 500
    finally:
        cursor.close()
        db.close()
