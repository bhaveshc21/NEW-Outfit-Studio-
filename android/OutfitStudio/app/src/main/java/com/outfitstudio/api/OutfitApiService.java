package com.outfitstudio.api;

import com.outfitstudio.api.models.OutfitResponse;
import retrofit2.Call;
import retrofit2.http.POST;

public interface OutfitApiService {
    @POST("outfits/generate")
    Call<OutfitResponse> generateOutfits();
}
