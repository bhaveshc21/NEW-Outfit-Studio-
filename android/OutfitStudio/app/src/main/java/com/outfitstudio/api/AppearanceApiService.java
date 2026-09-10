package com.outfitstudio.api;

import com.outfitstudio.api.models.AppearanceResponse;

import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Multipart;
import retrofit2.http.POST;
import retrofit2.http.Part;
import retrofit2.http.Path;

public interface AppearanceApiService {
    @Multipart
    @POST("appearance/analyze")
    Call<AppearanceResponse> analyzeAppearance(
            @Part("user_id") RequestBody userId,
            @Part MultipartBody.Part image
    );

    @GET("appearance/{user_id}")
    Call<AppearanceResponse> getAppearance(@Path("user_id") int userId);
}
