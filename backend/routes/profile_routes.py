from flask import Blueprint, request, jsonify
import mysql.connector
from config import Config
from utils.auth_middleware import token_required

profile_bp = Blueprint('profile_bp', __name__)

def get_db_connection():
    try:
        connection = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            database=Config.DATABASE_NAME,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD
        )
        return connection
    except mysql.connector.Error as e:
        print(f"Error while connecting to MySQL: {e}")
        return None

@profile_bp.route('/<int:user_id>', methods=['GET'])
@token_required
def get_profile(current_user_id, user_id):
    if current_user_id != user_id:
        return jsonify({'success': False, 'message': 'Unauthorized access to profile'}), 403
        
    connection = get_db_connection()
    if not connection:
        return jsonify({'success': False, 'message': 'Database connection error'}), 500
        
    try:
        cursor = connection.cursor(dictionary=True)
        
        # Get user basic info
        cursor.execute("SELECT id, name, email, profile_image FROM users WHERE id = %s", (user_id,))
        user = cursor.fetchone()
        
        if not user:
            return jsonify({'success': False, 'message': 'User not found'}), 404
            
        # Get profile info
        cursor.execute("""
            SELECT height, chest, waist, hip, shoulder, inseam, 
                   preferred_style, preferred_colors, preferred_occasions
            FROM profiles WHERE user_id = %s
        """, (user_id,))
        profile = cursor.fetchone()
        
        if not profile:
            # If no profile exists, return default empty profile
            profile = {
                'height': None, 'chest': None, 'waist': None, 'hip': None,
                'shoulder': None, 'inseam': None, 'preferred_style': None,
                'preferred_colors': None, 'preferred_occasions': None
            }
            
        data = {
            'user': user,
            'profile': profile
        }
        
        return jsonify({
            'success': True,
            'message': 'Profile retrieved successfully',
            'data': data
        }), 200
        
    except mysql.connector.Error as e:
        return jsonify({'success': False, 'message': f'Database error: {str(e)}'}), 500
    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()

@profile_bp.route('/<int:user_id>', methods=['PUT'])
@token_required
def update_profile(current_user_id, user_id):
    if current_user_id != user_id:
        return jsonify({'success': False, 'message': 'Unauthorized access to profile'}), 403
        
    data = request.get_json()
    if not data:
        return jsonify({'success': False, 'message': 'No input data provided'}), 400
        
    connection = get_db_connection()
    if not connection:
        return jsonify({'success': False, 'message': 'Database connection error'}), 500
        
    try:
        cursor = connection.cursor()
        
        # Update user info if provided
        user_data = data.get('user', {})
        if 'name' in user_data:
            name = user_data['name'].strip()
            if name:
                cursor.execute("UPDATE users SET name = %s WHERE id = %s", (name, user_id))
                
        if 'email' in user_data:
            email = user_data['email'].strip()
            if email:
                # Basic email validation or unique constraint will be handled by the database
                cursor.execute("UPDATE users SET email = %s WHERE id = %s", (email, user_id))
        
        # Update profile info
        profile_data = data.get('profile', {})
        
        # Build update query dynamically based on provided fields
        update_fields = []
        update_values = []
        
        allowed_float_fields = ['height', 'chest', 'waist', 'hip', 'shoulder', 'inseam']
        allowed_string_fields = ['preferred_style', 'preferred_colors', 'preferred_occasions']
        
        for field in allowed_float_fields:
            if field in profile_data:
                val = profile_data[field]
                if val is not None:
                    try:
                        val = float(val)
                        if val < 0:
                            return jsonify({'success': False, 'message': f'Invalid value for {field}'}), 400
                    except ValueError:
                        return jsonify({'success': False, 'message': f'Invalid value type for {field}'}), 400
                update_fields.append(f"{field} = %s")
                update_values.append(val)
                
        for field in allowed_string_fields:
            if field in profile_data:
                update_fields.append(f"{field} = %s")
                update_values.append(profile_data[field])
                
        if update_fields:
            update_values.append(user_id)
            query = f"UPDATE profiles SET {', '.join(update_fields)} WHERE user_id = %s"
            cursor.execute(query, tuple(update_values))
            
        connection.commit()
        
        return jsonify({
            'success': True,
            'message': 'Profile updated successfully'
        }), 200
        
    except mysql.connector.Error as e:
        if connection:
            connection.rollback()
        return jsonify({'success': False, 'message': f'Database error: {str(e)}'}), 500
    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()

import os
import time
import werkzeug

@profile_bp.route('/<int:user_id>/upload_image', methods=['POST'])
@token_required
def upload_profile_image(current_user_id, user_id):
    if current_user_id != user_id:
        return jsonify({'success': False, 'message': 'Unauthorized access to profile'}), 403

    if 'image' not in request.files:
        return jsonify({'success': False, 'message': 'No image provided'}), 400

    image_file = request.files['image']
    if image_file.filename == '':
        return jsonify({'success': False, 'message': 'No selected image'}), 400

    connection = get_db_connection()
    if not connection:
        return jsonify({'success': False, 'message': 'Database connection error'}), 500

    try:
        cursor = connection.cursor()
        
        # Save image securely
        upload_dir = os.path.join('uploads', 'profiles')
        os.makedirs(upload_dir, exist_ok=True)
        
        filename = werkzeug.utils.secure_filename(image_file.filename)
        unique_filename = f"{user_id}_{int(time.time())}_{filename}"
        image_path = os.path.join(upload_dir, unique_filename)
        
        image_file.seek(0)
        image_file.save(image_path)
        
        # Save relative URL (using forward slashes)
        image_url = f"/uploads/profiles/{unique_filename}"
        
        cursor.execute("UPDATE users SET profile_image = %s WHERE id = %s", (image_url, user_id))
        connection.commit()
        
        return jsonify({
            'success': True,
            'message': 'Profile image updated successfully',
            'data': {'image_url': image_url}
        }), 200

    except Exception as e:
        if connection:
            connection.rollback()
        return jsonify({'success': False, 'message': f'Error: {str(e)}'}), 500
    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()
