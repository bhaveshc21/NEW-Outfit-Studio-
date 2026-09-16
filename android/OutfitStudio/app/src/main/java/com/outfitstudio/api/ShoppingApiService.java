package com.outfitstudio.api;

import com.outfitstudio.api.models.ShoppingResponse;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.http.Multipart;
import retrofit2.http.POST;
import retrofit2.http.Part;

public interface ShoppingApiService {

    @Multipart
    @POST("shopping/analyze")
    Call<ShoppingResponse> analyzeShoppingItem(
            @Part("user_id") RequestBody userId,
            @Part("category") RequestBody category,
            @Part("color") RequestBody color,
            @Part MultipartBody.Part image
    );
}
