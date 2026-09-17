package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;
import java.util.Map;

public class FashionScoreResponse {

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
        @SerializedName("fashion_score")
        private double fashionScore;

        @SerializedName("rating")
        private String rating;

        @SerializedName("factors")
        private Map<String, FactorEvaluation> factors;

        @SerializedName("current_outfit")
        private GeneratedOutfit currentOutfit;

        @SerializedName("improvement_suggestions")
        private List<String> improvementSuggestions;

        @SerializedName("improved_outfit")
        private GeneratedOutfit improvedOutfit;

        @SerializedName("improved_score")
        private Double improvedScore;

        public double getFashionScore() { return fashionScore; }
        public String getRating() { return rating; }
        public Map<String, FactorEvaluation> getFactors() { return factors; }
        public GeneratedOutfit getCurrentOutfit() { return currentOutfit; }
        public List<String> getImprovementSuggestions() { return improvementSuggestions; }
        public GeneratedOutfit getImprovedOutfit() { return improvedOutfit; }
        public Double getImprovedScore() { return improvedScore; }
    }

    public static class FactorEvaluation {
        @SerializedName("score")
        private double score;

        @SerializedName("max_score")
        private double maxScore;

        @SerializedName("status")
        private String status;

        @SerializedName("label")
        private String label;

        @SerializedName("reason")
        private String reason;

        public double getScore() { return score; }
        public double getMaxScore() { return maxScore; }
        public String getStatus() { return status; }
        public String getLabel() { return label; }
        public String getReason() { return reason; }
    }
}
