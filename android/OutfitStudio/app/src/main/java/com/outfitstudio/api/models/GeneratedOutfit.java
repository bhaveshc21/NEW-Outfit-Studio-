package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class GeneratedOutfit {
    @SerializedName("id")
    private int id;

    @SerializedName("top")
    private WardrobeItem top;

    @SerializedName("bottom")
    private WardrobeItem bottom;

    @SerializedName("footwear")
    private WardrobeItem footwear;

    @SerializedName("accessories")
    private List<WardrobeItem> accessories;

    @SerializedName("reason")
    private String reason;

    @SerializedName("recommendation_score")
    private int recommendationScore;

    public int getId() { return id; }
    public WardrobeItem getTop() { return top; }
    public WardrobeItem getBottom() { return bottom; }
    public WardrobeItem getFootwear() { return footwear; }
    public List<WardrobeItem> getAccessories() { return accessories; }
    public String getReason() { return reason; }
    public int getRecommendationScore() { return recommendationScore; }
}
