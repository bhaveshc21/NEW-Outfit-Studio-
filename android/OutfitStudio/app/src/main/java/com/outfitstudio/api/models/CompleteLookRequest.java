package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class CompleteLookRequest {
    @SerializedName("locked_item_id")
    private int lockedItemId;

    @SerializedName("occasion")
    private String occasion;

    @SerializedName("location")
    private String location;

    public CompleteLookRequest(int lockedItemId) {
        this.lockedItemId = lockedItemId;
    }

    public void setOccasion(String occasion) {
        this.occasion = occasion;
    }

    public void setLocation(String location) {
        this.location = location;
    }
}
