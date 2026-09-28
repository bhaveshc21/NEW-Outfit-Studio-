import mysql.connector
from config import Config

def get_closet_statistics(user_id):
    try:
        connection = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            database=Config.DATABASE_NAME,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD
        )
        
        if not connection.is_connected():
            return {"success": False, "message": "Database connection failed"}
            
        cursor = connection.cursor(dictionary=True)
        
        # Verify user exists
        cursor.execute("SELECT id FROM users WHERE id = %s", (user_id,))
        user = cursor.fetchone()
        if not user:
            return {"success": False, "message": "User not found"}
            
        # Get wardrobe items
        cursor.execute("SELECT id, name, category, color, usage_count, last_worn_at FROM wardrobe_items WHERE user_id = %s", (user_id,))
        items = cursor.fetchall()
        
        total_items = len(items)
        
        if total_items == 0:
            return {
                "success": True,
                "message": "Closet statistics generated successfully.",
                "data": {
                    "total_items": 0,
                    "category_distribution": [],
                    "color_distribution": [],
                    "usage": {
                        "available": True,
                        "message": "Usage tracking is active, but you have no items.",
                        "never_worn_count": 0,
                        "rarely_used_count": 0,
                        "most_worn_item": None
                    },
                    "saved_outfits": {
                        "available": False,
                        "count": 0,
                        "message": "Saved outfit tracking is not available yet."
                    },
                    "wardrobe_gaps": {
                        "critical": ["Tops", "Bottoms", "Footwear"],
                        "optional": ["Accessories", "Jackets", "Dresses"],
                        "underrepresented": []
                    },
                    "insights": ["Your wardrobe is currently empty."]
                }
            }
            
        # Process Categories
        category_counts = {}
        for item in items:
            raw_cat = item.get('category')
            cat = raw_cat.title().strip() if raw_cat else "Unspecified"
            # Normalize missing 's' for some common categories but keep it safe
            if cat.lower() in ['t-shirt', 'shirt', 'jean', 'trouser', 'shoe', 'jacket', 'skirt', 'legging', 'dress']:
                if cat.lower() == 'dress':
                    cat += 'es'
                else:
                    cat += 's'
            category_counts[cat] = category_counts.get(cat, 0) + 1
            
        category_distribution = []
        for name, count in sorted(category_counts.items(), key=lambda x: x[1], reverse=True):
            category_distribution.append({
                "name": name,
                "count": count,
                "percentage": round((count / total_items) * 100, 1)
            })
            
        # Process Colors
        color_counts = {}
        for item in items:
            raw_color = item.get('color')
            color = raw_color.title().strip() if raw_color else "Unspecified"
            color_counts[color] = color_counts.get(color, 0) + 1
            
        color_distribution = []
        for name, count in sorted(color_counts.items(), key=lambda x: x[1], reverse=True):
            color_distribution.append({
                "name": name,
                "count": count,
                "percentage": round((count / total_items) * 100, 1)
            })
            
        # Wardrobe Gaps
        # Broad categories based on outfit_generator.py logic
        broad_counts = {"Tops": 0, "Bottoms": 0, "Footwear": 0, "Accessories": 0, "Jackets": 0, "Dresses": 0}
        
        for item in items:
            cat = item.get('category', '').lower() if item.get('category') else ''
            if 'dress' in cat or 'bodycon' in cat or 'frock' in cat:
                broad_counts["Dresses"] += 1
            elif 'shirt' in cat or 'top' in cat:
                broad_counts["Tops"] += 1
            elif 'jacket' in cat or 'blazer' in cat:
                broad_counts["Jackets"] += 1
            elif 'jean' in cat or 'trouser' in cat or 'pant' in cat or 'bottom' in cat or 'short' in cat or 'skirt' in cat or 'legging' in cat:
                broad_counts["Bottoms"] += 1
            elif any(keyword in cat for keyword in ['shoe', 'footwear', 'sneaker', 'slipper', 'sandal', 'sport', 'formal', 'heel', 'croc', 'boot']):
                broad_counts["Footwear"] += 1
            elif 'accessory' in cat or 'watch' in cat or 'belt' in cat or 'hat' in cat:
                broad_counts["Accessories"] += 1
                
        critical_gaps = []
        optional_gaps = []
        underrepresented = []
        
        if broad_counts["Tops"] == 0 and broad_counts["Dresses"] == 0: critical_gaps.append("Tops or Dresses")
        if broad_counts["Bottoms"] == 0 and broad_counts["Dresses"] == 0: critical_gaps.append("Bottoms (unless wearing Dress)")
        if broad_counts["Footwear"] == 0: critical_gaps.append("Footwear")
        
        if broad_counts["Jackets"] == 0: optional_gaps.append("Jackets")
        if broad_counts["Accessories"] == 0: optional_gaps.append("Accessories")
        
        # Calculate underrepresented for core items (if they have > 0 but much less than average of present core items)
        core_present = [c for name, c in broad_counts.items() if name in ["Tops", "Bottoms", "Footwear"] and c > 0]
        if core_present:
            avg_core = sum(core_present) / len(core_present)
            for name in ["Tops", "Bottoms", "Footwear"]:
                if 0 < broad_counts[name] < (avg_core * 0.3): # Less than 30% of average
                    underrepresented.append(name)
                    
        wardrobe_gaps = {
            "critical": critical_gaps,
            "optional": optional_gaps,
            "underrepresented": underrepresented
        }
        
        # Calculate Usage Stats
        from datetime import datetime
        never_worn_count = 0
        rarely_used_count = 0
        most_worn_item = None
        max_usage = -1
        
        for item in items:
            usage = item.get('usage_count', 0)
            last_worn = item.get('last_worn_at')
            
            if usage == 0 and last_worn is None:
                never_worn_count += 1
            elif last_worn:
                days = (datetime.now() - last_worn).days
                if days >= 60:
                    rarely_used_count += 1
                    
            if usage > max_usage and usage > 0:
                max_usage = usage
                most_worn_item = item.get('name')

        usage_msg_parts = []
        if most_worn_item:
            usage_msg_parts.append(f"Most worn: {most_worn_item} ({max_usage} times).")
        if never_worn_count > 0:
            usage_msg_parts.append(f"{never_worn_count} items never worn.")
        if rarely_used_count > 0:
            usage_msg_parts.append(f"{rarely_used_count} items rarely used.")
            
        usage_msg = " ".join(usage_msg_parts) if usage_msg_parts else "All items are worn regularly."

        # Generate Insights
        insights = []
        insights.append(f"Your wardrobe contains {total_items} items.")
        
        if rarely_used_count > 0:
            insights.append(f"You have {rarely_used_count} rarely used items. Consider donating them.")
        
        if category_distribution:
            top_cat = category_distribution[0]['name']
            insights.append(f"{top_cat} is your largest clothing category.")
            
        if color_distribution:
            top_color = color_distribution[0]['name']
            if top_color != "Unspecified":
                insights.append(f"{top_color} is your most common wardrobe color.")
                
        if critical_gaps:
            insights.append(f"You are missing critical categories: {', '.join(critical_gaps)}. You cannot generate complete outfits.")
        elif underrepresented:
            insights.append(f"Categories like {', '.join(underrepresented)} are underrepresented in your wardrobe.")
        else:
            insights.append("Your wardrobe contains a good mix of core categories for outfit generation.")
            
        return {
            "success": True,
            "message": "Closet statistics generated successfully.",
            "data": {
                "total_items": total_items,
                "category_distribution": category_distribution,
                "color_distribution": color_distribution,
                "usage": {
                    "available": True,
                    "message": usage_msg,
                    "never_worn_count": never_worn_count,
                    "rarely_used_count": rarely_used_count,
                    "most_worn_item": most_worn_item
                },
                "saved_outfits": {
                    "available": False,
                    "count": 0,
                    "message": "Saved outfit tracking is not available yet."
                },
                "wardrobe_gaps": wardrobe_gaps,
                "insights": insights
            }
        }
        
    except mysql.connector.Error as e:
        return {"success": False, "message": f"Database error: {str(e)}"}
    except Exception as e:
        return {"success": False, "message": f"An error occurred: {str(e)}"}
