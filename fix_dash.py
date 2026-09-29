import os

backend_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\backend'
dash_service = os.path.join(backend_dir, 'services', 'dashboard_service.py')

with open(dash_service, 'r') as f:
    content = f.read()

bad_sql = '''
                # Fetch recent planned outfits
                cursor.execute("""
                    SELECT p.*,
                           t.id as t_id, t.name as t_name, t.image_path as t_img,
                           b.id as b_id, b.name as b_name, b.image_path as b_img,
                           f.id as f_id, f.name as f_name, f.image_path as f_img
                    FROM planned_outfits p
                    LEFT JOIN wardrobe_items t ON p.top_id = t.id
                    LEFT JOIN wardrobe_items b ON p.bottom_id = b.id
                    LEFT JOIN wardrobe_items f ON p.footwear_id = f.id
                    WHERE p.user_id = %s
                    ORDER BY p.planned_date DESC
                    LIMIT 3
                """, (user_id,))
                recent_rows = cursor.fetchall()
                
                recent_outfits = []
                for row in recent_rows:
                    if row['t_id'] and row['b_id']:
                        recent_outfits.append({
                            "top": {"id": row['t_id'], "name": row['t_name'], "image_path": row['t_img']},
                            "bottom": {"id": row['b_id'], "name": row['b_name'], "image_path": row['b_img']},
                            "footwear": {"id": row['f_id'], "name": row['f_name'], "image_path": row['f_img']} if row['f_id'] else None,
                            "recommendation_score": row['fashion_score'] or 8.5,
                            "reason": f"Planned for {row['occasion']}"
                        })
'''

content = content.replace(bad_sql, '\n                recent_outfits = []\n')

with open(dash_service, 'w') as f:
    f.write(content)

print("Fixed dashboard_service.py")
