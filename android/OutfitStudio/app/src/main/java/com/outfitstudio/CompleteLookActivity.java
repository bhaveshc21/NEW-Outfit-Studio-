package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Button;
import android.widget.Toast;
import android.content.Intent;
import com.google.gson.Gson;
import com.outfitstudio.api.models.GeneratedOutfit;
import java.util.List;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.CompleteLookRequest;
import com.outfitstudio.api.models.CompleteLookResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class CompleteLookActivity extends AppCompatActivity {

    private ImageView ivLockedItem;
    private TextView tvLockedDetails, tvMissingComponents, tvError;
    private LinearLayout llLockedItem, llMissingComponents, llActionButtons;
    private ProgressBar progressBar;
    private RecyclerView recyclerView;
    private OutfitAdapter adapter;
    
    private int lockedItemId;
    private OutfitApiService apiService;
    
    private static final String BASE_IMAGE_URL = "http://172.19.182.239:5000/";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_complete_look);

        ivLockedItem = findViewById(R.id.ivLockedItem);
        ivLockedItem = findViewById(R.id.ivLockedItem);
        tvLockedDetails = findViewById(R.id.tvLockedDetails);
        tvMissingComponents = findViewById(R.id.tvMissingComponents);
        tvError = findViewById(R.id.tvError);
        llLockedItem = findViewById(R.id.llLockedItem);
        llMissingComponents = findViewById(R.id.llMissingComponents);
        progressBar = findViewById(R.id.progressBar);
        recyclerView = findViewById(R.id.recyclerView);
        llActionButtons = findViewById(R.id.llActionButtons);

        Button btnMarkAsWorn = findViewById(R.id.btnMarkAsWorn);
        Button btnCompareSelected = findViewById(R.id.btnCompareSelected);

        btnMarkAsWorn.setOnClickListener(v -> {
            if (adapter == null) return;
            List<GeneratedOutfit> selected = adapter.getSelectedOutfits();
            if (selected.size() != 1) {
                Toast.makeText(this, "Please select exactly ONE outfit to wear.", Toast.LENGTH_SHORT).show();
                return;
            }
            GeneratedOutfit outfit = selected.get(0);
            btnMarkAsWorn.setEnabled(false);
            btnMarkAsWorn.setText("Marking...");
            
            java.util.List<Integer> itemIds = new java.util.ArrayList<>();
            if (outfit.getTop() != null) itemIds.add(outfit.getTop().getId());
            if (outfit.getBottom() != null) itemIds.add(outfit.getBottom().getId());
            if (outfit.getOuterwear() != null) itemIds.add(outfit.getOuterwear().getId());
            if (outfit.getFootwear() != null) itemIds.add(outfit.getFootwear().getId());
            
            java.util.Map<String, java.util.List<Integer>> body = new java.util.HashMap<>();
            body.put("item_ids", itemIds);
            
            apiService.markOutfitWorn(body).enqueue(new Callback<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse>() {
                @Override
                public void onResponse(Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> call, Response<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> response) {
                    btnMarkAsWorn.setEnabled(true);
                    if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                        btnMarkAsWorn.setText("WORN!");
                        Toast.makeText(CompleteLookActivity.this, "Outfit marked as worn.", Toast.LENGTH_SHORT).show();
                    } else {
                        btnMarkAsWorn.setText("Mark as worn");
                        Toast.makeText(CompleteLookActivity.this, "Failed to mark as worn", Toast.LENGTH_SHORT).show();
                    }
                }
                @Override
                public void onFailure(Call<com.outfitstudio.api.models.WardrobeResponse.EmptyResponse> call, Throwable t) {
                    btnMarkAsWorn.setEnabled(true);
                    btnMarkAsWorn.setText("Mark as worn");
                    Toast.makeText(CompleteLookActivity.this, "Network error", Toast.LENGTH_SHORT).show();
                }
            });
        });

        btnCompareSelected.setOnClickListener(v -> {
            if (adapter == null) return;
            List<GeneratedOutfit> selected = adapter.getSelectedOutfits();
            if (selected.size() < 2) {
                Toast.makeText(this, "Please select at least two outfits to compare.", Toast.LENGTH_SHORT).show();
            } else {
                Intent compareIntent = new Intent(this, CompareOutfitsActivity.class);
                compareIntent.putExtra("selected_outfits_json", new Gson().toJson(selected));
                startActivity(compareIntent);
            }
        });

        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        lockedItemId = getIntent().getIntExtra("ITEM_ID", -1);
        if (lockedItemId == -1) {
            Toast.makeText(this, "Invalid starting item", Toast.LENGTH_SHORT).show();
            finish();
            return;
        }

        apiService = ApiClient.getClient(this).create(OutfitApiService.class);
        generateCompleteLook();
    }

    private void generateCompleteLook() {
        progressBar.setVisibility(View.VISIBLE);
        llLockedItem.setVisibility(View.GONE);
        llMissingComponents.setVisibility(View.GONE);
        recyclerView.setVisibility(View.GONE);
        if (llActionButtons != null) llActionButtons.setVisibility(View.GONE);
        tvError.setVisibility(View.GONE);

        CompleteLookRequest request = new CompleteLookRequest(lockedItemId);
        // Could pass occasion from somewhere, keeping it simple for now

        apiService.completeLook(request).enqueue(new Callback<CompleteLookResponse>() {
            @Override
            public void onResponse(Call<CompleteLookResponse> call, Response<CompleteLookResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    CompleteLookResponse resp = response.body();
                    if (resp.isSuccess() && resp.getData() != null) {
                        displayData(resp.getData());
                    } else {
                        showError(resp.getMessage());
                    }
                } else {
                    showError("Failed to generate complete look.");
                }
            }

            @Override
            public void onFailure(Call<CompleteLookResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                showError("Network error: " + t.getMessage());
            }
        });
    }

    private void displayData(CompleteLookResponse.CompleteLookData data) {
        if (data.getLockedItem() != null) {
            llLockedItem.setVisibility(View.VISIBLE);
            tvLockedDetails.setText(data.getLockedItem().getCategory() + " • " + data.getLockedItem().getColor());
            
            String imagePath = data.getLockedItem().getImagePath().replace("\\", "/");
            Glide.with(this)
                 .load(BASE_IMAGE_URL + imagePath)
                 .centerCrop()
                 .into(ivLockedItem);
        }

        if (data.getMissingComponents() != null && !data.getMissingComponents().isEmpty()) {
            llMissingComponents.setVisibility(View.VISIBLE);
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < data.getMissingComponents().size(); i++) {
                sb.append("• ").append(data.getMissingComponents().get(i));
                if (i < data.getMissingComponents().size() - 1) {
                    sb.append("\n");
                }
            }
            tvMissingComponents.setText(sb.toString());
        }

        if (data.getLooks() != null && !data.getLooks().isEmpty()) {
            recyclerView.setVisibility(View.VISIBLE);
            if (llActionButtons != null) llActionButtons.setVisibility(View.VISIBLE);
            adapter = new OutfitAdapter(this, data.getLooks());
            recyclerView.setAdapter(adapter);
        } else {
            showError("Could not find enough compatible items in your wardrobe.");
        }
    }
    
    private void showError(String message) {
        tvError.setVisibility(View.VISIBLE);
        tvError.setText(message);
    }
}
