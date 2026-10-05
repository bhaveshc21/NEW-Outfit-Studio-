from recommendation.outfit_generator import OutfitGenerator
from recommendation.occasion_rules import OCCASIONS, get_occasion_score

class ShoppingAssistant:
    def __init__(self, current_wardrobe, profile):
        self.current_wardrobe = current_wardrobe
        self.profile = profile

    def _get_logical_category(self, cat_string):
        cat = str(cat_string).lower()
        if 'shirt' in cat or 'top' in cat or 'blouse' in cat or 't-shirt' in cat: return 'Tops'
        if 'jean' in cat or 'trouser' in cat or 'skirt' in cat or 'bottom' in cat or 'short' in cat: return 'Bottoms'
        if 'jacket' in cat or 'blazer' in cat or 'coat' in cat or 'outerwear' in cat or 'sweater' in cat: return 'Outerwear'
        if 'sneaker' in cat or 'shoe' in cat or 'footwear' in cat or 'boot' in cat: return 'Footwear'
        if 'watch' in cat or 'bag' in cat or 'accessory' in cat or 'accessories' in cat or 'tie' in cat or 'belt' in cat: return 'Accessories'
        return 'Other'

    def analyze_item(self, new_item):
        """
        Analyzes how well a new item fits into the current wardrobe.
        new_item should be a dictionary similar to a wardrobe item, e.g.,
        {'id': -1, 'category': 'Shirt', 'color': 'Red'}
        """
        # Inject the new item into a copy of the wardrobe
        simulated_wardrobe = self.current_wardrobe.copy()
        new_item['id'] = -999 # Use a special ID to track it
        simulated_wardrobe.append(new_item)

        # Generate outfits with the simulated wardrobe
        generator = OutfitGenerator(simulated_wardrobe, self.profile)
        
        # We don't filter by occasion or weather to see maximum potential
        result = generator.generate_outfits(limit=50) # generate more to filter down
        
        if not result["success"]:
            # This means not enough items overall (e.g. no bottoms in wardrobe)
            return {
                "compatibility_score": 0,
                "verdict": "Think Twice. You don't have enough wardrobe items to form outfits yet.",
                "outfits": [],
                "purchase_utility": self._get_empty_utility(new_item)
            }

        all_outfits = result["data"]["outfits"]
        
        # Filter outfits that actually include the new item
        matching_outfits = []
        for outfit in all_outfits:
            includes_new_item = False
            for key in ['top', 'bottom', 'footwear']:
                if outfit.get(key) and outfit[key].get('id') == -999:
                    includes_new_item = True
                    break
                    
            if not includes_new_item:
                for acc in outfit.get('accessories', []):
                    if acc.get('id') == -999:
                        includes_new_item = True
                        break
                        
            if includes_new_item:
                matching_outfits.append(outfit)
                
        # Check if a highly similar item already exists in the wardrobe
        duplicate_exists = False
        new_cat = str(new_item.get('category', '')).lower()
        new_color = str(new_item.get('color', '')).lower()
        
        if new_cat and new_color and new_cat != "unknown" and new_color != "unknown":
            for item in self.current_wardrobe:
                item_cat = str(item.get('category', '')).lower()
                item_color = str(item.get('color', '')).lower()
                if item_cat == new_cat and item_color == new_color:
                    duplicate_exists = True
                    break

        # Calculate score and verdict
        # If we can form at least 3 high-scoring outfits (e.g., score >= 50), it's very compatible.
        
        good_outfits_count = sum(1 for o in matching_outfits if o['recommendation_score'] >= 50)
        
        # Basic heuristic for compatibility score (0-100)
        # Max score if you can form 5+ good outfits.
        compatibility_score = min(100, int((good_outfits_count / 5.0) * 100))
        
        if duplicate_exists:
            # Heavily penalize the purchase if they already own it
            compatibility_score = min(compatibility_score, 15) 
            verdict = "Similar clothing already exists in your wardrobe and hence you should not consider buying it."
        else:
            if compatibility_score >= 80:
                verdict = "Must Buy! Matches perfectly with your wardrobe."
            elif compatibility_score >= 50:
                verdict = "Good Addition. Fits well with some items."
            else:
                verdict = "Think Twice. Hard to style with your current closet."

        # ----- PURCHASE UTILITY ANALYSIS -----
        
        compatible_items_set = {}
        category_support = {'Tops': 0, 'Bottoms': 0, 'Outerwear': 0, 'Footwear': 0, 'Accessories': 0}
        
        for outfit in matching_outfits:
            for key in ['top', 'bottom', 'footwear', 'outerwear']:
                item = outfit.get(key)
                if item and item.get('id') != -999:
                    cid = item['id']
                    if cid not in compatible_items_set:
                        compatible_items_set[cid] = item
                        log_cat = self._get_logical_category(item.get('category', ''))
                        if log_cat in category_support:
                            category_support[log_cat] += 1
                            
            for acc in outfit.get('accessories', []):
                if acc.get('id') != -999:
                    cid = acc['id']
                    if cid not in compatible_items_set:
                        compatible_items_set[cid] = acc
                        category_support['Accessories'] += 1

        supported_occasions = []
        for occasion in OCCASIONS:
            score, is_invalid = get_occasion_score(new_item, occasion)
            if score >= 50 and not is_invalid:
                supported_occasions.append(occasion)
                
        # Wardrobe gap
        new_item_log_cat = self._get_logical_category(new_item.get('category', ''))
        existing_log_cats = [self._get_logical_category(i.get('category', '')) for i in self.current_wardrobe]
        has_gap = False
        gap_type = ""
        gap_message = ""
        
        if new_item_log_cat != 'Other' and existing_log_cats.count(new_item_log_cat) < 2:
            has_gap = True
            gap_type = "category"
            gap_message = f"This item adds a {new_item_log_cat} category that is currently limited in your wardrobe."
        else:
            existing_colors = [str(i.get('color', '')).lower() for i in self.current_wardrobe]
            if new_color and new_color != "unknown" and existing_colors.count(new_color) == 0:
                has_gap = True
                gap_type = "color"
                gap_message = f"This introduces a {new_color.capitalize()} color that is currently less represented in your wardrobe."

        reasons = []
        if len(compatible_items_set) > 0:
            reasons.append(f"Works with {len(compatible_items_set)} items already in your wardrobe.")
        if len(matching_outfits) > 0:
            reasons.append(f"It can participate in {len(matching_outfits)} valid outfit combinations.")
        if len(supported_occasions) > 0:
            oc_list = ", ".join(supported_occasions)
            reasons.append(f"It can be used for {oc_list} outfits.")
        if has_gap:
            reasons.append(gap_message)
            
        summary = ""
        if len(matching_outfits) > 0:
            summary = "This item works with several existing wardrobe pieces and creates multiple outfit possibilities."
        else:
            summary = "This item does not seem to pair well with your existing wardrobe based on current styling rules."

        purchase_utility = {
            "candidate_item": {
                "category": new_item.get('category', ''),
                "color": new_item.get('color', ''),
                "image_path": new_item.get('image_path', '')
            },
            "compatibility": {
                "compatible_item_count": len(compatible_items_set),
                "compatible_items": list(compatible_items_set.values())
            },
            "outfit_utility": {
                "valid_combination_count": len(matching_outfits),
                "summary": f"This item can participate in {len(matching_outfits)} complete outfits.",
                "category_support": category_support
            },
            "occasion_utility": {
                "supported_occasions": supported_occasions
            },
            "wardrobe_gap": {
                "has_gap": has_gap,
                "type": gap_type,
                "message": gap_message
            },
            "explanation": {
                "summary": summary,
                "reasons": reasons
            },
            "example_outfits": matching_outfits[:5],
            "duplicate_exists": duplicate_exists
        }

        return {
            "compatibility_score": compatibility_score,
            "verdict": verdict,
            "outfits": matching_outfits[:3], # Return top 3 combinations
            "purchase_utility": purchase_utility
        }

    def _get_empty_utility(self, new_item):
        return {
            "candidate_item": {
                "category": new_item.get('category', ''),
                "color": new_item.get('color', ''),
                "image_path": new_item.get('image_path', '')
            },
            "compatibility": {
                "compatible_item_count": 0,
                "compatible_items": []
            },
            "outfit_utility": {
                "valid_combination_count": 0,
                "summary": "There are not enough existing wardrobe items to calculate outfit utility yet.",
                "category_support": {'Tops': 0, 'Bottoms': 0, 'Outerwear': 0, 'Footwear': 0, 'Accessories': 0}
            },
            "occasion_utility": {
                "supported_occasions": []
            },
            "wardrobe_gap": {
                "has_gap": False,
                "type": "",
                "message": ""
            },
            "explanation": {
                "summary": "Cannot determine utility due to empty wardrobe.",
                "reasons": []
            },
            "example_outfits": [],
            "duplicate_exists": False
        }
