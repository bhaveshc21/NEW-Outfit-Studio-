package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class PlannedDayResponse {
    @SerializedName("success")
    private boolean success;
    
    @SerializedName("message")
    private String message;
    
    @SerializedName("data")
    private PlannedDay data;
    
    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public PlannedDay getData() { return data; }
}
