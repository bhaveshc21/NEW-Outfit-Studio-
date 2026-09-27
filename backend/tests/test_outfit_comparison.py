import pytest
from unittest.mock import MagicMock
from services.outfit_comparison_service import OutfitComparisonService

class TestOutfitComparisonService:
    def test_compare_outfits_success(self):
        # Mock DB connection and cursor
        db_mock = MagicMock()
        cursor_mock = MagicMock()
        db_mock.cursor.return_value = cursor_mock
        
        # Mock DB returns 2 items when queried
        cursor_mock.fetchall.return_value = [
            {"id": 1, "name": "Shirt", "category": "Tops", "color": "White", "image_path": "a.jpg"},
            {"id": 2, "name": "Jeans", "category": "Bottoms", "color": "Blue", "image_path": "b.jpg"},
            {"id": 3, "name": "Sneakers", "category": "Footwear", "color": "White", "image_path": "c.jpg"},
            {"id": 4, "name": "Black Shirt", "category": "Tops", "color": "Black", "image_path": "d.jpg"}
        ]
        
        service = OutfitComparisonService(db_mock)
        
        data = {
            "outfits": [
                {
                    "id": "Outfit 1",
                    "top_id": 1,
                    "bottom_id": 2,
                    "footwear_id": 3
                },
                {
                    "id": "Outfit 2",
                    "top_id": 4,
                    "bottom_id": 2,
                    "footwear_id": 3
                }
            ],
            "occasion": "Casual",
            "weather": {"temperature": 25, "condition": "Clear"}
        }
        
        user_id = 1
        result = service.compare_outfits(user_id, data)
        
        assert result["success"] is True
        assert "data" in result
        assert len(result["data"]["outfits"]) == 2
        
        outfit1 = result["data"]["outfits"][0]
        assert outfit1["id"] == "Outfit 1"
        assert "fashion_score" in outfit1
        assert "items" in outfit1

    def test_compare_less_than_two_outfits(self):
        db_mock = MagicMock()
        service = OutfitComparisonService(db_mock)
        
        data = {
            "outfits": [{"top_id": 1, "footwear_id": 3}]
        }
        
        result = service.compare_outfits(1, data)
        assert result["success"] is False
        assert "at least two outfits" in result["message"]

    def test_compare_invalid_outfit_missing_items(self):
        db_mock = MagicMock()
        service = OutfitComparisonService(db_mock)
        
        data = {
            "outfits": [
                {"bottom_id": 2}, # missing top and footwear
                {"top_id": 1, "footwear_id": 3}
            ]
        }
        
        result = service.compare_outfits(1, data)
        assert result["success"] is False
        assert "must have at least a top/dress and footwear" in result["message"]

    def test_compare_unauthorized_items(self):
        db_mock = MagicMock()
        cursor_mock = MagicMock()
        db_mock.cursor.return_value = cursor_mock
        
        # DB returns fewer items than requested (simulating unauthorized/missing)
        cursor_mock.fetchall.return_value = [
            {"id": 1, "name": "Shirt"}
        ]
        
        service = OutfitComparisonService(db_mock)
        data = {
            "outfits": [
                {"top_id": 1, "bottom_id": 2, "footwear_id": 3},
                {"top_id": 4, "bottom_id": 2, "footwear_id": 3}
            ]
        }
        
        result = service.compare_outfits(1, data)
        assert result["success"] is False
        assert "invalid or do not belong to you" in result["message"]
