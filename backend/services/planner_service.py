import json
from datetime import datetime, timedelta
from recommendation.outfit_generator import OutfitGenerator
from recommendation.outfit_score import evaluate_outfit
from services.weather_service import WeatherService
import traceback
import random

class PlannerService:
    def __init__(self):
        self.weather_service = WeatherService()
    
    def get_user_wardrobe(self, cursor, user_id):
        cursor.execute("SELECT * FROM wardrobe_items WHERE user_id = %s", (user_id,))
        columns = [col[0] for col in cursor.description]
        return [dict(zip(columns, row)) for row in cursor.fetchall()]

    def get_user_profile(self, cursor, user_id):
        cursor.execute("SELECT p.*, u.gender FROM profiles p JOIN users u ON p.user_id = u.id WHERE p.user_id = %s", (user_id,))
        row = cursor.fetchone()
        if not row:
            return None
        columns = [col[0] for col in cursor.description]
        return dict(zip(columns, row))

    def resolve_occasion(self, cursor, user_id, target_date):
        # target_date is a datetime.date object
        # 1. Check special occasion
        cursor.execute("SELECT occasion FROM planner_schedules WHERE user_id = %s AND specific_date = %s AND is_recurring = 0", (user_id, target_date.strftime('%Y-%m-%d')))
        special = cursor.fetchone()
        if special:
            return special[0], "special"
        
        # 2. Check recurring
        day_of_week = target_date.weekday() # Monday is 0
        cursor.execute("SELECT occasion FROM planner_schedules WHERE user_id = %s AND day_of_week = %s AND is_recurring = 1", (user_id, day_of_week))
        recurring = cursor.fetchone()
        if recurring:
            return recurring[0], "recurring"
            
        return "Casual", "default"

    def generate_weekly_plan(self, db_conn, user_id, start_date_str, location, requested_occasion=None):
        try:
            start_date = datetime.strptime(start_date_str, "%Y-%m-%d").date()
            dates = [start_date + timedelta(days=i) for i in range(7)]
            
            cursor = db_conn.cursor()
            wardrobe = self.get_user_wardrobe(cursor, user_id)
            profile = self.get_user_profile(cursor, user_id)
            
            if not profile:
                return {"success": False, "message": "User profile not found."}
                
            if not wardrobe or len(wardrobe) < 3:
                return {"success": False, "message": "Add more clothing to your wardrobe before planning outfits."}
                
            cursor.execute("SELECT skin_tone FROM appearance_analysis WHERE user_id = %s", (user_id,))
            appearance = cursor.fetchone()
            if appearance:
                cols = [col[0] for col in cursor.description]
                appearance = dict(zip(cols, appearance))
                
            # Get weather
            weekly_weather = self.weather_service.get_weekly_weather(location)
            
            # Get already planned/locked outfits
            cursor.execute("SELECT * FROM planned_outfits WHERE user_id = %s AND planned_date >= %s AND planned_date <= %s", 
                           (user_id, dates[0].strftime('%Y-%m-%d'), dates[-1].strftime('%Y-%m-%d')))
            planned_rows = cursor.fetchall()
            cols = [col[0] for col in cursor.description]
            existing_plans = {row[cols.index('planned_date')]: dict(zip(cols, row)) for row in planned_rows}
            
            # Track used items for diversity
            used_items_counts = {}
            for row in existing_plans.values():
                if row['is_locked']:
                    for key in ['top_id', 'bottom_id', 'outerwear_id', 'footwear_id']:
                        if row.get(key):
                            used_items_counts[row[key]] = used_items_counts.get(row[key], 0) + 1
            
            generator = OutfitGenerator(wardrobe, profile, appearance)
            
            weekly_result = []
            
            for d in dates:
                d_str = d.strftime('%Y-%m-%d')
                if requested_occasion:
                    occasion = requested_occasion
                    occasion_source = "user_input"
                else:
                    occasion, occasion_source = self.resolve_occasion(cursor, user_id, d)
                
                weather = weekly_weather.get(d_str) if weekly_weather else None
                if not weather:
                    weather = {"temperature": 25, "condition": "Clear", "location": location}
                
                existing = existing_plans.get(d)
                
                if existing and existing['is_locked']:
                    # Use existing
                    outfit_data = self._build_outfit_data_from_db(existing, wardrobe)
                    weekly_result.append({
                        "date": d_str,
                        "day": d.strftime("%A"),
                        "occasion": occasion,
                        "occasion_source": occasion_source,
                        "weather": weather,
                        "outfit": outfit_data,
                        "fashion_score": existing['fashion_score'],
                        "locked": True,
                        "reason": existing['reason']
                    })
                    continue
                    
                # Generate new candidate
                candidates = generator.get_all_combinations()
                best_candidate = None
                best_score = -9999
                best_eval = None
                
                for cand in candidates:
                    eval_res = evaluate_outfit(cand, occasion, weather)
                    if not eval_res.get("success"):
                        continue
                        
                    f_score = eval_res.get("fashion_score", 0)
                    
                    # Apply diversity penalty
                    penalty = 0
                    for k in ['top', 'bottom', 'outerwear', 'footwear']:
                        if cand.get(k):
                            item_id = cand[k]['id']
                            count = used_items_counts.get(item_id, 0)
                            penalty += (count * 5) # 5 points penalty per reuse
                            
                    final_score = f_score - penalty + random.uniform(0, 0.5)
                    
                    if final_score > best_score:
                        best_score = final_score
                        best_candidate = cand
                        best_eval = eval_res
                        
                if best_candidate:
                    # Save to DB
                    top_id = best_candidate.get('top', {}).get('id')
                    bottom_id = best_candidate.get('bottom', {}).get('id')
                    outerwear_id = best_candidate.get('outerwear', {}).get('id')
                    footwear_id = best_candidate.get('footwear', {}).get('id')
                    factors = best_eval.get("factors", {})
                    reason = factors.get("combination", {}).get("reason", "Selected for occasion and weather.")
                    
                    cursor.execute("""
                        INSERT INTO planned_outfits 
                        (user_id, planned_date, occasion, top_id, bottom_id, outerwear_id, footwear_id, fashion_score, reason, is_locked)
                        VALUES (%s, %s, %s, %s, %s, %s, %s, %s, %s, %s)
                        ON DUPLICATE KEY UPDATE
                        occasion=VALUES(occasion), top_id=VALUES(top_id), bottom_id=VALUES(bottom_id), 
                        outerwear_id=VALUES(outerwear_id), footwear_id=VALUES(footwear_id), 
                        fashion_score=VALUES(fashion_score), reason=VALUES(reason), is_locked=VALUES(is_locked)
                    """, (user_id, d_str, occasion, top_id, bottom_id, outerwear_id, footwear_id, best_eval.get("fashion_score"), reason, False))
                    db_conn.commit()
                    
                    # Update used counts
                    for k in ['top', 'bottom', 'outerwear', 'footwear']:
                        if best_candidate.get(k):
                            item_id = best_candidate[k]['id']
                            used_items_counts[item_id] = used_items_counts.get(item_id, 0) + 1
                    
                    weekly_result.append({
                        "date": d_str,
                        "day": d.strftime("%A"),
                        "occasion": occasion,
                        "occasion_source": occasion_source,
                        "weather": weather,
                        "outfit": best_candidate,
                        "fashion_score": best_eval.get("fashion_score"),
                        "locked": False,
                        "reason": reason
                    })
                else:
                    # No suitable outfit
                    weekly_result.append({
                        "date": d_str,
                        "day": d.strftime("%A"),
                        "occasion": occasion,
                        "occasion_source": occasion_source,
                        "weather": weather,
                        "outfit": None,
                        "fashion_score": 0,
                        "locked": False,
                        "reason": "Not enough compatible wardrobe items to plan this day."
                    })
            
            cursor.close()
            return {
                "success": True,
                "data": {
                    "week_start": dates[0].strftime('%Y-%m-%d'),
                    "week_end": dates[-1].strftime('%Y-%m-%d'),
                    "days": weekly_result
                }
            }
        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": str(e)}

    def regenerate_day(self, db_conn, user_id, date_str, location, requested_occasion=None):
        # Regenerates a single day's outfit
        try:
            d = datetime.strptime(date_str, "%Y-%m-%d").date()
            cursor = db_conn.cursor()
            wardrobe = self.get_user_wardrobe(cursor, user_id)
            profile = self.get_user_profile(cursor, user_id)
            
            if not profile or not wardrobe:
                return {"success": False, "message": "Profile or wardrobe not found."}
                
            # Fetch weather for the next 7 days, find the date
            weekly_weather = self.weather_service.get_weekly_weather(location)
            weather = weekly_weather.get(date_str) if weekly_weather else {"temperature": 25, "condition": "Clear", "location": location}
            
            if requested_occasion:
                occasion = requested_occasion
                occasion_source = "user_input"
            else:
                occasion, occasion_source = self.resolve_occasion(cursor, user_id, d)
            
            # Fetch used items this week (excluding the current day if unlocked)
            # Find the week start (Monday)
            week_start = d - timedelta(days=d.weekday())
            week_end = week_start + timedelta(days=6)
            
            cursor.execute("SELECT * FROM planned_outfits WHERE user_id = %s AND planned_date >= %s AND planned_date <= %s", 
                           (user_id, week_start.strftime('%Y-%m-%d'), week_end.strftime('%Y-%m-%d')))
            planned_rows = cursor.fetchall()
            cols = [col[0] for col in cursor.description]
            existing_plans = {row[cols.index('planned_date')]: dict(zip(cols, row)) for row in planned_rows}
            
            # Track used items
            used_items_counts = {}
            for planned_date, row in existing_plans.items():
                if planned_date != d: # Only count other days
                    for key in ['top_id', 'bottom_id', 'outerwear_id', 'footwear_id']:
                        if row.get(key):
                            used_items_counts[row[key]] = used_items_counts.get(row[key], 0) + 1
                            
            current_day_plan = existing_plans.get(d)
            if current_day_plan and current_day_plan['is_locked']:
                return {"success": False, "message": "This outfit is locked and cannot be regenerated."}
            
            generator = OutfitGenerator(wardrobe, profile)
            candidates = generator.get_all_combinations()
            best_candidate = None
            best_score = -9999
            best_eval = None
            
            for cand in candidates:
                # Avoid exact same outfit as currently planned
                if current_day_plan:
                    cand_top = cand.get('top', {}).get('id')
                    cand_bot = cand.get('bottom', {}).get('id')
                    if cand_top == current_day_plan.get('top_id') and cand_bot == current_day_plan.get('bottom_id'):
                        continue # Skip the exact same combination
                        
                eval_res = evaluate_outfit(cand, occasion, weather)
                if not eval_res.get("success"):
                    continue
                    
                f_score = eval_res.get("fashion_score", 0)
                penalty = sum(used_items_counts.get(cand.get(k, {}).get('id'), 0) * 5 for k in ['top', 'bottom', 'outerwear', 'footwear'] if cand.get(k))
                final_score = f_score - penalty + random.uniform(0, 0.5)
                
                if final_score > best_score:
                    best_score = final_score
                    best_candidate = cand
                    best_eval = eval_res
                    
            if best_candidate:
                top_id = best_candidate.get('top', {}).get('id')
                bottom_id = best_candidate.get('bottom', {}).get('id')
                outerwear_id = best_candidate.get('outerwear', {}).get('id')
                footwear_id = best_candidate.get('footwear', {}).get('id')
                # get reason from factors if available
                factors = best_eval.get("factors", {})
                reason = factors.get("combination", {}).get("reason", "Selected for occasion and weather.")
                
                cursor.execute("""
                    INSERT INTO planned_outfits 
                    (user_id, planned_date, occasion, top_id, bottom_id, outerwear_id, footwear_id, fashion_score, reason, is_locked)
                    VALUES (%s, %s, %s, %s, %s, %s, %s, %s, %s, %s)
                    ON DUPLICATE KEY UPDATE
                    occasion=VALUES(occasion), top_id=VALUES(top_id), bottom_id=VALUES(bottom_id), 
                    outerwear_id=VALUES(outerwear_id), footwear_id=VALUES(footwear_id), 
                    fashion_score=VALUES(fashion_score), reason=VALUES(reason), is_locked=VALUES(is_locked)
                """, (user_id, date_str, occasion, top_id, bottom_id, outerwear_id, footwear_id, best_eval.get("fashion_score"), reason, False))
                db_conn.commit()
                
                result_day = {
                    "date": date_str,
                    "day": d.strftime("%A"),
                    "occasion": occasion,
                    "occasion_source": occasion_source,
                    "weather": weather,
                    "outfit": best_candidate,
                    "fashion_score": best_eval.get("fashion_score"),
                    "locked": False,
                    "reason": reason
                }
                return {"success": True, "data": result_day}
            else:
                return {"success": False, "message": "No alternative outfits available."}
        except Exception as e:
            traceback.print_exc()
            return {"success": False, "message": str(e)}

    def _build_outfit_data_from_db(self, row, wardrobe):
        outfit = {}
        wardrobe_dict = {item['id']: item for item in wardrobe}
        if row.get('top_id'): outfit['top'] = wardrobe_dict.get(row['top_id'])
        if row.get('bottom_id'): outfit['bottom'] = wardrobe_dict.get(row['bottom_id'])
        if row.get('outerwear_id'): outfit['outerwear'] = wardrobe_dict.get(row['outerwear_id'])
        if row.get('footwear_id'): outfit['footwear'] = wardrobe_dict.get(row['footwear_id'])
        return outfit
