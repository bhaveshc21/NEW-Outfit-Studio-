package com.outfitstudio.api.models;

import com.google.gson.annotations.SerializedName;
import java.util.List;

public class WeeklyPlanResponse {
    @SerializedName("success")
    private boolean success;
    
    @SerializedName("message")
    private String message;
    
    @SerializedName("data")
    private WeeklyPlanData data;
    
    public boolean isSuccess() { return success; }
    public String getMessage() { return message; }
    public WeeklyPlanData getData() { return data; }
    
    public static class WeeklyPlanData {
        @SerializedName("week_start")
        private String weekStart;
        
        @SerializedName("week_end")
        private String weekEnd;
        
        @SerializedName("days")
        private List<PlannedDay> days;
        
        public String getWeekStart() { return weekStart; }
        public String getWeekEnd() { return weekEnd; }
        public List<PlannedDay> getDays() { return days; }
    }
}
