package com.outfitstudio.api;

import com.outfitstudio.api.models.WeeklyPlanResponse;
import com.outfitstudio.api.models.PlannedDayResponse;
import com.google.gson.JsonObject;
import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface PlannerApiService {
    
    @POST("planner/generate")
    Call<WeeklyPlanResponse> generateWeeklyPlan(@Body JsonObject body);
    
    @POST("planner/day/{date}/regenerate")
    Call<PlannedDayResponse> regenerateDay(@Path("date") String date, @Body JsonObject body);
    
    @POST("planner/day/{date}/lock")
    Call<JsonObject> toggleLock(@Path("date") String date, @Body JsonObject body);
}
