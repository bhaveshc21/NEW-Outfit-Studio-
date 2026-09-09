from flask import Flask, jsonify
import mysql.connector
from mysql.connector import Error
from config import Config

def create_app():
    app = Flask(__name__)
    app.config.from_object(Config)

    def get_db_connection():
        try:
            connection = mysql.connector.connect(
                host=app.config['DATABASE_HOST'],
                port=app.config['DATABASE_PORT'],
                database=app.config['DATABASE_NAME'],
                user=app.config['DATABASE_USER'],
                password=app.config['DATABASE_PASSWORD']
            )
            return connection
        except Error as e:
            print(f"Error while connecting to MySQL: {e}")
            return None

    @app.route('/api/test', methods=['GET'])
    def test_api():
        return jsonify({
            "success": True,
            "message": "Backend is running"
        }), 200

    @app.errorhandler(400)
    def bad_request(error):
        return jsonify({
            "success": False,
            "message": "Bad request",
            "error": str(error)
        }), 400

    @app.errorhandler(404)
    def not_found(error):
        return jsonify({
            "success": False,
            "message": "Resource not found"
        }), 404

    @app.errorhandler(500)
    def internal_server_error(error):
        return jsonify({
            "success": False,
            "message": "Internal server error"
        }), 500

    # Register blueprints (routes) here in the future
    # from routes.auth import auth_bp
    # app.register_blueprint(auth_bp, url_prefix='/api/auth')

    return app

if __name__ == '__main__':
    app = create_app()
    app.run(debug=True, host='0.0.0.0', port=5000)
