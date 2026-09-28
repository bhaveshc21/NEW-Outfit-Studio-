package com.outfitstudio;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.List;

import android.widget.LinearLayout;
import android.widget.TextView;
import android.view.View;
import android.graphics.Color;
import android.graphics.Typeface;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.Toast;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.Typeface;
import android.view.ViewGroup;

import com.outfitstudio.api.models.WeatherData;
import com.outfitstudio.api.models.ShoppingSuggestion;

public class RecommendedOutfitActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private OutfitAdapter adapter;
    private List<GeneratedOutfit> outfitList;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_recommended_outfit);

        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        // Get JSON string from intent
        String jsonOutfits = getIntent().getStringExtra("outfits_json");
        
        if (jsonOutfits != null && !jsonOutfits.isEmpty()) {
            Type listType = new TypeToken<ArrayList<GeneratedOutfit>>(){}.getType();
            outfitList = new Gson().fromJson(jsonOutfits, listType);
        } else {
            outfitList = new ArrayList<>();
        }

        adapter = new OutfitAdapter(this, outfitList);
        recyclerView.setAdapter(adapter);
        
        // Handle Weather
        String jsonWeather = getIntent().getStringExtra("weather_json");
        if (jsonWeather != null && !jsonWeather.isEmpty() && !jsonWeather.equals("null")) {
            WeatherData weather = new Gson().fromJson(jsonWeather, WeatherData.class);
            if (weather != null) {
                LinearLayout llWeather = findViewById(R.id.llWeather);
                llWeather.setVisibility(View.VISIBLE);
                
                TextView tvWeatherTemp = findViewById(R.id.tvWeatherTemp);
                TextView tvWeatherCond = findViewById(R.id.tvWeatherCond);
                TextView tvLocation = findViewById(R.id.tvLocation);
                
                tvWeatherTemp.setText(weather.getTemperature() + "°C");
                tvWeatherCond.setText(weather.getCondition());
                tvLocation.setText(weather.getLocation());
            }
        }
        
        // Handle Occasion
        String occasion = getIntent().getStringExtra("occasion");
        if (occasion != null && !occasion.isEmpty()) {
            TextView tvTitle = findViewById(R.id.tvTitle);
            tvTitle.setText(occasion + " Outfits");
        }
        
        // Handle Shopping Suggestions
        String jsonSuggestions = getIntent().getStringExtra("suggestions_json");
        if (jsonSuggestions != null && !jsonSuggestions.isEmpty() && !jsonSuggestions.equals("[]")) {
            Type suggestionListType = new TypeToken<ArrayList<ShoppingSuggestion>>(){}.getType();
            List<ShoppingSuggestion> suggestions = new Gson().fromJson(jsonSuggestions, suggestionListType);
            
            if (suggestions != null && !suggestions.isEmpty()) {
                LinearLayout llSuggestionsContainer = findViewById(R.id.llSuggestionsContainer);
                LinearLayout llSuggestionsList = findViewById(R.id.llSuggestionsList);
                llSuggestionsContainer.setVisibility(View.VISIBLE);
                
                for (ShoppingSuggestion suggestion : suggestions) {
                    LinearLayout suggestionView = new LinearLayout(this);
                    suggestionView.setOrientation(LinearLayout.VERTICAL);
                    suggestionView.setPadding(32, 32, 32, 32);
                    suggestionView.setBackgroundResource(R.drawable.rounded_card_bg);
                    
                    LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(
                            ViewGroup.LayoutParams.MATCH_PARENT,
                            ViewGroup.LayoutParams.WRAP_CONTENT
                    );
                    params.setMargins(0, 0, 0, 24);
                    suggestionView.setLayoutParams(params);
                    
                    TextView tvItem = new TextView(this);
                    tvItem.setText(suggestion.getItem().toUpperCase());
                    tvItem.setTypeface(null, Typeface.BOLD);
                    tvItem.setTextColor(Color.parseColor("#C18C8D"));
                    tvItem.setTextSize(14);
                    
                    TextView tvReason = new TextView(this);
                    tvReason.setText(suggestion.getReason());
                    tvReason.setTextColor(Color.parseColor("#666666"));
                    tvReason.setTextSize(14);
                    tvReason.setPadding(0, 8, 0, 0);
                    
                    suggestionView.addView(tvItem);
                    suggestionView.addView(tvReason);
                    llSuggestionsList.addView(suggestionView);
                }
            }
        }
        
        Button btnCompare = findViewById(R.id.btnCompare);
        btnCompare.setOnClickListener(v -> {
            List<GeneratedOutfit> selected = adapter.getSelectedOutfits();
            if (selected.size() < 2) {
                Toast.makeText(RecommendedOutfitActivity.this, "Please select at least two outfits to compare.", Toast.LENGTH_SHORT).show();
            } else {
                Intent compareIntent = new Intent(RecommendedOutfitActivity.this, CompareOutfitsActivity.class);
                compareIntent.putExtra("selected_outfits_json", new Gson().toJson(selected));
                String occasionIntent = getIntent().getStringExtra("occasion");
                if (occasionIntent != null) {
                    compareIntent.putExtra("occasion", occasionIntent);
                }
                String jsonWeatherIntent = getIntent().getStringExtra("weather_json");
                if (jsonWeatherIntent != null) {
                    compareIntent.putExtra("weather_json", jsonWeatherIntent);
                }
                startActivity(compareIntent);
            }
        });
        
        Button btnWearAsWorn = findViewById(R.id.btnWearAsWorn);
        btnWearAsWorn.setVisibility(View.VISIBLE); // Always visible but acts conditionally
        btnWearAsWorn.setOnClickListener(v -> {
            List<GeneratedOutfit> selected = adapter.getSelectedOutfits();
            if (selected.size() != 1) {
                Toast.makeText(RecommendedOutfitActivity.this, "Please select exactly ONE outfit to wear.", Toast.LENGTH_SHORT).show();
            } else {
                GeneratedOutfit outfit = selected.get(0);
                btnWearAsWorn.setEnabled(false);
                btnWearAsWorn.setText("Marking...");
                
                java.util.List<Integer> itemIds = new java.util.ArrayList<>();
                if (outfit.getTop() != null) itemIds.add(outfit.getTop().getId());
                if (outfit.getBottom() != null) itemIds.add(outfit.getBottom().getId());
                if (outfit.getOuterwear() != null) itemIds.add(outfit.getOuterwear().getId());
                if (outfit.getFootwear() != null) itemIds.add(outfit.getFootwear().getId());
                
                java.util.Map<String, java.util.List<Integer>> body = new java.util.HashMap<>();
                body.put("item_ids", itemIds);
                
                com.outfitstudio.api.OutfitApiService apiService = com.outfitstudio.api.ApiClient.getClient(RecommendedOutfitActivity.this).create(com.outfitstudio.api.OutfitApiService.class);
                apiService.markOutfitWorn(body).enqueue(new retrofit2.Callback<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse>() {
                    @Override
                    public void onResponse(retrofit2.Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> call, retrofit2.Response<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> response) {
                        btnWearAsWorn.setEnabled(true);
                        if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                            btnWearAsWorn.setText("WORN!");
                            Toast.makeText(RecommendedOutfitActivity.this, "Outfit marked as worn.", Toast.LENGTH_SHORT).show();
                        } else {
                            btnWearAsWorn.setText("Mark as Worn");
                            Toast.makeText(RecommendedOutfitActivity.this, "Failed to mark as worn", Toast.LENGTH_SHORT).show();
                        }
                    }

                    @Override
                    public void onFailure(retrofit2.Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> call, Throwable t) {
                        btnWearAsWorn.setEnabled(true);
                        btnWearAsWorn.setText("Mark as Worn");
                        Toast.makeText(RecommendedOutfitActivity.this, "Network error", Toast.LENGTH_SHORT).show();
                    }
                });
            }
        });
    }
}
