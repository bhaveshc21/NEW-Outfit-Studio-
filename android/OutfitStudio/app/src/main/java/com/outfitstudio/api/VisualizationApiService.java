package com.outfitstudio.api;

import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.models.VisualizationResponse;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.Header;
import retrofit2.http.POST;

public interface VisualizationApiService {
    @POST("visualization/prepare")
    Call<VisualizationResponse> prepareVisualization(@Body GeneratedOutfit outfit);
}
