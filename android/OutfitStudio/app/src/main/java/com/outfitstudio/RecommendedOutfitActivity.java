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
    }
}
