package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class SavedOutfitStatistics {
    @SerializedName("available")
    private boolean available;

    @SerializedName("count")
    private int count;

    @SerializedName("message")
    private String message;

    public boolean isAvailable() {
        return available;
    }

    public int getCount() {
        return count;
    }

    public String getMessage() {
        return message;
    }
}
