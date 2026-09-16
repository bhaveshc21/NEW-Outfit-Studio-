from recommendation.outfit_generator import OutfitGenerator

class ShoppingAssistant:
    def __init__(self, current_wardrobe, profile):
        self.current_wardrobe = current_wardrobe
        self.profile = profile

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
                "outfits": []
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

        # Calculate score and verdict
        # If we can form at least 3 high-scoring outfits (e.g., score >= 50), it's very compatible.
        
        good_outfits_count = sum(1 for o in matching_outfits if o['recommendation_score'] >= 50)
        
        # Basic heuristic for compatibility score (0-100)
        # Max score if you can form 5+ good outfits.
        compatibility_score = min(100, int((good_outfits_count / 5.0) * 100))
        
        if compatibility_score >= 80:
            verdict = "Must Buy! Matches perfectly with your wardrobe."
        elif compatibility_score >= 50:
            verdict = "Good Addition. Fits well with some items."
        else:
            verdict = "Think Twice. Hard to style with your current closet."

        return {
            "compatibility_score": compatibility_score,
            "verdict": verdict,
            "outfits": matching_outfits[:3] # Return top 3 combinations
        }
