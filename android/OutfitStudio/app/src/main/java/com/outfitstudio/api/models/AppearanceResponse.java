package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class AppearanceResponse {
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private AppearanceData data;

    public boolean isSuccess() {
        return success;
    }

    public String getMessage() {
        return message;
    }

    public AppearanceData getData() {
        return data;
    }

    public static class AppearanceData {
        @SerializedName("face_shape")
        private String faceShape;

        @SerializedName("skin_tone")
        private String skinTone;

        @SerializedName("body_type")
        private String bodyType;

        public String getFaceShape() {
            return faceShape;
        }

        public String getSkinTone() {
            return skinTone;
        }

        public String getBodyType() {
            return bodyType;
        }
    }
}
