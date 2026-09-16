from flask import Flask, jsonify, send_from_directory
import mysql.connector
from mysql.connector import Error
from config import Config
import os

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

    # Register blueprints (routes)
    from routes.auth_routes import auth_bp
    from routes.profile_routes import profile_bp
    from routes.appearance_routes import appearance_bp
    from routes.wardrobe_routes import wardrobe_bp
    from routes.outfit_routes import outfit_bp
    from routes.shopping_routes import shopping_bp
    from routes.closet_routes import closet_bp
    
    app.register_blueprint(auth_bp, url_prefix='/api')
    app.register_blueprint(profile_bp, url_prefix='/api/profile')
    app.register_blueprint(appearance_bp, url_prefix='/api/appearance')
    app.register_blueprint(wardrobe_bp, url_prefix='/api/wardrobe')
    app.register_blueprint(outfit_bp, url_prefix='/api/outfits')
    app.register_blueprint(shopping_bp, url_prefix='/api/shopping')
    app.register_blueprint(closet_bp, url_prefix='/api/closet')

    @app.route('/uploads/<path:filename>')
    def serve_uploads(filename):
        return send_from_directory(os.path.join(app.root_path, 'uploads'), filename)

    return app

if __name__ == '__main__':
    app = create_app()
    app.run(debug=True, host='0.0.0.0', port=5000)
    # Trigger hot reload
