package com.outfitstudio.api;

import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.LoginRequest;
import com.outfitstudio.api.models.LoginResponse;
import com.outfitstudio.api.models.ProfileRequest;
import com.outfitstudio.api.models.ProfileResponse;
import com.outfitstudio.api.models.RegisterRequest;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.PUT;
import retrofit2.http.Path;

public interface AuthApiService {
    @POST("register")
    Call<ApiResponse<LoginResponse>> register(@Body RegisterRequest request);
    
    @POST("login")
    Call<ApiResponse<LoginResponse>> login(@Body LoginRequest request);
    
    @POST("logout")
    Call<ApiResponse<Void>> logout();
    
    @GET("profile/{user_id}")
    Call<ApiResponse<ProfileResponse>> getProfile(@Path("user_id") int userId);
    
    @PUT("profile/{user_id}")
    Call<ApiResponse<Void>> updateProfile(@Path("user_id") int userId, @Body ProfileRequest request);
}
