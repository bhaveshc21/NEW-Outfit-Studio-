import mysql.connector
from flask import current_app

class DashboardService:
    @staticmethod
    def get_dashboard_data(user_id):
        try:
            connection = mysql.connector.connect(
                host=current_app.config['DATABASE_HOST'],
                port=current_app.config['DATABASE_PORT'],
                database=current_app.config['DATABASE_NAME'],
                user=current_app.config['DATABASE_USER'],
                password=current_app.config['DATABASE_PASSWORD']
            )
            
            if connection.is_connected():
                cursor = connection.cursor(dictionary=True)
                
                # Get user info
                cursor.execute("SELECT name FROM users WHERE id = %s", (user_id,))
                user = cursor.fetchone()
                
                # Get wardrobe count
                cursor.execute("SELECT COUNT(*) as total_items FROM wardrobe_items WHERE user_id = %s", (user_id,))
                wardrobe_count = cursor.fetchone()['total_items']
                
                # Check if appearance is available
                cursor.execute("SELECT COUNT(*) as count FROM appearance_analysis WHERE user_id = %s", (user_id,))
                appearance_count = cursor.fetchone()['count']
                
                
                name = user['name'] if user else "User"
                
                return {
                    "user": {
                        "id": user_id,
                        "name": name
                    },
                    "wardrobe": {
                        "total_items": wardrobe_count
                    },
                    "statistics": {
                        "available": wardrobe_count > 0
                    },
                    "recent_outfits": [],
                    "saved_outfits": [],
                    "feature_status": {
                        "appearance": appearance_count > 0,
                        "wardrobe": True,
                        "outfit_generator": True,
                        "fashion_score": True,
                        "closet_statistics": True,
                        "smart_shopping": True,
                        "visualization": True,
                        "weekly_planner": True
                    }
                }
                
        except Exception as e:
            print(f"Error fetching dashboard data: {e}")
        finally:
            if 'cursor' in locals() and cursor:
                try: cursor.close()
                except: pass
            if 'connection' in locals() and connection.is_connected():
                try: connection.close()
                except: pass
            
        # Fallback if DB fails
        return {
            "user": {"id": user_id, "name": "User"},
            "wardrobe": {"total_items": 0},
            "statistics": {"available": False},
            "recent_outfits": [],
            "saved_outfits": [],
            "feature_status": {
                "appearance": False, "wardrobe": True, "outfit_generator": True,
                "fashion_score": True, "closet_statistics": True, "smart_shopping": True,
                "visualization": True, "weekly_planner": True
            }
        }
