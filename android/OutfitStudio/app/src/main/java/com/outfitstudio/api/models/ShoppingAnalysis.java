package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

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
}
