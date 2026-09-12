package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class FashionScoreRequest {

    @SerializedName("outfit")
    private OutfitIds outfit;

    @SerializedName("occasion")
    private String occasion;

    @SerializedName("location")
    private String location;

    public FashionScoreRequest(OutfitIds outfit, String occasion, String location) {
        this.outfit = outfit;
        this.occasion = occasion;
        this.location = location;
    }

    public OutfitIds getOutfit() { return outfit; }
    public void setOutfit(OutfitIds outfit) { this.outfit = outfit; }
    public String getOccasion() { return occasion; }
    public void setOccasion(String occasion) { this.occasion = occasion; }
    public String getLocation() { return location; }
    public void setLocation(String location) { this.location = location; }

    public static class OutfitIds {
        @SerializedName("top_id")
        private Integer topId;

        @SerializedName("bottom_id")
        private Integer bottomId;

        @SerializedName("footwear_id")
        private Integer footwearId;

        @SerializedName("accessory_ids")
        private List<Integer> accessoryIds;

        public OutfitIds(Integer topId, Integer bottomId, Integer footwearId, List<Integer> accessoryIds) {
            this.topId = topId;
            this.bottomId = bottomId;
            this.footwearId = footwearId;
            this.accessoryIds = accessoryIds;
        }

        public Integer getTopId() { return topId; }
        public Integer getBottomId() { return bottomId; }
        public Integer getFootwearId() { return footwearId; }
        public List<Integer> getAccessoryIds() { return accessoryIds; }
    }
}
