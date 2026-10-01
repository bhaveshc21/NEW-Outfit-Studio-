package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class DashboardResponse {
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private DashboardData data;

    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public DashboardData getData() { return data; }

    public static class DashboardData {
        @SerializedName("user")
        private User user;

        @SerializedName("wardrobe")
        private Wardrobe wardrobe;

        @SerializedName("statistics")
        private Statistics statistics;

        @SerializedName("feature_status")
        private FeatureStatus featureStatus;

        @SerializedName("recent_outfits")
        private List<GeneratedOutfit> recentOutfits;

        public User getUser() { return user; }
        public Wardrobe getWardrobe() { return wardrobe; }
        public Statistics getStatistics() { return statistics; }
        public FeatureStatus getFeatureStatus() { return featureStatus; }
        public List<GeneratedOutfit> getRecentOutfits() { return recentOutfits; }
    }

    public static class User {
        @SerializedName("id")
        private int id;

        @SerializedName("name")
        private String name;
        
        @SerializedName("profile_image")
        private String profileImage;

        public int getId() { return id; }
        public String getName() { return name; }
        public String getProfileImage() { return profileImage; }
    }

    public static class Wardrobe {
        @SerializedName("total_items")
        private int totalItems;

        public int getTotalItems() { return totalItems; }
    }

    public static class Statistics {
        @SerializedName("available")
        private boolean available;

        public boolean isAvailable() { return available; }
    }

    public static class FeatureStatus {
        @SerializedName("appearance")
        private boolean appearance;
        
        @SerializedName("visualization")
        private boolean visualization;

        public boolean hasAppearance() { return appearance; }
        public boolean hasVisualization() { return visualization; }
    }
}
