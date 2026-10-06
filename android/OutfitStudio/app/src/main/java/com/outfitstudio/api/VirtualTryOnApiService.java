package com.outfitstudio.api;

import com.outfitstudio.models.VirtualTryOnResponse;

import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.http.Multipart;
import retrofit2.http.POST;
import retrofit2.http.Part;

public interface VirtualTryOnApiService {

    @POST("virtual-try-on/")
    Call<VirtualTryOnResponse> generateTryOn(@retrofit2.http.Body com.outfitstudio.models.VirtualTryOnRequest request);
}
