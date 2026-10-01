package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.RadioButton;
import android.widget.RadioGroup;
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

public class OccasionSelectionActivity extends AppCompatActivity {

    private RadioGroup rgOccasions;
    private Button btnGenerate;
    private ProgressBar progressBar;
    private TextView tvStatus;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_occasion_selection);

        rgOccasions = findViewById(R.id.rgOccasions);
        btnGenerate = findViewById(R.id.btnGenerate);
        progressBar = findViewById(R.id.progressBar);
        tvStatus = findViewById(R.id.tvStatus);

        btnGenerate.setOnClickListener(v -> generateOutfits());
    }

    private void generateOutfits() {
        int selectedId = rgOccasions.getCheckedRadioButtonId();
        if (selectedId == -1) {
            Toast.makeText(this, "Please select an occasion", Toast.LENGTH_SHORT).show();
            return;
        }

        RadioButton selectedButton = findViewById(selectedId);
        String occasion = selectedButton.getText().toString();

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
                        Gson gson = new Gson();
                        String jsonOutfits = gson.toJson(outfitResponse.getData().getOutfits());
                        String jsonWeather = gson.toJson(outfitResponse.getData().getWeather());
                        String jsonSuggestions = gson.toJson(outfitResponse.getData().getShoppingSuggestions());
                        
                        Intent intent = new Intent(OccasionSelectionActivity.this, RecommendedOutfitActivity.class);
                        intent.putExtra("outfits_json", jsonOutfits);
                        intent.putExtra("weather_json", jsonWeather);
                        intent.putExtra("suggestions_json", jsonSuggestions);
                        intent.putExtra("occasion", outfitResponse.getData().getOccasion());
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

    @Override
    protected void onResume() {
        super.onResume();
        NavigationHelper.setupBottomNavigation(this, R.id.nav_generate);
    }
}
