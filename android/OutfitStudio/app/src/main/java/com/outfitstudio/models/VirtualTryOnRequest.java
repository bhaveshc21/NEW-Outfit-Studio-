package com.outfitstudio.models;

import com.google.gson.annotations.SerializedName;

public class VirtualTryOnRequest {
    @SerializedName("outfit_data")
    private Object outfitData;

    public VirtualTryOnRequest(Object outfitData) {
        this.outfitData = outfitData;
    }

    public Object getOutfitData() {
        return outfitData;
    }
}
