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

    @POST("outfits/complete-look")
    Call<com.outfitstudio.api.models.CompleteLookResponse> completeLook(@Body com.outfitstudio.api.models.CompleteLookRequest request);


    @POST("outfits/explain")
    Call<com.outfitstudio.api.models.ExplanationResponse> explainOutfit(@Body com.outfitstudio.api.models.ExplanationRequest request);
    
    @POST("outfits/worn")
    Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> markOutfitWorn(@Body java.util.Map<String, java.util.List<Integer>> body);
    
    @POST("outfits/save")
    Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> saveOutfit(@Body java.util.Map<String, com.outfitstudio.api.models.GeneratedOutfit> body);
    
    @retrofit2.http.GET("outfits/saved")
    Call<com.outfitstudio.api.models.OutfitResponse> getSavedOutfits();
    
    @retrofit2.http.DELETE("outfits/saved/{id}")
    Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> removeSavedOutfit(@retrofit2.http.Path("id") int outfitId);
}
