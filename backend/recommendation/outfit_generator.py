from .color_rules import calculate_outfit_color_score, normalize_color
from .occasion_rules import get_occasion_score, get_missing_occasion_categories
from .weather_rules import get_weather_score, get_missing_weather_categories
import random

class OutfitGenerator:
    def __init__(self, wardrobe_items, profile):
        self.wardrobe = wardrobe_items
        self.profile = profile
        self.tops = []
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
            if 'dress' in cat or 'bodycon' in cat or 'frock' in cat:
                self.dresses.append(item)
            elif 'shirt' in cat or 'top' in cat or 'jacket' in cat or 'blazer' in cat:
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
                    score, reason, is_invalid = self._evaluate_combination(top, bottom, shoe, occasion, weather_data)
                    
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

        # Generate Dress outfits
        for dress in self.dresses:
            for shoe in self.footwear:
                score, reason, is_invalid = self._evaluate_combination(dress, None, shoe, occasion, weather_data)
                
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
        
        # Shopping suggestions
        suggestions = []
        if occasion:
            suggestions.extend(get_missing_occasion_categories(self.wardrobe, occasion))
        if weather_data:
            suggestions.extend(get_missing_weather_categories(self.wardrobe, weather_data, occasion))
            
        return {
            "success": True,
            "message": f"Generated {len(outfits)} outfits successfully.",
            "data": {
                "outfits": outfits[:limit],
                "shopping_suggestions": suggestions
            }
        }

    def _evaluate_combination(self, top, bottom, shoe, occasion=None, weather_data=None):
        is_invalid = False
        
        # Determine items list
        items = [top, shoe]
        if bottom:
            items.append(bottom)
            color_score_raw = calculate_outfit_color_score(top.get('color'), bottom.get('color'), shoe.get('color'))
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
        
        comb_penalty = 0.0
        if bottom and ('formal' in top_cat or 'suit' in top_cat) and ('short' in bot_cat or 'sweat' in bot_cat or 'jean' in bot_cat):
            comb_penalty += 30.0
        if ('formal' in top_cat or 'formal' in bot_cat) and ('sneaker' in shoe_cat or 'sport' in shoe_cat):
            comb_penalty += 20.0
        if ('t-shirt' in top_cat or 'sport' in top_cat or 'casual' in top_cat) and ('formal' in shoe_cat):
            comb_penalty += 25.0
            
        # Weighting: 40% Color, 30% Occasion, 30% Weather
        score = (color_score_raw * 0.4) + (occ_avg * 0.3) + (wea_avg * 0.3)
        score -= comb_penalty
        
        # User preferences bonus (up to 5 points)
        if self.preferred_colors:
            colors_in_outfit = {normalize_color(item.get('color')) for item in items}
            matches = colors_in_outfit.intersection(set(self.preferred_colors))
            score += (len(matches) * 2.0)
            
        # Tie-breaker (so it's deterministic and visually unique in the UI)
        t_id = top.get('id', 0) or 0
        b_id = bottom.get('id', 0) or 0 if bottom else 0
        s_id = shoe.get('id', 0) or 0
        # A visible deterministic bump between 0.0 and 0.9
        tie_breaker = ((t_id * 7) + (b_id * 13) + (s_id * 17)) % 10 / 10.0
        
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
            
        return score, reason, is_invalid
