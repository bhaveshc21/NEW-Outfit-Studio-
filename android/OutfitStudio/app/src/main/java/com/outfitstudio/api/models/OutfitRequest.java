package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class OutfitRequest {
    @SerializedName("occasion")
    private String occasion;
    
    @SerializedName("location")
    private String location;

    public OutfitRequest(String occasion, String location) {
        this.occasion = occasion;
        this.location = location;
    }

    public String getOccasion() {
        return occasion;
    }

    public void setOccasion(String occasion) {
        this.occasion = occasion;
    }

    public String getLocation() {
        return location;
    }

    public void setLocation(String location) {
        this.location = location;
    }
}
