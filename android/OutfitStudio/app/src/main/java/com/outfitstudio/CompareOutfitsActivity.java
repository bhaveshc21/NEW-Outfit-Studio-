package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.android.material.appbar.MaterialToolbar;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.ComparisonRequest;
import com.outfitstudio.api.models.ComparisonResponse;
import com.outfitstudio.api.models.ComparisonResult;
import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.models.WeatherData;

import java.lang.reflect.Type;
import java.util.List;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class CompareOutfitsActivity extends AppCompatActivity {

    private LinearLayout llCompareResults;
    private ProgressBar progressBar;
    private List<GeneratedOutfit> selectedOutfits;
    private String occasion;
    private WeatherData weather;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_compare_outfits);

        MaterialToolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        if (getSupportActionBar() != null) {
            getSupportActionBar().setDisplayHomeAsUpEnabled(true);
        }
        toolbar.setNavigationOnClickListener(v -> onBackPressed());

        llCompareResults = findViewById(R.id.llCompareResults);
        progressBar = findViewById(R.id.progressBar);

        String jsonOutfits = getIntent().getStringExtra("selected_outfits_json");
        Type type = new TypeToken<List<GeneratedOutfit>>() {}.getType();
        selectedOutfits = new Gson().fromJson(jsonOutfits, type);
        
        occasion = getIntent().getStringExtra("occasion");
        String jsonWeather = getIntent().getStringExtra("weather_json");
        if (jsonWeather != null) {
            weather = new Gson().fromJson(jsonWeather, WeatherData.class);
        }

        if (selectedOutfits != null && selectedOutfits.size() >= 2) {
            compareOutfits();
        } else {
            Toast.makeText(this, "Not enough outfits to compare.", Toast.LENGTH_SHORT).show();
            finish();
        }
    }

    private void compareOutfits() {
        OutfitApiService apiService = ApiClient.getClient(this).create(OutfitApiService.class);
        ComparisonRequest request = new ComparisonRequest(selectedOutfits, occasion, weather);

        apiService.compareOutfits(request).enqueue(new Callback<ComparisonResponse>() {
            @Override
            public void onResponse(Call<ComparisonResponse> call, Response<ComparisonResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        displayResults(response.body().getResults());
                    } else {
                        Toast.makeText(CompareOutfitsActivity.this, "Error: " + response.body().getError(), Toast.LENGTH_LONG).show();
                    }
                } else {
                    Toast.makeText(CompareOutfitsActivity.this, "Failed to compare outfits", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ComparisonResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(CompareOutfitsActivity.this, "Network error: " + t.getMessage(), Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void displayResults(List<ComparisonResult> results) {
        for (ComparisonResult result : results) {
            View card = getLayoutInflater().inflate(R.layout.item_outfit_card, llCompareResults, false);
            
            TextView tvScore = card.findViewById(R.id.tvScore);
            TextView tvReason = card.findViewById(R.id.tvReason);
            android.widget.Button btnRateOutfit = card.findViewById(R.id.btnRateOutfit);
            View cbSelect = card.findViewById(R.id.cbSelect);
            
            if (cbSelect != null) {
                cbSelect.setVisibility(View.GONE);
            }
            if (btnRateOutfit != null) {
                btnRateOutfit.setVisibility(View.GONE);
            }

            GeneratedOutfit outfit = selectedOutfits.get(result.getOutfitIndex());

            tvScore.setText(String.format("Score: %.1f - %s", result.getFashionScore(), result.getRating()));
            
            StringBuilder factorsText = new StringBuilder();
            if (result.getFactors() != null) {
                for (Map.Entry<String, String> entry : result.getFactors().entrySet()) {
                    factorsText.append("• ").append(entry.getKey()).append(": ").append(entry.getValue()).append("\n");
                }
            }
            tvReason.setText(factorsText.toString().trim());
            tvReason.setMaxLines(Integer.MAX_VALUE); // allow full breakdown

            // Top
            if (outfit.getTop() != null && outfit.getTop().getImagePath() != null) {
                String path = outfit.getTop().getImagePath().replace("\\", "/");
                com.bumptech.glide.Glide.with(this)
                        .load("http://172.19.182.239:5000/" + path)
                        .centerCrop()
                        .into((android.widget.ImageView) card.findViewById(R.id.ivTop));
            }

            // Outerwear
            if (outfit.getOuterwear() != null && outfit.getOuterwear().getImagePath() != null) {
                card.findViewById(R.id.layoutOuterwear).setVisibility(View.VISIBLE);
                String path = outfit.getOuterwear().getImagePath().replace("\\", "/");
                com.bumptech.glide.Glide.with(this)
                        .load("http://172.19.182.239:5000/" + path)
                        .centerCrop()
                        .into((android.widget.ImageView) card.findViewById(R.id.ivOuterwear));
            } else {
                card.findViewById(R.id.layoutOuterwear).setVisibility(View.GONE);
            }

            // Bottom
            if (outfit.getBottom() != null && outfit.getBottom().getImagePath() != null) {
                String path = outfit.getBottom().getImagePath().replace("\\", "/");
                com.bumptech.glide.Glide.with(this)
                        .load("http://172.19.182.239:5000/" + path)
                        .centerCrop()
                        .into((android.widget.ImageView) card.findViewById(R.id.ivBottom));
            }

            // Footwear
            if (outfit.getFootwear() != null && outfit.getFootwear().getImagePath() != null) {
                String path = outfit.getFootwear().getImagePath().replace("\\", "/");
                com.bumptech.glide.Glide.with(this)
                        .load("http://172.19.182.239:5000/" + path)
                        .centerCrop()
                        .into((android.widget.ImageView) card.findViewById(R.id.ivFootwear));
            }
            
            llCompareResults.addView(card);
        }
    }
}
