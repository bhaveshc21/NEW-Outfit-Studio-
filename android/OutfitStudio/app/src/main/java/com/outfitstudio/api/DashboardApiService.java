package com.outfitstudio.api;

import com.outfitstudio.api.models.DashboardResponse;
import retrofit2.Call;
import retrofit2.http.GET;

public interface DashboardApiService {
    @GET("dashboard/")
    Call<DashboardResponse> getDashboardData();
}
