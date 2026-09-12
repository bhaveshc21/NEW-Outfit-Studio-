package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class OutfitResponse {
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private Data data;

    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public Data getData() { return data; }

    public static class Data {
        @SerializedName("occasion")
        private String occasion;
        
        @SerializedName("weather")
        private WeatherData weather;

        @SerializedName("outfits")
        private List<GeneratedOutfit> outfits;
        
        @SerializedName("shopping_suggestions")
        private List<ShoppingSuggestion> shoppingSuggestions;

        public String getOccasion() { return occasion; }
        public WeatherData getWeather() { return weather; }
        public List<GeneratedOutfit> getOutfits() { return outfits; }
        public List<ShoppingSuggestion> getShoppingSuggestions() { return shoppingSuggestions; }
    }
}
