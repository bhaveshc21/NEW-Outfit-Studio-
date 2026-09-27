package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;
import java.util.Map;

public class ExplanationResponse {

    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private ExplanationData data;

    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public ExplanationData getData() { return data; }

    public static class ExplanationData {
        @SerializedName("title")
        private String title;

        @SerializedName("summary")
        private String summary;

        @SerializedName("reasons")
        private List<String> reasons;

        @SerializedName("factors")
        private Map<String, ExplanationFactor> factors;

        @SerializedName("fashion_score")
        private Double fashionScore;

        public String getTitle() { return title; }
        public String getSummary() { return summary; }
        public List<String> getReasons() { return reasons; }
        public Map<String, ExplanationFactor> getFactors() { return factors; }
        public Double getFashionScore() { return fashionScore; }
    }

    public static class ExplanationFactor {
        @SerializedName("available")
        private boolean available;

        @SerializedName("status")
        private String status;

        @SerializedName("reason")
        private String reason;

        public boolean isAvailable() { return available; }
        public String getStatus() { return status; }
        public String getReason() { return reason; }
    }
}
