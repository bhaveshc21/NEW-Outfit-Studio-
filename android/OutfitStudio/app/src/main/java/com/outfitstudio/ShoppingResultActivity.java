package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.bumptech.glide.Glide;
import com.google.gson.Gson;
import com.outfitstudio.api.models.ShoppingAnalysis;
import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.ApiClient;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class ShoppingResultActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private OutfitAdapter adapter;
    private static final String BASE_IMAGE_URL = "http://172.19.182.239:5000/";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_shopping_result);

        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        // Get JSON string from intent
        String jsonAnalysis = getIntent().getStringExtra("shopping_data");
        
        if (jsonAnalysis != null && !jsonAnalysis.isEmpty()) {
            ShoppingAnalysis analysis = new Gson().fromJson(jsonAnalysis, ShoppingAnalysis.class);
            
            // Populate Candidate Item
            ImageView ivCandidate = findViewById(R.id.ivCandidateItem);
            TextView tvCandidateCat = findViewById(R.id.tvCandidateCategory);
            TextView tvCandidateColor = findViewById(R.id.tvCandidateColor);
            
            String imagePath = analysis.getImagePath();
            if (analysis.getPurchaseUtility() != null && analysis.getPurchaseUtility().getCandidateItem() != null) {
                ShoppingAnalysis.CandidateItem cItem = analysis.getPurchaseUtility().getCandidateItem();
                tvCandidateCat.setText(cItem.getCategory() != null ? cItem.getCategory() : analysis.getDetectedCategory());
                tvCandidateColor.setText(cItem.getColor() != null ? cItem.getColor() : analysis.getDetectedColor());
                if (cItem.getImagePath() != null && !cItem.getImagePath().isEmpty()) {
                    imagePath = cItem.getImagePath();
                }
            } else {
                tvCandidateCat.setText(analysis.getDetectedCategory());
                tvCandidateColor.setText(analysis.getDetectedColor());
            }
            
            if (imagePath != null && !imagePath.isEmpty()) {
                String imageUrl = BASE_IMAGE_URL + imagePath.replace("\\", "/");
                Glide.with(this).load(imageUrl).into(ivCandidate);
            }

            // Purchase Utility Analysis sections
            if (analysis.getPurchaseUtility() != null) {
                ShoppingAnalysis.PurchaseUtility utility = analysis.getPurchaseUtility();
                
                // Why Useful
                TextView tvWhyUseful = findViewById(R.id.tvWhyUseful);
                if (utility.getExplanation() != null && utility.getExplanation().getReasons() != null) {
                    StringBuilder reasons = new StringBuilder();
                    for (String r : utility.getExplanation().getReasons()) {
                        reasons.append("• ").append(r).append("\n");
                    }
                    tvWhyUseful.setText(reasons.toString().trim());
                }

                // Compatibility
                TextView tvCompatSummary = findViewById(R.id.tvCompatibilitySummary);
                TextView tvCatSupport = findViewById(R.id.tvCategorySupport);
                
                if (utility.getCompatibility() != null) {
                    tvCompatSummary.setText(utility.getCompatibility().getCompatibleItemCount() + " compatible wardrobe items");
                }
                
                if (utility.getOutfitUtility() != null && utility.getOutfitUtility().getCategorySupport() != null) {
                    StringBuilder support = new StringBuilder();
                    for (Map.Entry<String, Integer> entry : utility.getOutfitUtility().getCategorySupport().entrySet()) {
                        if (entry.getValue() > 0) {
                            support.append(entry.getKey()).append(":\t").append(entry.getValue()).append("\n");
                        }
                    }
                    tvCatSupport.setText(support.toString().trim());
                }

                // Outfit Utility
                TextView tvOutfitUtility = findViewById(R.id.tvOutfitUtility);
                if (utility.getOutfitUtility() != null) {
                    tvOutfitUtility.setText(utility.getOutfitUtility().getValidCombinationCount() + " valid outfit combinations");
                }

                // Occasion Usefulness
                TextView tvOccasion = findViewById(R.id.tvOccasionUsefulness);
                if (utility.getOccasionUtility() != null && utility.getOccasionUtility().getSupportedOccasions() != null) {
                    StringBuilder occs = new StringBuilder();
                    for (String occ : utility.getOccasionUtility().getSupportedOccasions()) {
                        occs.append("✓ ").append(occ).append("\n");
                    }
                    if (occs.length() == 0) occs.append("None");
                    tvOccasion.setText(occs.toString().trim());
                }

                // Wardrobe Gap
                if (utility.getWardrobeGap() != null && utility.getWardrobeGap().hasGap()) {
                    findViewById(R.id.tvWardrobeGapHeader).setVisibility(View.VISIBLE);
                    TextView tvGap = findViewById(R.id.tvWardrobeGap);
                    tvGap.setVisibility(View.VISIBLE);
                    tvGap.setText(utility.getWardrobeGap().getMessage());
                    findViewById(R.id.vWardrobeGapDivider).setVisibility(View.VISIBLE);
                }
                
                // Example Outfits
                List<GeneratedOutfit> outfitList = utility.getExampleOutfits();
                if (outfitList == null || outfitList.isEmpty()) {
                    outfitList = analysis.getOutfits() != null ? analysis.getOutfits() : new ArrayList<>();
                }
                adapter = new OutfitAdapter(this, outfitList);
                recyclerView.setAdapter(adapter);
                
            } else {
                // Fallback for older responses
                List<GeneratedOutfit> outfitList = analysis.getOutfits() != null ? analysis.getOutfits() : new ArrayList<>();
                adapter = new OutfitAdapter(this, outfitList);
                recyclerView.setAdapter(adapter);
            }
        }
    }
}
