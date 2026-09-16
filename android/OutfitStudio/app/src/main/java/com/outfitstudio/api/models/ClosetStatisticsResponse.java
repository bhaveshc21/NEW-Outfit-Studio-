package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class ClosetStatisticsResponse {
    
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private ClosetStatisticsData data;

    public boolean isSuccess() {
        return success;
    }

    public String getMessage() {
        return message;
    }

    public ClosetStatisticsData getData() {
        return data;
    }
}
