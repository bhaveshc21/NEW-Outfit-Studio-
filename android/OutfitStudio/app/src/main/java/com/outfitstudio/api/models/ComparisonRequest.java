package com.outfitstudio.api.models;

import java.util.List;

public class ComparisonRequest {
    private List<GeneratedOutfit> outfits;
    private String occasion;
    private WeatherData weather;

    public ComparisonRequest(List<GeneratedOutfit> outfits, String occasion, WeatherData weather) {
        this.outfits = outfits;
        this.occasion = occasion;
        this.weather = weather;
    }

    public List<GeneratedOutfit> getOutfits() { return outfits; }
    public void setOutfits(List<GeneratedOutfit> outfits) { this.outfits = outfits; }

    public String getOccasion() { return occasion; }
    public void setOccasion(String occasion) { this.occasion = occasion; }

    public WeatherData getWeather() { return weather; }
    public void setWeather(WeatherData weather) { this.weather = weather; }
}
