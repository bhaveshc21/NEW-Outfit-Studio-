package com.outfitstudio.api;

import com.outfitstudio.api.models.WardrobeResponse;

import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.http.DELETE;
import retrofit2.http.GET;
import retrofit2.http.Multipart;
import retrofit2.http.POST;
import retrofit2.http.PUT;
import retrofit2.http.Part;
import retrofit2.http.Path;
import retrofit2.http.Query;

public interface WardrobeApiService {

    @Multipart
    @POST("wardrobe")
    Call<WardrobeResponse.SingleResponse> addWardrobeItem(
            @Part("user_id") RequestBody userId,
            @Part("name") RequestBody name,
            @Part("category") RequestBody category,
            @Part("color") RequestBody color,
            @Part MultipartBody.Part image
    );

    @GET("wardrobe/{userId}")
    Call<WardrobeResponse.ListResponse> getWardrobe(@Path("userId") int userId);

    @GET("wardrobe/item/{itemId}")
    Call<WardrobeResponse.SingleResponse> getWardrobeItem(
            @Path("itemId") int itemId,
            @Query("user_id") int userId
    );

    @Multipart
    @PUT("wardrobe/{itemId}")
    Call<WardrobeResponse.SingleResponse> updateWardrobeItem(
            @Path("itemId") int itemId,
            @Part("user_id") RequestBody userId,
            @Part("name") RequestBody name,
            @Part("category") RequestBody category,
            @Part("color") RequestBody color,
            @Part MultipartBody.Part image // This can be null
    );
    
    @Multipart
    @PUT("wardrobe/{itemId}")
    Call<WardrobeResponse.SingleResponse> updateWardrobeItemWithoutImage(
            @Path("itemId") int itemId,
            @Part("user_id") RequestBody userId,
            @Part("name") RequestBody name,
            @Part("category") RequestBody category,
            @Part("color") RequestBody color
    );

    @DELETE("wardrobe/{itemId}")
    Call<WardrobeResponse.EmptyResponse> deleteWardrobeItem(
            @Path("itemId") int itemId,
            @Query("user_id") int userId
    );
}
