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
                cursor.execute("SELECT name, profile_image FROM users WHERE id = %s", (user_id,))
                user = cursor.fetchone()
                
                # Get wardrobe count
                cursor.execute("SELECT COUNT(*) as total_items FROM wardrobe_items WHERE user_id = %s", (user_id,))
                wardrobe_count = cursor.fetchone()['total_items']
                
                # Check if appearance is available
                cursor.execute("SELECT image_path FROM appearance_analysis WHERE user_id = %s ORDER BY created_at DESC LIMIT 1", (user_id,))
                appearance_row = cursor.fetchone()
                appearance_count = 1 if appearance_row else 0
                appearance_image = None
                if appearance_row and appearance_row['image_path']:
                    appearance_image = appearance_row['image_path'].replace('\\', '/')
                    if not appearance_image.startswith('/'):
                        appearance_image = '/' + appearance_image
                
                # Fetch recent worn outfits (repurposing saved_outfits)
                cursor.execute("""
                    SELECT so.id as worn_outfit_id, so.created_at as worn_at, so.fashion_score as recommendation_score, so.reason,
                           t.id as top_id, t.name as top_name, t.category as top_category, t.color as top_color, t.image_path as top_image_path,
                           o.id as out_id, o.name as out_name, o.category as out_category, o.color as out_color, o.image_path as out_image_path,
                           b.id as bot_id, b.name as bot_name, b.category as bot_category, b.color as bot_color, b.image_path as bot_image_path,
                           f.id as foot_id, f.name as foot_name, f.category as foot_category, f.color as foot_color, f.image_path as foot_image_path
                    FROM saved_outfits so
                    LEFT JOIN wardrobe_items t ON so.top_id = t.id
                    LEFT JOIN wardrobe_items o ON so.outerwear_id = o.id
                    LEFT JOIN wardrobe_items b ON so.bottom_id = b.id
                    LEFT JOIN wardrobe_items f ON so.footwear_id = f.id
                    WHERE so.user_id = %s AND so.reason = 'Worn by user'
                    ORDER BY so.created_at DESC
                    LIMIT 5
                """, (user_id,))
                
                recent_results = cursor.fetchall()
                recent_outfits = []
                for row in recent_results:
                    outfit = {
                        "id": row['worn_outfit_id'],
                        "worn_at": row['worn_at'].isoformat() if row['worn_at'] else None,
                        "recommendation_score": row['recommendation_score'] or 0.0,
                        "reason": row['reason'] or "Worn outfit",
                        "top": {"id": row['top_id'], "name": row['top_name'], "category": row['top_category'], "color": row['top_color'], "image_path": row['top_image_path']} if row['top_id'] else None,
                        "outerwear": {"id": row['out_id'], "name": row['out_name'], "category": row['out_category'], "color": row['out_color'], "image_path": row['out_image_path']} if row['out_id'] else None,
                        "bottom": {"id": row['bot_id'], "name": row['bot_name'], "category": row['bot_category'], "color": row['bot_color'], "image_path": row['bot_image_path']} if row['bot_id'] else None,
                        "footwear": {"id": row['foot_id'], "name": row['foot_name'], "category": row['foot_category'], "color": row['foot_color'], "image_path": row['foot_image_path']} if row['foot_id'] else None
                    }
                    recent_outfits.append(outfit)

                name = user['name'] if user else "User"
                profile_image = user['profile_image'] if (user and user.get('profile_image')) else appearance_image
                return {
                    "user": {
                        "id": user_id,
                        "name": name,
                        "profile_image": profile_image
                    },
                    "wardrobe": {
                        "total_items": wardrobe_count
                    },
                    "statistics": {
                        "available": wardrobe_count > 0
                    },
                    "recent_outfits": recent_outfits,
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
