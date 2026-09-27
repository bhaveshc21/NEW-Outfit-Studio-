package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.ExplanationRequest;
import com.outfitstudio.api.models.ExplanationResponse;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.util.Map;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class OutfitExplanationActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private LinearLayout contentLayout, llReasons, llFactors;
    private TextView tvSummary, tvFashionScore;
    
    private OutfitApiService outfitApiService;
    private GeneratedOutfit outfit;
    private String occasion;
    private String location = "Pune";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_outfit_explanation);

        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        if (getSupportActionBar() != null) {
            getSupportActionBar().setDisplayHomeAsUpEnabled(true);
        }
        toolbar.setNavigationOnClickListener(v -> finish());

        progressBar = findViewById(R.id.progressBar);
        contentLayout = findViewById(R.id.contentLayout);
        tvSummary = findViewById(R.id.tvSummary);
        llReasons = findViewById(R.id.llReasons);
        llFactors = findViewById(R.id.llFactors);
        tvFashionScore = findViewById(R.id.tvFashionScore);

        outfitApiService = ApiClient.getClient(this).create(OutfitApiService.class);

        String outfitJson = getIntent().getStringExtra("outfit_json");
        occasion = getIntent().getStringExtra("occasion");
        if (getIntent().hasExtra("location")) {
            location = getIntent().getStringExtra("location");
        }

        if (outfitJson != null) {
            outfit = new Gson().fromJson(outfitJson, GeneratedOutfit.class);
            fetchExplanation();
        } else {
            Toast.makeText(this, "Outfit data missing", Toast.LENGTH_SHORT).show();
            finish();
        }
    }

    private void fetchExplanation() {
        progressBar.setVisibility(View.VISIBLE);
        contentLayout.setVisibility(View.GONE);

        ExplanationRequest request = new ExplanationRequest(outfit, occasion, location);
        
        outfitApiService.explainOutfit(request).enqueue(new Callback<ExplanationResponse>() {
            @Override
            public void onResponse(Call<ExplanationResponse> call, Response<ExplanationResponse> response) {
                progressBar.setVisibility(View.GONE);
                
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    displayExplanation(response.body().getData());
                } else {
                    String msg = "Unable to generate the explanation right now. Please try again.";
                    if (response.body() != null && response.body().getMessage() != null) {
                        msg = response.body().getMessage();
                    }
                    Toast.makeText(OutfitExplanationActivity.this, msg, Toast.LENGTH_LONG).show();
                    finish();
                }
            }

            @Override
            public void onFailure(Call<ExplanationResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(OutfitExplanationActivity.this, "Network error: Unable to get explanation", Toast.LENGTH_LONG).show();
                finish();
            }
        });
    }

    private void displayExplanation(ExplanationResponse.ExplanationData data) {
        contentLayout.setVisibility(View.VISIBLE);
        
        if (data.getTitle() != null) {
            if (getSupportActionBar() != null) getSupportActionBar().setTitle(data.getTitle());
        }
        
        tvSummary.setText(data.getSummary() != null ? data.getSummary() : "");
        
        // Add reasons
        llReasons.removeAllViews();
        if (data.getReasons() != null) {
            for (String reason : data.getReasons()) {
                TextView tvReason = new TextView(this);
                tvReason.setText("✓ " + reason);
                tvReason.setTextColor(getResources().getColor(R.color.on_background));
                tvReason.setPadding(0, 4, 0, 8);
                llReasons.addView(tvReason);
            }
        }
        
        // Add factors
        llFactors.removeAllViews();
        if (data.getFactors() != null) {
            for (Map.Entry<String, ExplanationResponse.ExplanationFactor> entry : data.getFactors().entrySet()) {
                String key = entry.getKey();
                ExplanationResponse.ExplanationFactor factor = entry.getValue();
                
                if (!factor.isAvailable() && !key.equals("appearance")) {
                    continue; // Skip unavailable factors except appearance which we might want to show as N/A
                }
                
                String displayTitle = key.substring(0, 1).toUpperCase() + key.substring(1);
                
                TextView tvTitle = new TextView(this);
                tvTitle.setText(displayTitle);
                tvTitle.setTextColor(getResources().getColor(R.color.primary));
                tvTitle.setTextSize(14f);
                tvTitle.setTypeface(null, android.graphics.Typeface.BOLD);
                tvTitle.setPadding(0, 8, 0, 2);
                llFactors.addView(tvTitle);
                
                TextView tvDesc = new TextView(this);
                tvDesc.setText(factor.getReason());
                tvDesc.setTextColor(getResources().getColor(R.color.text_hint));
                tvDesc.setTextSize(14f);
                tvDesc.setPadding(0, 0, 0, 16);
                llFactors.addView(tvDesc);
            }
        }
        
        if (data.getFashionScore() != null) {
            tvFashionScore.setText(String.format("Fashion Score: %.1f / 100", data.getFashionScore()));
        } else {
            tvFashionScore.setVisibility(View.GONE);
        }
    }
}
