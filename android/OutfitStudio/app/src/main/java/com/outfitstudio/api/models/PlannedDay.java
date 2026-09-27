package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class PlannedDay {
    @SerializedName("date")
    private String date;
    
    @SerializedName("day")
    private String day;
    
    @SerializedName("occasion")
    private String occasion;
    
    @SerializedName("occasion_source")
    private String occasionSource;
    
    @SerializedName("weather")
    private WeatherData weather;
    
    @SerializedName("outfit")
    private GeneratedOutfit outfit;
    
    @SerializedName("fashion_score")
    private double fashionScore;
    
    @SerializedName("locked")
    private boolean locked;
    
    @SerializedName("reason")
    private String reason;
    
    public String getDate() { return date; }
    public String getDay() { return day; }
    public String getOccasion() { return occasion; }
    public String getOccasionSource() { return occasionSource; }
    public WeatherData getWeather() { return weather; }
    public GeneratedOutfit getOutfit() { return outfit; }
    public double getFashionScore() { return fashionScore; }
    public boolean isLocked() { return locked; }
    public void setLocked(boolean locked) { this.locked = locked; }
    public String getReason() { return reason; }
    
    public static class WeatherData {
        @SerializedName("temperature")
        private int temperature;
        
        @SerializedName("condition")
        private String condition;
        
        @SerializedName("location")
        private String location;
        
        public int getTemperature() { return temperature; }
        public String getCondition() { return condition; }
        public String getLocation() { return location; }
    }
}
