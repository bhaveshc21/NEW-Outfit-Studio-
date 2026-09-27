package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class CompleteLookResponse {
    @SerializedName("success")
    private boolean success;

    @SerializedName("message")
    private String message;

    @SerializedName("data")
    private CompleteLookData data;

    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public CompleteLookData getData() { return data; }

    public static class CompleteLookData {
        @SerializedName("locked_item")
        private WardrobeItem lockedItem;

        @SerializedName("missing_components")
        private List<String> missingComponents;

        @SerializedName("looks")
        private List<GeneratedOutfit> looks;

        public WardrobeItem getLockedItem() { return lockedItem; }
        public List<String> getMissingComponents() { return missingComponents; }
        public List<GeneratedOutfit> getLooks() { return looks; }
    }
}
