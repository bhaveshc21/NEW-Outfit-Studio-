package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;

public class ColorStatistic {
    @SerializedName("name")
    private String name;

    @SerializedName("count")
    private int count;

    @SerializedName("percentage")
    private double percentage;

    public String getName() {
        return name;
    }

    public int getCount() {
        return count;
    }

    public double getPercentage() {
        return percentage;
    }
}
