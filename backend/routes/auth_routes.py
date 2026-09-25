from flask import Blueprint, request, jsonify
from werkzeug.security import generate_password_hash, check_password_hash
import jwt
import datetime
import mysql.connector
from config import Config
import re

auth_bp = Blueprint('auth_bp', __name__)

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

def is_valid_email(email):
    pattern = r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$'
    return re.match(pattern, email) is not None

@auth_bp.route('/register', methods=['POST'])
def register():
    data = request.get_json()
    
    if not data:
        return jsonify({'success': False, 'message': 'No input data provided'}), 400
        
    name = data.get('name', '').strip()
    email = data.get('email', '').strip()
    password = data.get('password', '')
    gender = data.get('gender', 'Male').strip()
    
    # Validation
    if not name:
        return jsonify({'success': False, 'message': 'Name is required'}), 400
    if not email or not is_valid_email(email):
        return jsonify({'success': False, 'message': 'Valid email is required'}), 400
    if not password or len(password) < 6:
        return jsonify({'success': False, 'message': 'Password must be at least 6 characters'}), 400
    if gender not in ['Male', 'Female']:
        return jsonify({'success': False, 'message': 'Invalid gender specified'}), 400
        
    hashed_password = generate_password_hash(password)
    
    connection = get_db_connection()
    if not connection:
        return jsonify({'success': False, 'message': 'Database connection error'}), 500
        
    try:
        cursor = connection.cursor(dictionary=True)
        
        # Check if email exists
        cursor.execute("SELECT id FROM users WHERE email = %s", (email,))
        if cursor.fetchone():
            return jsonify({'success': False, 'message': 'Email already registered'}), 400
            
        # Insert new user
        insert_query = """
        INSERT INTO users (name, email, password, gender) 
        VALUES (%s, %s, %s, %s)
        """
        cursor.execute(insert_query, (name, email, hashed_password, gender))
        user_id = cursor.lastrowid
        
        # Insert empty profile
        insert_profile_query = "INSERT INTO profiles (user_id) VALUES (%s)"
        cursor.execute(insert_profile_query, (user_id,))
        
        connection.commit()
        
        # Generate token
        token = jwt.encode({
            'user_id': user_id,
            'exp': datetime.datetime.utcnow() + datetime.timedelta(days=365)
        }, Config.SECRET_KEY, algorithm="HS256")
        
        return jsonify({
            'success': True,
            'message': 'Registration successful',
            'data': {
                'token': token,
                'user': {
                    'id': user_id,
                    'name': name,
                    'email': email,
                    'gender': gender
                }
            }
        }), 201
        
    except mysql.connector.Error as e:
        if connection:
            connection.rollback()
        return jsonify({'success': False, 'message': f'Database error: {str(e)}'}), 500
    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()

@auth_bp.route('/login', methods=['POST'])
def login():
    data = request.get_json()
    
    if not data:
        return jsonify({'success': False, 'message': 'No input data provided'}), 400
        
    email = data.get('email', '').strip()
    password = data.get('password', '')
    
    if not email or not password:
        return jsonify({'success': False, 'message': 'Email and password are required'}), 400
        
    connection = get_db_connection()
    if not connection:
        return jsonify({'success': False, 'message': 'Database connection error'}), 500
        
    try:
        cursor = connection.cursor(dictionary=True)
        
        # Get user
        cursor.execute("SELECT id, name, email, password, gender FROM users WHERE email = %s", (email,))
        user = cursor.fetchone()
        
        if not user or not check_password_hash(user['password'], password):
            return jsonify({'success': False, 'message': 'Invalid credentials'}), 401
            
        # Generate token
        token = jwt.encode({
            'user_id': user['id'],
            'exp': datetime.datetime.utcnow() + datetime.timedelta(days=365)
        }, Config.SECRET_KEY, algorithm="HS256")
        
        return jsonify({
            'success': True,
            'message': 'Login successful',
            'data': {
                'token': token,
                'user': {
                    'id': user['id'],
                    'name': user['name'],
                    'email': user['email'],
                    'gender': user['gender']
                }
            }
        }), 200
        
    except mysql.connector.Error as e:
        return jsonify({'success': False, 'message': f'Database error: {str(e)}'}), 500
    finally:
        if connection and connection.is_connected():
            cursor.close()
            connection.close()

@auth_bp.route('/logout', methods=['POST'])
def logout():
    # With stateless JWT, server-side logout typically involves a blacklist.
    # For this capstone, we rely on client-side invalidation.
    return jsonify({
        'success': True,
        'message': 'Logout successful. Please remove token on client side.'
    }), 200
