package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.OutfitResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class GenerateOutfitActivity extends AppCompatActivity {
    
    private Button btnGenerate;
    private ProgressBar progressBar;
    private TextView tvStatus;
    
    private String occasion;
    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_generate_outfit);
        
        occasion = getIntent().getStringExtra("occasion");
        
        btnGenerate = findViewById(R.id.btnGenerate);
        progressBar = findViewById(R.id.progressBar);
        tvStatus = findViewById(R.id.tvStatus);
        
        if (occasion != null) {
            TextView tvSubtitle = findViewById(R.id.tvSubtitle);
            tvSubtitle.setText("Getting current weather and assembling the perfect " + occasion + " outfit for you...");
        }
        
        btnGenerate.setOnClickListener(v -> generateOutfits());
    }
    
    private void generateOutfits() {
        btnGenerate.setEnabled(false);
        progressBar.setVisibility(View.VISIBLE);
        tvStatus.setText("");
        
        OutfitApiService apiService = ApiClient.getClient(this).create(OutfitApiService.class);
        
        com.outfitstudio.api.models.OutfitRequest request = new com.outfitstudio.api.models.OutfitRequest(occasion, "Pune");
        Call<OutfitResponse> call = apiService.generateOutfits(request);
        
        call.enqueue(new Callback<OutfitResponse>() {
            @Override
            public void onResponse(Call<OutfitResponse> call, Response<OutfitResponse> response) {
                btnGenerate.setEnabled(true);
                progressBar.setVisibility(View.GONE);
                
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    OutfitResponse outfitResponse = response.body();
                    
                    if (outfitResponse.getData().getOutfits() == null || outfitResponse.getData().getOutfits().isEmpty()) {
                        tvStatus.setText("Could not generate an outfit. Make sure you have enough items in your wardrobe.");
                    } else {
                        // Pass results to next activity as JSON string
                        Gson gson = new Gson();
                        String jsonOutfits = gson.toJson(outfitResponse.getData().getOutfits());
                        String jsonWeather = gson.toJson(outfitResponse.getData().getWeather());
                        String jsonSuggestions = gson.toJson(outfitResponse.getData().getShoppingSuggestions());
                        
                        Intent intent = new Intent(GenerateOutfitActivity.this, RecommendedOutfitActivity.class);
                        intent.putExtra("outfits_json", jsonOutfits);
                        intent.putExtra("weather_json", jsonWeather);
                        intent.putExtra("suggestions_json", jsonSuggestions);
                        intent.putExtra("occasion", outfitResponse.getData().getOccasion());
                        startActivity(intent);
                    }
                } else {
                    String errorMsg = "Failed to generate outfits (HTTP " + response.code() + ")";
                    try {
                        if (response.errorBody() != null) {
                            errorMsg += "\n" + response.errorBody().string();
                        }
                    } catch (Exception e) {}
                    tvStatus.setText(errorMsg);
                }
            }

            @Override
            public void onFailure(Call<OutfitResponse> call, Throwable t) {
                btnGenerate.setEnabled(true);
                progressBar.setVisibility(View.GONE);
                tvStatus.setText("Network error: " + t.getMessage());
            }
        });
    }
}
