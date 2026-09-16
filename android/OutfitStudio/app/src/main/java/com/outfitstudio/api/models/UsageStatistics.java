package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class UsageStatistics {
    @SerializedName("available")
    private boolean available;

    @SerializedName("message")
    private String message;

    public boolean isAvailable() {
        return available;
    }

    public String getMessage() {
        return message;
    }
}
