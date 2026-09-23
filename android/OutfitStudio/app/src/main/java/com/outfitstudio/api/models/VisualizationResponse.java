package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class VisualizationResponse {
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private VisualizationData data;

    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public VisualizationData getData() { return data; }

    public static class VisualizationData {
        @SerializedName("profile")
        private ProfileData profile;

        @SerializedName("outfit")
        private OutfitData outfit;

        public ProfileData getProfile() { return profile; }
        public OutfitData getOutfit() { return outfit; }
    }

    public static class ProfileData {
        @SerializedName("height")
        private float height;

        @SerializedName("gender")
        private String gender;

        @SerializedName("body_type")
        private String bodyType;

        @SerializedName("skin_tone")
        private String skinTone;

        public float getHeight() { return height; }
        public String getGender() { return gender; }
        public String getBodyType() { return bodyType; }
        public String getSkinTone() { return skinTone; }
    }

    public static class OutfitData {
        @SerializedName("top")
        private ItemData top;

        @SerializedName("bottom")
        private ItemData bottom;

        @SerializedName("footwear")
        private ItemData footwear;

        public ItemData getTop() { return top; }
        public ItemData getBottom() { return bottom; }
        public ItemData getFootwear() { return footwear; }
    }

    public static class ItemData {
        @SerializedName("id")
        private int id;

        @SerializedName("name")
        private String name;

        @SerializedName("model_key")
        private String modelKey;

        @SerializedName("image_url")
        private String imageUrl;

        @SerializedName("model_3d_url")
        private String model3dUrl;

        public int getId() { return id; }
        public String getName() { return name; }
        public String getModelKey() { return modelKey; }
        public String getImageUrl() { return imageUrl; }
        public String getModel3dUrl() { return model3dUrl; }
    }
}
