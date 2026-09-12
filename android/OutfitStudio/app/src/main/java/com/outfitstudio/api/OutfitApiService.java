package com.outfitstudio.api;

import com.outfitstudio.api.models.OutfitResponse;
import retrofit2.Call;
import retrofit2.http.POST;

import com.outfitstudio.api.models.OutfitRequest;
import retrofit2.http.Body;

public interface OutfitApiService {
    @POST("outfits/generate")
    Call<OutfitResponse> generateOutfits(@Body OutfitRequest request);
}
