package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class WeatherData {
    @SerializedName("temperature")
    private int temperature;
    
    @SerializedName("condition")
    private String condition;
    
    @SerializedName("location")
    private String location;

    public int getTemperature() {
        return temperature;
    }

    public void setTemperature(int temperature) {
        this.temperature = temperature;
    }

    public String getCondition() {
        return condition;
    }

    public void setCondition(String condition) {
        this.condition = condition;
    }

    public String getLocation() {
        return location;
    }

    public void setLocation(String location) {
        this.location = location;
    }
}
