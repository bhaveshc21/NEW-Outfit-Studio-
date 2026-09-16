package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class WardrobeGapStatistics {
    @SerializedName("critical")
    private List<String> critical;

    @SerializedName("optional")
    private List<String> optional;

    @SerializedName("underrepresented")
    private List<String> underrepresented;

    public List<String> getCritical() {
        return critical;
    }

    public List<String> getOptional() {
        return optional;
    }

    public List<String> getUnderrepresented() {
        return underrepresented;
    }
}
