package com.outfitstudio.api;

import com.outfitstudio.api.models.OutfitResponse;
import retrofit2.Call;
import retrofit2.http.POST;

import com.outfitstudio.api.models.OutfitRequest;
import com.outfitstudio.api.models.FashionScoreRequest;
import com.outfitstudio.api.models.FashionScoreResponse;
import retrofit2.http.Body;

public interface OutfitApiService {
    @POST("outfits/generate")
    Call<OutfitResponse> generateOutfits(@Body OutfitRequest request);

    @POST("outfits/score")
    Call<FashionScoreResponse> scoreOutfit(@Body FashionScoreRequest request);

    @POST("outfits/compare")
    Call<com.outfitstudio.api.models.ComparisonResponse> compareOutfits(@Body com.outfitstudio.api.models.ComparisonRequest request);

    @POST("outfits/explain")
    Call<com.outfitstudio.api.models.ExplanationResponse> explainOutfit(@Body com.outfitstudio.api.models.ExplanationRequest request);
}
