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
    
    public WardrobeItem(int id, int userId, String name, String category, String color, String imagePath) {
        this.id = id;
        this.userId = userId;
        this.name = name;
        this.category = category;
        this.color = color;
        this.imagePath = imagePath;
    }
    
    public int getId() { return id; }
    public int getUserId() { return userId; }
    public String getName() { return name; }
    public String getCategory() { return category; }
    public String getColor() { return color; }
    public String getImagePath() { return imagePath; }
}
