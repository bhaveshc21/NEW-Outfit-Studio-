package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class WardrobeItem {
    @SerializedName("id")
    private int id;
    
    @SerializedName("user_id")
    private int userId;
    
    @SerializedName("name")
    private String name;
    
    @SerializedName("category")
    private String category;
    
    @SerializedName("color")
    private String color;
    
    @SerializedName("image_path")
    private String imagePath;
    
    @SerializedName("model_3d_url")
    private String model3dUrl;
    
    @SerializedName("usage_count")
    private int usageCount;
    
    @SerializedName("last_worn_at")
    private String lastWornAt;
    
    @SerializedName("days_since_last_worn")
    private Integer daysSinceLastWorn;
    
    @SerializedName("usage_status")
    private String usageStatus;
    
    @SerializedName("is_rarely_used")
    private boolean rarelyUsed;
    
    public WardrobeItem(int id, int userId, String name, String category, String color, String imagePath, String model3dUrl) {
        this.id = id;
        this.userId = userId;
        this.name = name;
        this.category = category;
        this.color = color;
        this.imagePath = imagePath;
        this.model3dUrl = model3dUrl;
    }
    
    public int getId() { return id; }
    public int getUserId() { return userId; }
    public String getName() { return name; }
    public String getCategory() { return category; }
    public String getColor() { return color; }
    public String getImagePath() { return imagePath; }
    public String getModel3dUrl() { return model3dUrl; }
    public int getUsageCount() { return usageCount; }
    public String getLastWornAt() { return lastWornAt; }
    public Integer getDaysSinceLastWorn() { return daysSinceLastWorn; }
    public String getUsageStatus() { return usageStatus; }
    public boolean isRarelyUsed() { return rarelyUsed; }
}
