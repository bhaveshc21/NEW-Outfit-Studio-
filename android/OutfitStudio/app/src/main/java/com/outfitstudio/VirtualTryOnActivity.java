package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import com.google.gson.Gson;
import com.google.gson.JsonObject;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.VirtualTryOnApiService;
import com.outfitstudio.models.VirtualTryOnRequest;
import com.outfitstudio.models.VirtualTryOnResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class VirtualTryOnActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private String outfitJson = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_virtual_try_on);

        progressBar = findViewById(R.id.progressBar);

        outfitJson = getIntent().getStringExtra("outfit_json");

        if (outfitJson != null && !outfitJson.isEmpty()) {
            generateTryOn();
        } else {
            Toast.makeText(this, "Invalid outfit data", Toast.LENGTH_SHORT).show();
            finish();
        }
    }

    private void generateTryOn() {
        progressBar.setVisibility(View.VISIBLE);

        Gson gson = new Gson();
        JsonObject outfitObj = gson.fromJson(outfitJson, JsonObject.class);
        VirtualTryOnRequest request = new VirtualTryOnRequest(outfitObj);

        VirtualTryOnApiService apiService = ApiClient.getClient(this).create(VirtualTryOnApiService.class);
        apiService.generateTryOn(request).enqueue(new Callback<VirtualTryOnResponse>() {
            @Override
            public void onResponse(@NonNull Call<VirtualTryOnResponse> call, @NonNull Response<VirtualTryOnResponse> response) {
                progressBar.setVisibility(View.GONE);

                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    String imageUrl = response.body().getData().getImageUrl();
                    Intent intent = new Intent(VirtualTryOnActivity.this, VirtualTryOnResultActivity.class);
                    intent.putExtra("image_url", imageUrl);
                    startActivity(intent);
                    finish();
                } else {
                    String msg = "Failed to generate try-on";
                    if (response.body() != null && response.body().getMessage() != null) {
                        msg = response.body().getMessage();
                    } else if (response.errorBody() != null) {
                        try {
                            String errorStr = response.errorBody().string();
                            JsonObject errorJson = new Gson().fromJson(errorStr, JsonObject.class);
                            if (errorJson.has("message")) {
                                msg = errorJson.get("message").getAsString();
                            }
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                    Toast.makeText(VirtualTryOnActivity.this, msg, Toast.LENGTH_LONG).show();
                    finish();
                }
            }

            @Override
            public void onFailure(@NonNull Call<VirtualTryOnResponse> call, @NonNull Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(VirtualTryOnActivity.this, "Network Error: " + t.getMessage(), Toast.LENGTH_LONG).show();
                finish();
            }
        });
    }
}
