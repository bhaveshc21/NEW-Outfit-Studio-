package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;
import java.util.Map;

public class ShoppingAnalysis {
    @SerializedName("compatibility_score")
    private int compatibilityScore;

    @SerializedName("verdict")
    private String verdict;

    @SerializedName("outfits")
    private List<GeneratedOutfit> outfits;
    
    @SerializedName("detected_category")
    private String detectedCategory;
    
    @SerializedName("detected_color")
    private String detectedColor;
    
    @SerializedName("image_path")
    private String imagePath;
    
    @SerializedName("purchase_utility")
    private PurchaseUtility purchaseUtility;

    public int getCompatibilityScore() {
        return compatibilityScore;
    }

    public String getVerdict() {
        return verdict;
    }

    public List<GeneratedOutfit> getOutfits() {
        return outfits;
    }
    
    public String getDetectedCategory() { return detectedCategory; }
    
    public String getDetectedColor() { return detectedColor; }
    
    public String getImagePath() { return imagePath; }
    
    public PurchaseUtility getPurchaseUtility() { return purchaseUtility; }

    public static class PurchaseUtility {
        @SerializedName("candidate_item")
        private CandidateItem candidateItem;
        
        @SerializedName("compatibility")
        private Compatibility compatibility;
        
        @SerializedName("outfit_utility")
        private OutfitUtility outfitUtility;
        
        @SerializedName("occasion_utility")
        private OccasionUtility occasionUtility;
        
        @SerializedName("wardrobe_gap")
        private WardrobeGap wardrobeGap;
        
        @SerializedName("explanation")
        private Explanation explanation;
        
        @SerializedName("example_outfits")
        private List<GeneratedOutfit> exampleOutfits;
        
        @SerializedName("duplicate_exists")
        private boolean duplicateExists;

        public CandidateItem getCandidateItem() { return candidateItem; }
        public Compatibility getCompatibility() { return compatibility; }
        public OutfitUtility getOutfitUtility() { return outfitUtility; }
        public OccasionUtility getOccasionUtility() { return occasionUtility; }
        public WardrobeGap getWardrobeGap() { return wardrobeGap; }
        public Explanation getExplanation() { return explanation; }
        public List<GeneratedOutfit> getExampleOutfits() { return exampleOutfits; }
        public boolean isDuplicateExists() { return duplicateExists; }
    }

    public static class CandidateItem {
        @SerializedName("category")
        private String category;
        @SerializedName("color")
        private String color;
        @SerializedName("image_path")
        private String imagePath;

        public String getCategory() { return category; }
        public String getColor() { return color; }
        public String getImagePath() { return imagePath; }
    }

    public static class Compatibility {
        @SerializedName("compatible_item_count")
        private int compatibleItemCount;
        @SerializedName("compatible_items")
        private List<WardrobeItem> compatibleItems;

        public int getCompatibleItemCount() { return compatibleItemCount; }
        public List<WardrobeItem> getCompatibleItems() { return compatibleItems; }
    }

    public static class OutfitUtility {
        @SerializedName("valid_combination_count")
        private int validCombinationCount;
        @SerializedName("summary")
        private String summary;
        @SerializedName("category_support")
        private Map<String, Integer> categorySupport;

        public int getValidCombinationCount() { return validCombinationCount; }
        public String getSummary() { return summary; }
        public Map<String, Integer> getCategorySupport() { return categorySupport; }
    }

    public static class OccasionUtility {
        @SerializedName("supported_occasions")
        private List<String> supportedOccasions;

        public List<String> getSupportedOccasions() { return supportedOccasions; }
    }

    public static class WardrobeGap {
        @SerializedName("has_gap")
        private boolean hasGap;
        @SerializedName("type")
        private String type;
        @SerializedName("message")
        private String message;

        public boolean hasGap() { return hasGap; }
        public String getType() { return type; }
        public String getMessage() { return message; }
    }

    public static class Explanation {
        @SerializedName("summary")
        private String summary;
        @SerializedName("reasons")
        private List<String> reasons;

        public String getSummary() { return summary; }
        public List<String> getReasons() { return reasons; }
    }
}
