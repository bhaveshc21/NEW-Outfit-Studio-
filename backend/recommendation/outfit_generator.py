from .color_rules import calculate_outfit_color_score, normalize_color
from .occasion_rules import get_occasion_score, get_missing_occasion_categories
from .weather_rules import get_weather_score, get_missing_weather_categories
import random

def is_long_dress(item):
    if not item:
        return False
    cat = item.get('category', '').lower()
    name = item.get('name', '').lower()
    keywords = ['dress', 'maxi', 'gown', 'one piece', 'one-piece', 'full length', 'bodycon', 'frock']
    for k in keywords:
        if k in cat or k in name:
            return True
    return False


class OutfitGenerator:
    def __init__(self, wardrobe_items, profile, appearance=None):
        self.wardrobe = wardrobe_items
        self.profile = profile
        self.appearance = appearance
        self.skin_tone = appearance.get('skin_tone') if appearance else None
        
        self.tops = []
        self.outerwear = []
        self.bottoms = []
        self.footwear = []
        self.accessories = []
        self.dresses = []
        
        self.preferred_colors = []
        if self.profile and self.profile.get('preferred_colors'):
            self.preferred_colors = [normalize_color(c) for c in self.profile['preferred_colors'].split(',')]

        self._categorize_wardrobe()

    def _categorize_wardrobe(self):
        for item in self.wardrobe:
            cat = item.get('category', '').lower()
            if is_long_dress(item):
                self.dresses.append(item)
            elif 'jacket' in cat or 'blazer' in cat or 'coat' in cat or 'cardigan' in cat or 'sweater' in cat:
                self.outerwear.append(item)
            elif 'shirt' in cat or 'top' in cat or 'kurta' in cat:
                self.tops.append(item)
            elif 'jean' in cat or 'trouser' in cat or 'pant' in cat or 'bottom' in cat or 'short' in cat or 'skirt' in cat or 'legging' in cat:
                self.bottoms.append(item)
            elif any(keyword in cat for keyword in ['shoe', 'footwear', 'sneaker', 'slipper', 'sandal', 'sport', 'formal', 'heel', 'croc', 'boot']):
                self.footwear.append(item)
            elif 'accessory' in cat or 'watch' in cat or 'belt' in cat or 'hat' in cat:
                self.accessories.append(item)

    def generate_outfits(self, limit=10, occasion=None, weather_data=None):
        if (not self.tops or not self.bottoms) and not self.dresses:
            return {
                "success": True, 
                "message": "Not enough items in wardrobe to create a complete outfit (need Top+Bottom or a Dress).",
                "data": {"outfits": []}
            }
            
        if not self.footwear:
            return {
                "success": True, 
                "message": "Not enough items in wardrobe to create a complete outfit (need Footwear).",
                "data": {"outfits": []}
            }

        outfits = []
        outfit_id_counter = 1

        # Generate Top + Bottom outfits
        for top in self.tops:
            for bottom in self.bottoms:
                for shoe in self.footwear:
                    score, reason, is_invalid = self._evaluate_combination(top, bottom, shoe, None, occasion, weather_data)
                    
                    if score >= 15 and not is_invalid:
                        outfit = {
                            "id": outfit_id_counter,
                            "top": top,
                            "bottom": bottom,
                            "footwear": shoe,
                            "accessories": [],
                            "reason": reason,
                            "recommendation_score": score
                        }
                        if self.accessories:
                            outfit["accessories"].append(random.choice(self.accessories))
                        outfits.append(outfit)
                        outfit_id_counter += 1

        # Generate Layered outfits
        for top in self.tops:
            for out in self.outerwear:
                for bottom in self.bottoms:
                    for shoe in self.footwear:
                        score, reason, is_invalid = self._evaluate_combination(top, bottom, shoe, out, occasion, weather_data)
                        
                        if score >= 15 and not is_invalid:
                            outfit = {
                                "id": outfit_id_counter,
                                "top": top,
                                "outerwear": out,
                                "bottom": bottom,
                                "footwear": shoe,
                                "accessories": [],
                                "reason": reason,
                                "recommendation_score": score
                            }
                            if self.accessories:
                                outfit["accessories"].append(random.choice(self.accessories))
                            outfits.append(outfit)
                            outfit_id_counter += 1

        # Generate Dress outfits
        for dress in self.dresses:
            for shoe in self.footwear:
                score, reason, is_invalid = self._evaluate_combination(dress, None, shoe, None, occasion, weather_data)
                
                if score >= 15 and not is_invalid:
                    outfit = {
                        "id": outfit_id_counter,
                        "top": dress, # Treating dress as top and no bottom
                        "bottom": None,
                        "footwear": shoe,
                        "accessories": [],
                        "reason": reason,
                        "recommendation_score": score
                    }
                    if self.accessories:
                        outfit["accessories"].append(random.choice(self.accessories))
                    outfits.append(outfit)
                    outfit_id_counter += 1

        # Sort by recommendation score descending
        outfits.sort(key=lambda x: x["recommendation_score"], reverse=True)
        
        # Enforce diversity limits (max 3 kurtas, max 3 shorts per generation)
        final_outfits = []
        kurta_count = 0
        shorts_count = 0
        for outfit in outfits:
            top_name = outfit['top'].get('name', '').lower()
            top_cat = outfit['top'].get('category', '').lower()
            is_kurta = 'kurta' in top_name or 'kurta' in top_cat
            
            bottom_item = outfit.get('bottom')
            is_short = False
            if bottom_item:
                bot_str = (bottom_item.get('category', '') + ' ' + bottom_item.get('name', '')).lower()
                is_short = 'short' in bot_str
                
            if is_kurta and kurta_count >= 3:
                continue
            if is_short and shorts_count >= 3:
                continue
                
            final_outfits.append(outfit)
            if is_kurta: kurta_count += 1
            if is_short: shorts_count += 1
                
            if len(final_outfits) >= limit:
                break
        
        # Shopping suggestions
        suggestions = []
        if occasion:
            suggestions.extend(get_missing_occasion_categories(self.wardrobe, occasion))
        if weather_data:
            suggestions.extend(get_missing_weather_categories(self.wardrobe, weather_data, occasion))
            
        return {
            "success": True,
            "message": f"Generated {len(final_outfits)} outfits successfully.",
            "data": {
                "outfits": final_outfits,
                "shopping_suggestions": suggestions
            }
        }

    def get_all_combinations(self):
        combinations = []
        for top in self.tops:
            for bottom in self.bottoms:
                for shoe in self.footwear:
                    combinations.append({
                        "top": top,
                        "bottom": bottom,
                        "footwear": shoe
                    })
        for top in self.tops:
            for out in self.outerwear:
                for bottom in self.bottoms:
                    for shoe in self.footwear:
                        combinations.append({
                            "top": top,
                            "outerwear": out,
                            "bottom": bottom,
                            "footwear": shoe
                        })
        for dress in self.dresses:
            for shoe in self.footwear:
                combinations.append({
                    "top": dress,
                    "footwear": shoe
                })
        return combinations

    def _evaluate_combination(self, top, bottom, shoe, outerwear=None, occasion=None, weather_data=None):
        is_invalid = False
        
        # Determine items list
        items = [top, shoe]
        if outerwear:
            items.append(outerwear)
            
        if bottom:
            items.append(bottom)
            color_score_raw = calculate_outfit_color_score(top.get('color'), bottom.get('color'), shoe.get('color'), outerwear.get('color') if outerwear else None)
        else:
            # If dress, just evaluate top and shoe color harmony
            color_score_raw = calculate_outfit_color_score(top.get('color'), top.get('color'), shoe.get('color'))
        
        occ_avg = 50.0
        if occasion:
            occ_scores = []
            for item in items:
                occ_score, occ_inv = get_occasion_score(item, occasion)
                occ_scores.append(occ_score)
                if occ_inv: is_invalid = True
            occ_avg = sum(occ_scores) / len(items)
            
        wea_avg = 50.0
        if weather_data:
            wea_scores = []
            for item in items:
                wea_score, wea_inv = get_weather_score(item, weather_data)
                wea_scores.append(wea_score)
                if wea_inv: is_invalid = True
            wea_avg = sum(wea_scores) / len(items)
            
        # Combination logic
        top_cat = top.get('category', '').lower()
        bot_cat = bottom.get('category', '').lower() if bottom else ""
        shoe_cat = shoe.get('category', '').lower()
        out_cat = outerwear.get('category', '').lower() if outerwear else ""
        
        top_str = top_cat + " " + top.get('name', '').lower()
        bot_str = bot_cat + " " + (bottom.get('name', '').lower() if bottom else "")
        shoe_str = shoe_cat + " " + shoe.get('name', '').lower()
        out_str = out_cat + " " + (outerwear.get('name', '').lower() if outerwear else "")
        
        comb_penalty = 0.0
        comb_bonus = 0.0
        
        # Strict User Preferences for Kurta and Footwear
        is_kurta = 'kurta' in top_str
        is_sandal_or_slipper = 'sandal' in shoe_str or 'slipper' in shoe_str
        is_kurta_footwear = is_sandal_or_slipper or 'heel' in shoe_str
        
        if is_kurta:
            if bottom:
                is_jeans = 'jean' in bot_str
                is_white_skirt = 'skirt' in bot_str and bottom.get('color', '').lower() == 'white'
                if is_jeans or is_white_skirt:
                    comb_bonus += 5.0 # small bonus for correct pairing, don't overpower
                else:
                    comb_penalty += 30.0 # penalty for bad pairing with kurta
            else:
                comb_penalty += 30.0 # penalty for no bottom with kurta
                
            if not is_kurta_footwear:
                comb_penalty += 50.0 # Strict penalty to forbid other shoes with kurtas
                
            if 'jacket' in out_str:
                comb_penalty += 100.0 # Strict penalty to forbid jackets with kurtas
        else:
            # Not a kurta
            if is_sandal_or_slipper:
                comb_penalty += 50.0 # Strict penalty to forbid sandals and slippers with non-kurtas
                
        is_short = 'short' in bot_str
        if is_short:
            is_casual_shoe = any(w in shoe_str for w in ['sandal', 'slipper', 'sneaker', 'sport', 'croc'])
            if not is_casual_shoe:
                comb_penalty += 40.0 # Strict penalty for formal shoes/heels with shorts
            else:
                # Shorts logic is balanced out here. Remove the non-kurta sandal penalty if they are wearing shorts.
                if is_sandal_or_slipper:
                    comb_penalty -= 50.0
        
        # We only apply a very tiny penalty for extreme formal/casual clashes if they happen, 
        # but let occasion_rules.py do the heavy lifting.
        top_is_formal = 'formal' in top_cat or 'suit' in top_cat or ('shirt' in top_cat and 'tshirt' not in top_cat)
        if out_cat:
            if 'suit' in out_cat or 'formal' in out_cat:
                top_is_formal = True
                
        # Only penalize if it's extreme (like a formal suit with sweatpants)
        if bottom and top_is_formal and ('sweat' in bot_cat or 'track' in bot_cat):
            comb_penalty += 10.0
            
        # Weighting: 40% Color, 30% Occasion, 30% Weather
        score = (color_score_raw * 0.4) + (occ_avg * 0.3) + (wea_avg * 0.3)
        score += comb_bonus
        score -= comb_penalty
        
        # User preferences bonus (up to 5 points)
        if self.preferred_colors:
            colors_in_outfit = {normalize_color(item.get('color')) for item in items}
            matches = colors_in_outfit.intersection(set(self.preferred_colors))
            score += (len(matches) * 2.0)
            
        # Skin tone harmony bonus (up to 10 points)
        skin_bonus = self._get_skin_tone_bonus(items)
        score += skin_bonus
            
        # Tie-breaker (so it's deterministic and visually unique in the UI)
        t_id = top.get('id', 0) or 0
        b_id = bottom.get('id', 0) or 0 if bottom else 0
        s_id = shoe.get('id', 0) or 0
        o_id = outerwear.get('id', 0) or 0 if outerwear else 0
        # A visible deterministic bump between 0.0 and 0.9
        tie_breaker = ((t_id * 7) + (b_id * 13) + (s_id * 17) + (o_id * 19)) % 10 / 10.0
        
        score = round(max(0.0, min(99.0, score)), 0) # Base integer out of 99
        score += tie_breaker
                
        reason = "A well-balanced outfit."
        if occasion and weather_data:
            reason = f"Suitable combination for {occasion.lower()} and the current weather."
        elif color_score_raw >= 85:
            reason = "Excellent color harmony."
        elif color_score_raw >= 70:
            reason = "Good color combination."
            
        if self.preferred_colors and score > 80:
            reason += " Matches your preferred colors!"
            
        if skin_bonus > 0 and score > 75:
            reason += " Complements your skin tone!"
            
        return score, reason, is_invalid

    def _get_skin_tone_bonus(self, items):
        if not self.skin_tone or self.skin_tone == "Not Analyzed":
            return 0.0
            
        outfit_colors = {normalize_color(item.get('color')) for item in items if item}
        bonus = 0.0
        
        st = self.skin_tone.lower()
        if st == "light":
            best_colors = {"navy", "emerald", "dark red", "pink", "light blue", "black"}
        elif st == "medium" or st == "tan":
            best_colors = {"beige", "brown", "mustard", "olive", "red", "cream", "white"}
        elif st == "deep":
            best_colors = {"yellow", "white", "red", "cobalt blue", "emerald", "pink"}
        else:
            best_colors = set()
            
        matches = outfit_colors.intersection(best_colors)
        bonus += len(matches) * 3.0
        return min(bonus, 10.0)
