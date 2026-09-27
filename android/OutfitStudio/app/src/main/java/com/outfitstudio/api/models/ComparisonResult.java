package com.outfitstudio.api.models;

public class ComparisonResult {
    private int outfit_index;
    private float fashion_score;
    private String rating;
    private java.util.Map<String, String> factors;

    public int getOutfitIndex() { return outfit_index; }
    public void setOutfitIndex(int outfit_index) { this.outfit_index = outfit_index; }

    public float getFashionScore() { return fashion_score; }
    public void setFashionScore(float fashion_score) { this.fashion_score = fashion_score; }

    public String getRating() { return rating; }
    public void setRating(String rating) { this.rating = rating; }

    public java.util.Map<String, String> getFactors() { return factors; }
    public void setFactors(java.util.Map<String, String> factors) { this.factors = factors; }
}
