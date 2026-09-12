package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class ShoppingSuggestion {
    @SerializedName("item")
    private String item;
    
    @SerializedName("reason")
    private String reason;

    public String getItem() {
        return item;
    }

    public void setItem(String item) {
        this.item = item;
    }

    public String getReason() {
        return reason;
    }

    public void setReason(String reason) {
        this.reason = reason;
    }
}
