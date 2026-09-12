import unittest
from recommendation.outfit_score import evaluate_outfit

class TestOutfitScore(unittest.TestCase):

    def setUp(self):
        self.perfect_outfit = {
            "top": {"id": 1, "category": "Casual Shirt", "color": "white"},
            "bottom": {"id": 2, "category": "Jeans", "color": "blue"},
            "footwear": {"id": 3, "category": "Sneakers", "color": "white"},
            "accessories": [{"id": 4, "category": "Watch", "color": "silver"}]
        }
        
        self.bad_color_outfit = {
            "top": {"id": 1, "category": "Casual Shirt", "color": "red"},
            "bottom": {"id": 2, "category": "Jeans", "color": "green"}, # Clash
            "footwear": {"id": 3, "category": "Sneakers", "color": "yellow"}, # Clash
            "accessories": [{"id": 4, "category": "Watch", "color": "silver"}]
        }

        self.formal_outfit = {
            "top": {"id": 1, "category": "Formal Shirt", "color": "white"},
            "bottom": {"id": 2, "category": "Formal Trousers", "color": "black"},
            "footwear": {"id": 3, "category": "Formal Shoes", "color": "black"},
            "accessories": [{"id": 4, "category": "Tie", "color": "red"}]
        }
        
        self.bad_combo = {
            "top": {"id": 1, "category": "Formal Shirt", "color": "white"},
            "bottom": {"id": 2, "category": "Sports Shorts", "color": "black"},
            "footwear": {"id": 3, "category": "Formal Shoes", "color": "black"}
        }

    def test_missing_items(self):
        res = evaluate_outfit({"top": {"id": 1}, "bottom": {"id": 2}})
        self.assertFalse(res.get("success"))
        self.assertIn("complete outfit must have", res.get("message"))

    def test_perfect_outfit_no_context(self):
        res = evaluate_outfit(self.perfect_outfit)
        self.assertTrue(res.get("success"))
        self.assertGreaterEqual(res.get("fashion_score"), 80) # Very Good or Excellent
        
    def test_bad_color(self):
        res = evaluate_outfit(self.bad_color_outfit)
        self.assertTrue(res.get("success"))
        
        color_factor = res["factors"]["color_coordination"]
        self.assertEqual(color_factor["status"], "NEEDS_IMPROVEMENT")
        self.assertLess(color_factor["score"], 10)
        
    def test_wrong_occasion(self):
        res = evaluate_outfit(self.perfect_outfit, occasion="Wedding")
        self.assertTrue(res.get("success"))
        
        occ_factor = res["factors"]["occasion"]
        self.assertEqual(occ_factor["status"], "NEEDS_IMPROVEMENT")
        
    def test_good_occasion(self):
        res = evaluate_outfit(self.formal_outfit, occasion="Interview")
        self.assertTrue(res.get("success"))
        
        occ_factor = res["factors"]["occasion"]
        self.assertEqual(occ_factor["status"], "PASS")

    def test_wrong_weather(self):
        # Hot weather with formal suit components
        weather_data = {"temperature": 35, "condition": "Clear"}
        res = evaluate_outfit(self.formal_outfit, weather_data=weather_data)
        
        # Formal usually doesn't have "jacket" in the category string for top in our simple test,
        # but let's change top to winter jacket to test weather specifically.
        winter_outfit = {
            "top": {"id": 1, "category": "Winter Jacket", "color": "black"},
            "bottom": {"id": 2, "category": "Jeans", "color": "blue"},
            "footwear": {"id": 3, "category": "Boots", "color": "black"}
        }
        res2 = evaluate_outfit(winter_outfit, weather_data=weather_data)
        self.assertEqual(res2["factors"]["weather"]["status"], "NEEDS_IMPROVEMENT")

    def test_bad_combination(self):
        res = evaluate_outfit(self.bad_combo)
        self.assertEqual(res["factors"]["combination"]["status"], "NEEDS_IMPROVEMENT")

    def test_missing_accessory(self):
        # formal_outfit without accessories
        no_acc = {k: v for k, v in self.formal_outfit.items() if k != "accessories"}
        res = evaluate_outfit(no_acc)
        self.assertEqual(res["factors"]["accessories"]["status"], "NEEDS_IMPROVEMENT")
        self.assertIn("accessory could complete", res["factors"]["accessories"]["reason"])

if __name__ == '__main__':
    unittest.main()
