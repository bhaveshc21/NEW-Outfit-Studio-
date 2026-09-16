package com.outfitstudio.api;

import com.outfitstudio.api.models.ClosetStatisticsResponse;

import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Path;

public interface ClosetApiService {

    @GET("closet/statistics/{user_id}")
    Call<ClosetStatisticsResponse> getClosetStatistics(@Path("user_id") int userId);
}
