package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class ClosetStatisticsData {
    
    @SerializedName("total_items")
    private int totalItems;

    @SerializedName("category_distribution")
    private List<CategoryStatistic> categoryDistribution;

    @SerializedName("color_distribution")
    private List<ColorStatistic> colorDistribution;

    @SerializedName("usage")
    private UsageStatistics usage;

    @SerializedName("saved_outfits")
    private SavedOutfitStatistics savedOutfits;

    @SerializedName("wardrobe_gaps")
    private WardrobeGapStatistics wardrobeGaps;

    @SerializedName("insights")
    private List<String> insights;

    public int getTotalItems() {
        return totalItems;
    }

    public List<CategoryStatistic> getCategoryDistribution() {
        return categoryDistribution;
    }

    public List<ColorStatistic> getColorDistribution() {
        return colorDistribution;
    }

    public UsageStatistics getUsage() {
        return usage;
    }

    public SavedOutfitStatistics getSavedOutfits() {
        return savedOutfits;
    }

    public WardrobeGapStatistics getWardrobeGaps() {
        return wardrobeGaps;
    }

    public List<String> getInsights() {
        return insights;
    }
}
