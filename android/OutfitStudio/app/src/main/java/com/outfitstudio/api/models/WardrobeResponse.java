package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class WardrobeResponse {
    @SerializedName("success")
    private boolean success;
    
    @SerializedName("message")
    private String message;
    
    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    
    public static class ListResponse extends WardrobeResponse {
        @SerializedName("data")
        private List<WardrobeItem> dataList;
        
        public List<WardrobeItem> getDataList() { return dataList; }
    }
    
    public static class SingleResponse extends WardrobeResponse {
        @SerializedName("data")
        private WardrobeItem singleData;
        
        public WardrobeItem getSingleData() { return singleData; }
    }
    
    public static class EmptyResponse extends WardrobeResponse {
    }
}
