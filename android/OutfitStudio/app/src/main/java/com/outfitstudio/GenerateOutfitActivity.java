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
    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_generate_outfit);
        
        btnGenerate = findViewById(R.id.btnGenerate);
        progressBar = findViewById(R.id.progressBar);
        tvStatus = findViewById(R.id.tvStatus);
        
        btnGenerate.setOnClickListener(v -> generateOutfits());
    }
    
    private void generateOutfits() {
        btnGenerate.setEnabled(false);
        progressBar.setVisibility(View.VISIBLE);
        tvStatus.setText("");
        
        OutfitApiService apiService = ApiClient.getClient(this).create(OutfitApiService.class);
        Call<OutfitResponse> call = apiService.generateOutfits();
        
        call.enqueue(new Callback<OutfitResponse>() {
            @Override
            public void onResponse(Call<OutfitResponse> call, Response<OutfitResponse> response) {
                btnGenerate.setEnabled(true);
                progressBar.setVisibility(View.GONE);
                
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    OutfitResponse outfitResponse = response.body();
                    
                    if (outfitResponse.getData().getOutfits() == null || outfitResponse.getData().getOutfits().isEmpty()) {
                        tvStatus.setText("Could not generate an outfit. Make sure you have a Top, Bottom, and Footwear in your wardrobe.");
                    } else {
                        // Pass results to next activity as JSON string
                        String jsonOutfits = new Gson().toJson(outfitResponse.getData().getOutfits());
                        Intent intent = new Intent(GenerateOutfitActivity.this, RecommendedOutfitActivity.class);
                        intent.putExtra("outfits_json", jsonOutfits);
                        startActivity(intent);
                    }
                } else {
                    String errorMsg = "Failed to generate outfits.";
                    if (response.body() != null && response.body().getMessage() != null) {
                        errorMsg = response.body().getMessage();
                    }
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
