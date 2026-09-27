package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class ExplanationRequest {

    @SerializedName("outfit")
    private GeneratedOutfit outfit;
    
    @SerializedName("occasion")
    private String occasion;
    
    @SerializedName("location")
    private String location;

    public ExplanationRequest(GeneratedOutfit outfit, String occasion, String location) {
        this.outfit = outfit;
        this.occasion = occasion;
        this.location = location;
    }

    public GeneratedOutfit getOutfit() { return outfit; }
    public void setOutfit(GeneratedOutfit outfit) { this.outfit = outfit; }
    
    public String getOccasion() { return occasion; }
    public void setOccasion(String occasion) { this.occasion = occasion; }
    
    public String getLocation() { return location; }
    public void setLocation(String location) { this.location = location; }
}
