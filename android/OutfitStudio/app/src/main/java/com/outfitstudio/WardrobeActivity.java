package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.google.android.material.chip.Chip;
import com.google.android.material.chip.ChipGroup;
import com.google.android.material.floatingactionbutton.ExtendedFloatingActionButton;
import android.util.TypedValue;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeItem;
import com.outfitstudio.api.models.WardrobeResponse;

import java.util.ArrayList;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class WardrobeActivity extends AppCompatActivity {

    private RecyclerView rvWardrobe;
    private WardrobeAdapter adapter;
    private ProgressBar progressBar;
    private LinearLayout llEmptyState;
    private ChipGroup cgCategories;
    
    private List<WardrobeItem> allItems = new ArrayList<>();
    private WardrobeApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_wardrobe);

        rvWardrobe = findViewById(R.id.rvWardrobe);
        progressBar = findViewById(R.id.progressBar);
        llEmptyState = findViewById(R.id.llEmptyState);
        cgCategories = findViewById(R.id.cgCategories);
        ExtendedFloatingActionButton fabAddClothing = findViewById(R.id.fabAddClothing);

        rvWardrobe.setLayoutManager(new GridLayoutManager(this, 2));
        adapter = new WardrobeAdapter(this, new ArrayList<>());
        rvWardrobe.setAdapter(adapter);

        apiService = ApiClient.getClient(this).create(WardrobeApiService.class);

        fabAddClothing.setOnClickListener(v -> {
            startActivity(new Intent(WardrobeActivity.this, AddClothingActivity.class));
        });

        setupCategoryChips();

        cgCategories.setOnCheckedStateChangeListener((group, checkedIds) -> {
            if (!checkedIds.isEmpty()) {
                int checkedId = checkedIds.get(0);
                Chip chip = findViewById(checkedId);
                if (chip != null) {
                    filterItems(chip.getText().toString());
                }
            }
        });
    }

    private void setupCategoryChips() {
        cgCategories.removeAllViews();
        
        // Add "All" chip
        Chip chipAll = new Chip(this);
        chipAll.setText("All");
        chipAll.setCheckable(true);
        chipAll.setChecked(true);
        cgCategories.addView(chipAll);

        // Add gender specific chips
        String gender = TokenManager.getInstance(this).getGender();
        String[] categories = CategoryConstants.getCategoriesByGender(gender);
        for (String category : categories) {
            Chip chip = new Chip(this);
            chip.setText(category);
            chip.setCheckable(true);
            cgCategories.addView(chip);
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        loadWardrobe();
    }

    private void loadWardrobe() {
        int userId = TokenManager.getInstance(this).getUserId();
        if (userId == -1) {
            Toast.makeText(this, "User not logged in", Toast.LENGTH_SHORT).show();
            finish();
            return;
        }

        progressBar.setVisibility(View.VISIBLE);
        
        apiService.getWardrobe(userId).enqueue(new Callback<WardrobeResponse.ListResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.ListResponse> call, Response<WardrobeResponse.ListResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        allItems = response.body().getDataList();
                        if (allItems == null) allItems = new ArrayList<>();
                        
                        // Re-apply current filter
                        int checkedId = cgCategories.getCheckedChipId();
                        if (checkedId != View.NO_ID) {
                            Chip chip = findViewById(checkedId);
                            if (chip != null) {
                                filterItems(chip.getText().toString());
                                return;
                            }
                        }
                        updateUI(allItems);
                    } else {
                        Toast.makeText(WardrobeActivity.this, response.body().getMessage(), Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(WardrobeActivity.this, "Failed to load wardrobe", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.ListResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(WardrobeActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void filterItems(String category) {
        if (category.equals("All")) {
            updateUI(allItems);
        } else {
            List<WardrobeItem> filtered = new ArrayList<>();
            for (WardrobeItem item : allItems) {
                if (item.getCategory().equalsIgnoreCase(category)) {
                    filtered.add(item);
                }
            }
            updateUI(filtered);
        }
    }

    private void updateUI(List<WardrobeItem> itemsToShow) {
        if (itemsToShow.isEmpty()) {
            rvWardrobe.setVisibility(View.GONE);
            llEmptyState.setVisibility(View.VISIBLE);
        } else {
            rvWardrobe.setVisibility(View.VISIBLE);
            llEmptyState.setVisibility(View.GONE);
            adapter.updateData(itemsToShow);
        }
    }
}
