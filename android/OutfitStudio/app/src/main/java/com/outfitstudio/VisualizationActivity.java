package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.VisualizationApiService;
import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.models.VisualizationResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class VisualizationActivity extends AppCompatActivity {

    private TextView tvStatus, tvOutfitTop, tvOutfitBottom, tvOutfitFootwear;
    private ProgressBar progressBar;
    private ImageButton btnBack;
    
    private VisualizationApiService apiService;
    private TokenManager tokenManager;
    private GeneratedOutfit currentOutfit;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_3d_visualization);

        tvStatus = findViewById(R.id.tvStatus);
        tvOutfitTop = findViewById(R.id.tvOutfitTop);
        tvOutfitBottom = findViewById(R.id.tvOutfitBottom);
        tvOutfitFootwear = findViewById(R.id.tvOutfitFootwear);
        progressBar = findViewById(R.id.progressBar);
        btnBack = findViewById(R.id.btnBack);

        btnBack.setOnClickListener(v -> finish());

        tokenManager = TokenManager.getInstance(this);
        apiService = ApiClient.getClient(this).create(VisualizationApiService.class);

        String jsonOutfit = getIntent().getStringExtra("outfit_json");
        if (jsonOutfit != null) {
            currentOutfit = new Gson().fromJson(jsonOutfit, GeneratedOutfit.class);
            prepareVisualizationData();
        } else {
            tvStatus.setText("Outfit data unavailable.");
            progressBar.setVisibility(View.GONE);
        }
    }

    private void prepareVisualizationData() {
        String token = tokenManager.getToken();
        if (token == null || token.isEmpty()) {
            Toast.makeText(this, "Not authenticated", Toast.LENGTH_SHORT).show();
            finish();
            return;
        }

        apiService.prepareVisualization("Bearer " + token, currentOutfit).enqueue(new Callback<VisualizationResponse>() {
            @Override
            public void onResponse(Call<VisualizationResponse> call, Response<VisualizationResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    VisualizationResponse.VisualizationData data = response.body().getData();
                    updateUI(data);
                    launchUnityModule(data);
                } else {
                    tvStatus.setText("Failed to prepare visualization data.");
                }
            }

            @Override
            public void onFailure(Call<VisualizationResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                tvStatus.setText("Network error: " + t.getMessage());
            }
        });
    }

    private void updateUI(VisualizationResponse.VisualizationData data) {
        if (data.getOutfit().getTop() != null) {
            tvOutfitTop.setText("Top: " + data.getOutfit().getTop().getName());
        }
        if (data.getOutfit().getBottom() != null) {
            tvOutfitBottom.setText("Bottom: " + data.getOutfit().getBottom().getName());
        }
        if (data.getOutfit().getFootwear() != null) {
            tvOutfitFootwear.setText("Footwear: " + data.getOutfit().getFootwear().getName());
        }
    }

    private void launchUnityModule(VisualizationResponse.VisualizationData data) {
        // Here we simulate attempting to launch the Unity module.
        // In a real UaaL setup, we would start UnityPlayerActivity and pass the JSON.
        
        try {
            // Attempt to resolve Unity class to see if it's integrated
            Class<?> unityClass = Class.forName("com.unity3d.player.UnityPlayerGameActivity");
            
            // If found, launch it
            Intent intent = new Intent(this, unityClass);
            intent.putExtra("visualization_data", new Gson().toJson(data));
            startActivity(intent);
            
        } catch (ClassNotFoundException e) {
            // Unity library not linked yet
            tvStatus.setText("3D module ready.\n(Unity library not linked in this build)\n\n" +
                    "Profile: " + data.getProfile().getBodyType() + " | " + data.getProfile().getSkinTone() + "\n" +
                    "Top Model: " + (data.getOutfit().getTop() != null ? data.getOutfit().getTop().getModelKey() : "None") + "\n" +
                    "Bottom Model: " + (data.getOutfit().getBottom() != null ? data.getOutfit().getBottom().getModelKey() : "None") + "\n" +
                    "Footwear Model: " + (data.getOutfit().getFootwear() != null ? data.getOutfit().getFootwear().getModelKey() : "None"));
        }
    }
}
