import os

java_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\java\com\outfitstudio'
backend_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\backend'

# 1. Update dashboard_service.py
dash_service = os.path.join(backend_dir, 'services', 'dashboard_service.py')
with open(dash_service, 'r') as f:
    content = f.read()

replacement = '''
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
                    "recent_outfits": recent_outfits,
'''
content = content.replace('''
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
''', replacement)

with open(dash_service, 'w') as f:
    f.write(content)

# 2. Update DashboardResponse.java
dashboard_resp = os.path.join(java_dir, 'api', 'models', 'DashboardResponse.java')
with open(dashboard_resp, 'r') as f:
    content = f.read()

if 'List<GeneratedOutfit> recentOutfits' not in content:
    content = content.replace(
        'import com.google.gson.annotations.SerializedName;', 
        'import com.google.gson.annotations.SerializedName;\nimport java.util.List;'
    )
    content = content.replace(
        'private FeatureStatus featureStatus;',
        'private FeatureStatus featureStatus;\n\n        @SerializedName("recent_outfits")\n        private List<GeneratedOutfit> recentOutfits;'
    )
    content = content.replace(
        'public FeatureStatus getFeatureStatus() { return featureStatus; }',
        'public FeatureStatus getFeatureStatus() { return featureStatus; }\n        public List<GeneratedOutfit> getRecentOutfits() { return recentOutfits; }'
    )
    with open(dashboard_resp, 'w') as f:
        f.write(content)

print("Updated backend and DashboardResponse")
