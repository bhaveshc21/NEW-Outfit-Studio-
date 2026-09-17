package com.outfitstudio;

import android.content.Intent;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.FashionScoreRequest;
import com.outfitstudio.api.models.FashionScoreResponse;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class FashionScoreActivity extends AppCompatActivity {

    private LinearLayout llLoading;
    private LinearLayout llContent;
    
    // Current Outfit views
    private ImageView ivTop, ivBottom, ivFootwear;
    private TextView tvTopName, tvBottomName, tvFootwearName;
    private TextView tvCurrentScore, tvCurrentReason;
    
    // Overall Score Views
    private TextView tvOverallScore, tvOverallRating;
    
    // Factors and Suggestions
    private LinearLayout llFactors, llSuggestions;
    
    // Improved Outfit views
    private View incImprovedOutfit;
    private ImageView ivImpTop, ivImpBottom, ivImpFootwear;
    private TextView tvImpTopName, tvImpBottomName, tvImpFootwearName;
    private TextView tvImpScore, tvImpReason;
    private TextView tvNoImprovedOutfit;

    private static final String BASE_IMAGE_URL = "http://192.168.1.103:5000/";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fashion_score);

        llLoading = findViewById(R.id.llLoading);
        llContent = findViewById(R.id.llContent);
        
        // Initialize Current Outfit Include views
        View incCurrent = findViewById(R.id.incCurrentOutfit);
        ivTop = incCurrent.findViewById(R.id.ivTop);
        ivBottom = incCurrent.findViewById(R.id.ivBottom);
        ivFootwear = incCurrent.findViewById(R.id.ivFootwear);
        tvTopName = incCurrent.findViewById(R.id.tvTopName);
        tvBottomName = incCurrent.findViewById(R.id.tvBottomName);
        tvFootwearName = incCurrent.findViewById(R.id.tvFootwearName);
        tvCurrentScore = incCurrent.findViewById(R.id.tvScore);
        tvCurrentReason = incCurrent.findViewById(R.id.tvReason);
        incCurrent.findViewById(R.id.btnRateOutfit).setVisibility(View.GONE);

        // Overall Score
        tvOverallScore = findViewById(R.id.tvOverallScore);
        tvOverallRating = findViewById(R.id.tvOverallRating);
        
        // Containers
        llFactors = findViewById(R.id.llFactors);
        llSuggestions = findViewById(R.id.llSuggestions);
        
        // Improved Outfit Include views
        incImprovedOutfit = findViewById(R.id.incImprovedOutfit);
        ivImpTop = incImprovedOutfit.findViewById(R.id.ivTop);
        ivImpBottom = incImprovedOutfit.findViewById(R.id.ivBottom);
        ivImpFootwear = incImprovedOutfit.findViewById(R.id.ivFootwear);
        tvImpTopName = incImprovedOutfit.findViewById(R.id.tvTopName);
        tvImpBottomName = incImprovedOutfit.findViewById(R.id.tvBottomName);
        tvImpFootwearName = incImprovedOutfit.findViewById(R.id.tvFootwearName);
        tvImpScore = incImprovedOutfit.findViewById(R.id.tvScore);
        tvImpReason = incImprovedOutfit.findViewById(R.id.tvReason);
        incImprovedOutfit.findViewById(R.id.btnRateOutfit).setVisibility(View.GONE);
        
        tvNoImprovedOutfit = findViewById(R.id.tvNoImprovedOutfit);

        String jsonOutfit = getIntent().getStringExtra("outfit_json");
        String occasion = getIntent().getStringExtra("occasion");
        
        if (jsonOutfit != null) {
            GeneratedOutfit outfit = new Gson().fromJson(jsonOutfit, GeneratedOutfit.class);
            fetchScore(outfit, occasion);
        } else {
            Toast.makeText(this, "Please select a valid outfit before rating it.", Toast.LENGTH_SHORT).show();
            finish();
        }
    }

    private void fetchScore(GeneratedOutfit outfit, String occasion) {
        llLoading.setVisibility(View.VISIBLE);
        llContent.setVisibility(View.GONE);

        List<Integer> accessoryIds = new ArrayList<>();
        if (outfit.getAccessories() != null) {
            for (com.outfitstudio.api.models.WardrobeItem item : outfit.getAccessories()) {
                accessoryIds.add(item.getId());
            }
        }

        FashionScoreRequest.OutfitIds outfitIds = new FashionScoreRequest.OutfitIds(
                outfit.getTop().getId(),
                outfit.getBottom().getId(),
                outfit.getFootwear().getId(),
                accessoryIds
        );

        FashionScoreRequest request = new FashionScoreRequest(outfitIds, occasion, "Pune");
        OutfitApiService apiService = ApiClient.getClient(this).create(OutfitApiService.class);

        apiService.scoreOutfit(request).enqueue(new Callback<FashionScoreResponse>() {
            @Override
            public void onResponse(Call<FashionScoreResponse> call, Response<FashionScoreResponse> response) {
                llLoading.setVisibility(View.GONE);
                
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    populateUI(response.body().getData());
                    llContent.setVisibility(View.VISIBLE);
                } else {
                    String msg = "Failed to evaluate outfit.";
                    if (response.body() != null && response.body().getMessage() != null) {
                        msg = response.body().getMessage();
                    }
                    Toast.makeText(FashionScoreActivity.this, msg, Toast.LENGTH_LONG).show();
                    finish();
                }
            }

            @Override
            public void onFailure(Call<FashionScoreResponse> call, Throwable t) {
                llLoading.setVisibility(View.GONE);
                Toast.makeText(FashionScoreActivity.this, "Unable to connect to the styling service. Please make sure the backend is running.", Toast.LENGTH_LONG).show();
                finish();
            }
        });
    }

    private void populateUI(FashionScoreResponse.Data data) {
        // Overall Score
        tvOverallScore.setText(data.getFashionScore() + " / 100");
        tvOverallRating.setText(data.getRating());

        // Current Outfit
        bindOutfitToViews(data.getCurrentOutfit(), ivTop, ivBottom, ivFootwear, tvTopName, tvBottomName, tvFootwearName);
        tvCurrentScore.setText("Current Score: " + data.getFashionScore());
        tvCurrentReason.setText("");

        // Factors
        llFactors.removeAllViews();
        String[] keys = {"color_coordination", "occasion", "weather", "combination", "accessories"};
        String[] titles = {"Color Coordination", "Occasion", "Weather", "Combination", "Accessories"};
        
        for (int i = 0; i < keys.length; i++) {
            FashionScoreResponse.FactorEvaluation eval = data.getFactors().get(keys[i]);
            if (eval != null) {
                View factorView = createFactorView(titles[i], eval);
                llFactors.addView(factorView);
            }
        }

        // Suggestions
        llSuggestions.removeAllViews();
        if (data.getImprovementSuggestions() != null) {
            for (String suggestion : data.getImprovementSuggestions()) {
                TextView tvSug = new TextView(this);
                tvSug.setText("• " + suggestion);
                tvSug.setTextSize(16);
                tvSug.setTextColor(Color.parseColor("#333333"));
                tvSug.setPadding(0, 8, 0, 8);
                llSuggestions.addView(tvSug);
            }
        }

        // Improved Outfit
        if (data.getImprovedOutfit() != null && data.getImprovedScore() != null && data.getImprovedScore() > data.getFashionScore()) {
            incImprovedOutfit.setVisibility(View.VISIBLE);
            tvNoImprovedOutfit.setVisibility(View.GONE);
            bindOutfitToViews(data.getImprovedOutfit(), ivImpTop, ivImpBottom, ivImpFootwear, tvImpTopName, tvImpBottomName, tvImpFootwearName);
            tvImpScore.setText("Improved Score: " + data.getImprovedScore());
            tvImpReason.setText("Suggested better combination from your wardrobe.");
        } else {
            incImprovedOutfit.setVisibility(View.GONE);
            tvNoImprovedOutfit.setVisibility(View.VISIBLE);
        }
    }

    private View createFactorView(String title, FashionScoreResponse.FactorEvaluation eval) {
        LinearLayout ll = new LinearLayout(this);
        ll.setOrientation(LinearLayout.HORIZONTAL);
        ll.setPadding(0, 16, 0, 16);
        
        LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(
            ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        ll.setLayoutParams(params);

        LinearLayout textLayout = new LinearLayout(this);
        textLayout.setOrientation(LinearLayout.VERTICAL);
        textLayout.setLayoutParams(new LinearLayout.LayoutParams(0, ViewGroup.LayoutParams.WRAP_CONTENT, 1));

        TextView tvTitle = new TextView(this);
        tvTitle.setText(title);
        tvTitle.setTypeface(null, Typeface.BOLD);
        tvTitle.setTextSize(16);
        tvTitle.setTextColor(Color.BLACK);

        TextView tvScore = new TextView(this);
        tvScore.setText(eval.getScore() + " / " + eval.getMaxScore());
        tvScore.setTextSize(14);
        tvScore.setTextColor(Color.parseColor("#666666"));

        textLayout.addView(tvTitle);
        textLayout.addView(tvScore);

        TextView tvStatus = new TextView(this);
        tvStatus.setText("PASS".equals(eval.getStatus()) ? "✓" : "✗");
        tvStatus.setTextSize(24);
        tvStatus.setTypeface(null, Typeface.BOLD);
        tvStatus.setTextColor("PASS".equals(eval.getStatus()) ? Color.parseColor("#4CAF50") : Color.parseColor("#F44336"));

        ll.addView(textLayout);
        ll.addView(tvStatus);
        
        return ll;
    }

    private void bindOutfitToViews(GeneratedOutfit outfit, ImageView top, ImageView bottom, ImageView footwear, TextView tvTop, TextView tvBottom, TextView tvFootwear) {
        if (outfit == null) return;
        
        if (outfit.getTop() != null && outfit.getTop().getImagePath() != null) {
            tvTop.setText(outfit.getTop().getName());
            Glide.with(this).load(BASE_IMAGE_URL + outfit.getTop().getImagePath().replace("\\", "/")).centerCrop().into(top);
        }
        
        if (outfit.getBottom() != null && outfit.getBottom().getImagePath() != null) {
            tvBottom.setText(outfit.getBottom().getName());
            Glide.with(this).load(BASE_IMAGE_URL + outfit.getBottom().getImagePath().replace("\\", "/")).centerCrop().into(bottom);
        }
        
        if (outfit.getFootwear() != null && outfit.getFootwear().getImagePath() != null) {
            tvFootwear.setText(outfit.getFootwear().getName());
            Glide.with(this).load(BASE_IMAGE_URL + outfit.getFootwear().getImagePath().replace("\\", "/")).centerCrop().into(footwear);
        }
    }
}
