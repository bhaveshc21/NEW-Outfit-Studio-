package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import com.unity3d.player.UnityPlayerGameActivity;

import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.VisualizationApiService;
import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.models.VisualizationResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class VisualizationActivity extends UnityPlayerGameActivity {

    private TextView tvStatus, tvOutfitTop, tvOutfitBottom, tvOutfitFootwear;
    private ProgressBar progressBar;
    private ImageButton btnBack;
    
    private VisualizationApiService apiService;
    private TokenManager tokenManager;
    private GeneratedOutfit currentOutfit;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        View uiOverlay = getLayoutInflater().inflate(R.layout.activity_3d_visualization, null);
        addContentView(uiOverlay, new android.widget.FrameLayout.LayoutParams(
                android.view.ViewGroup.LayoutParams.MATCH_PARENT, 
                android.view.ViewGroup.LayoutParams.MATCH_PARENT));

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

        apiService.prepareVisualization(currentOutfit).enqueue(new Callback<VisualizationResponse>() {
            @Override
            public void onResponse(Call<VisualizationResponse> call, Response<VisualizationResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    tvStatus.setVisibility(View.GONE); // Clear the 'Preparing 3D Engine' message
                    VisualizationResponse.VisualizationData data = response.body().getData();
                    updateUI(data);
                    launchUnityModule(data);
                } else {
                    String errorMsg = "Failed to prepare visualization data.";
                    try { 
                        if (response.errorBody() != null) {
                            errorMsg += " Code: " + response.code() + " Error: " + response.errorBody().string();
                        }
                    } catch (Exception e) {}
                    tvStatus.setText(errorMsg);
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
        try {
            String payload = new Gson().toJson(data);
            android.os.Handler handler = new android.os.Handler();
            Runnable sendTask = new Runnable() {
                int attempts = 0;
                @Override
                public void run() {
                    com.unity3d.player.UnityPlayer.UnitySendMessage("Avatar", "ReceiveVisualizationData", payload);
                    com.unity3d.player.UnityPlayer.UnitySendMessage("Main Camera", "ReceiveVisualizationData", payload);
                    com.unity3d.player.UnityPlayer.UnitySendMessage("AndroidReceiver", "ReceiveVisualizationData", payload);
                    attempts++;
                    if (attempts < 5) {
                        handler.postDelayed(this, 3000); // Retry every 3 seconds, 5 times total
                    }
                }
            };
            handler.postDelayed(sendTask, 2000);
        } catch (Exception e) {
            tvStatus.setText("Failed to communicate with Unity: " + e.getMessage());
        }
    }
}
