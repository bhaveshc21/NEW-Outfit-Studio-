from .color_rules import calculate_outfit_color_score, normalize_color
import random

class OutfitGenerator:
    def __init__(self, wardrobe_items, profile):
        self.wardrobe = wardrobe_items
        self.profile = profile
        self.tops = []
        self.bottoms = []
        self.footwear = []
        self.accessories = []
        
        self.preferred_colors = []
        if self.profile and self.profile.get('preferred_colors'):
            self.preferred_colors = [normalize_color(c) for c in self.profile['preferred_colors'].split(',')]

        self._categorize_wardrobe()

    def _categorize_wardrobe(self):
        for item in self.wardrobe:
            cat = item.get('category', '').lower()
            if 'shirt' in cat or 'top' in cat or 'jacket' in cat:
                self.tops.append(item)
            elif 'jean' in cat or 'trouser' in cat or 'pant' in cat or 'bottom' in cat or 'short' in cat:
                self.bottoms.append(item)
            elif 'shoe' in cat or 'footwear' in cat or 'sneaker' in cat or 'boot' in cat:
                self.footwear.append(item)
            elif 'accessory' in cat or 'watch' in cat or 'belt' in cat or 'hat' in cat:
                self.accessories.append(item)

    def generate_outfits(self, limit=10):
        if not self.tops or not self.bottoms or not self.footwear:
            return {
                "success": True, 
                "message": "Not enough items in wardrobe to create a complete outfit (need Top, Bottom, and Footwear).",
                "data": {"outfits": []}
            }

        outfits = []
        outfit_id_counter = 1

        for top in self.tops:
            for bottom in self.bottoms:
                for shoe in self.footwear:
                    score, reason = self._evaluate_combination(top, bottom, shoe)
                    
                    if score >= 15: # Minimum threshold for a reasonable outfit
                        outfit = {
                            "id": outfit_id_counter,
                            "top": top,
                            "bottom": bottom,
                            "footwear": shoe,
                            "accessories": [],
                            "reason": reason,
                            "recommendation_score": score
                        }
                        
                        # Optionally add an accessory
                        if self.accessories:
                            acc = random.choice(self.accessories)
                            outfit["accessories"].append(acc)
                            
                        outfits.append(outfit)
                        outfit_id_counter += 1

        # Sort by recommendation score descending
        outfits.sort(key=lambda x: x["recommendation_score"], reverse=True)
        
        return {
            "success": True,
            "message": f"Generated {len(outfits)} outfits successfully.",
            "data": {
                "outfits": outfits[:limit]
            }
        }

    def _evaluate_combination(self, top, bottom, shoe):
        score = 50 # Base score for having all parts
        
        # Color harmony
        color_score = calculate_outfit_color_score(top.get('color'), bottom.get('color'), shoe.get('color'))
        score += color_score
        
        # User preferences (colors)
        if self.preferred_colors:
            colors_in_outfit = {normalize_color(top.get('color')), normalize_color(bottom.get('color')), normalize_color(shoe.get('color'))}
            matches = colors_in_outfit.intersection(set(self.preferred_colors))
            score += (len(matches) * 5)
            
        reason = "A well-balanced outfit."
        if color_score >= 25:
            reason = "Excellent color harmony."
        elif color_score >= 15:
            reason = "Good color combination."
            
        if self.preferred_colors and score > 80:
            reason += " Matches your preferred colors!"
            
        return score, reason
