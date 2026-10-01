package com.outfitstudio;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeItem;
import com.outfitstudio.api.models.WardrobeResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ClothingDetailsActivity extends AppCompatActivity {

    private ImageView ivClothingDetail;
    private TextView tvDetailCategory, tvDetailColor;
    private TextView tvWornCount, tvLastWorn, tvRarelyUsedWarning;
    private ProgressBar progressBar;
    private Button btnDelete, btnEdit, btnDonate;
    
    private int itemId = -1;
    private WardrobeApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_clothing_details);

        ivClothingDetail = findViewById(R.id.ivClothingDetail);
        tvDetailCategory = findViewById(R.id.tvDetailCategory);
        tvDetailColor = findViewById(R.id.tvDetailColor);
        tvWornCount = findViewById(R.id.tvWornCount);
        tvLastWorn = findViewById(R.id.tvLastWorn);
        tvRarelyUsedWarning = findViewById(R.id.tvRarelyUsedWarning);
        progressBar = findViewById(R.id.progressBar);
        btnDelete = findViewById(R.id.btnDelete);
        btnEdit = findViewById(R.id.btnEdit);

        btnDonate = findViewById(R.id.btnDonate);
        Button btnCompleteLook = findViewById(R.id.btnCompleteLook);

        itemId = getIntent().getIntExtra("ITEM_ID", -1);
        apiService = ApiClient.getClient(this).create(WardrobeApiService.class);

        if (itemId == -1) {
            Toast.makeText(this, "Invalid Item", Toast.LENGTH_SHORT).show();
            finish();
            return;
        }

        btnCompleteLook.setOnClickListener(v -> {
            Intent intent = new Intent(ClothingDetailsActivity.this, CompleteLookActivity.class);
            intent.putExtra("ITEM_ID", itemId);
            startActivity(intent);
        });

        btnDelete.setOnClickListener(v -> showDeleteConfirmation());
        btnEdit.setOnClickListener(v -> {
            Intent intent = new Intent(ClothingDetailsActivity.this, EditClothingActivity.class);
            intent.putExtra("ITEM_ID", itemId);
            startActivity(intent);
        });
        

        btnDonate.setOnClickListener(v -> {
            new AlertDialog.Builder(this)
                .setTitle("Donate Item")
                .setMessage("This item has not been worn for 4 months or more. Would you like to donate it?")
                .setPositiveButton("YES, DONATE", (dialog, which) -> donateItem())
                .setNegativeButton("NOT NOW", null)
                .show();
        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (itemId != -1) {
            loadDetails();
        }
    }

    private void loadDetails() {
        int userId = TokenManager.getInstance(this).getUserId();
        progressBar.setVisibility(View.VISIBLE);

        apiService.getWardrobeItem(itemId, userId).enqueue(new Callback<WardrobeResponse.SingleResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.SingleResponse> call, Response<WardrobeResponse.SingleResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess() && response.body().getSingleData() != null) {
                        displayData(response.body().getSingleData());
                    } else {
                        Toast.makeText(ClothingDetailsActivity.this, "Item not found", Toast.LENGTH_SHORT).show();
                        finish();
                    }
                } else {
                    Toast.makeText(ClothingDetailsActivity.this, "Failed to load item", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.SingleResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(ClothingDetailsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void displayData(WardrobeItem item) {

        tvDetailCategory.setText(item.getCategory());
        tvDetailColor.setText(item.getColor());
        tvWornCount.setText(item.getUsageCount() + " times");
        
        if (item.getUsageCount() == 0 && item.getLastWornAt() == null) {
            tvLastWorn.setText("Never");
        } else {
            if (item.getDaysSinceLastWorn() != null) {
                if (item.getDaysSinceLastWorn() == 0) {
                    tvLastWorn.setText("Today");
                } else if (item.getDaysSinceLastWorn() == 1) {
                    tvLastWorn.setText("Yesterday");
                } else {
                    // Show date instead of days
                    try {
                        String rawDate = item.getLastWornAt();
                        if (rawDate != null) {
                            String datePart = rawDate;
                            if (rawDate.contains("T")) {
                                datePart = rawDate.split("T")[0];
                            } else if (rawDate.contains(" ")) {
                                datePart = rawDate.split(" ")[0];
                            }
                            tvLastWorn.setText(datePart);
                        } else {
                            tvLastWorn.setText(item.getDaysSinceLastWorn() + " days ago");
                        }
                    } catch (Exception e) {
                        tvLastWorn.setText(item.getDaysSinceLastWorn() + " days ago");
                    }
                }
            } else {
                tvLastWorn.setText("Recently");
            }
        }
        
        if (item.isRarelyUsed()) {
            tvRarelyUsedWarning.setVisibility(View.VISIBLE);
            btnDonate.setVisibility(View.VISIBLE);
        } else {
            tvRarelyUsedWarning.setVisibility(View.GONE);
            btnDonate.setVisibility(View.GONE);
        }
        String imagePath = item.getImagePath();
        if (imagePath != null) {
            String imageUrl = "http://192.168.1.11:5000/" + imagePath.replace("\\", "/");
            Glide.with(this)
                    .load(imageUrl)
                    .centerCrop()
                    .into(ivClothingDetail);
        } else {
            ivClothingDetail.setImageResource(android.R.color.transparent);
        }
    }

    private void showDeleteConfirmation() {
        new AlertDialog.Builder(this)
                .setTitle("Delete Clothing")
                .setMessage("Are you sure you want to delete this item from your wardrobe?")
                .setPositiveButton("Delete", (dialog, which) -> deleteItem())
                .setNegativeButton("Cancel", null)
                .show();
    }

    private void deleteItem() {
        int userId = TokenManager.getInstance(this).getUserId();
        progressBar.setVisibility(View.VISIBLE);

        apiService.deleteWardrobeItem(itemId, userId).enqueue(new Callback<WardrobeResponse.EmptyResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.EmptyResponse> call, Response<WardrobeResponse.EmptyResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        Toast.makeText(ClothingDetailsActivity.this, "Deleted successfully", Toast.LENGTH_SHORT).show();
                        finish();
                    } else {
                        Toast.makeText(ClothingDetailsActivity.this, response.body().getMessage(), Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(ClothingDetailsActivity.this, "Failed to delete item", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.EmptyResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(ClothingDetailsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void donateItem() {
        int userId = TokenManager.getInstance(this).getUserId();
        progressBar.setVisibility(View.VISIBLE);

        apiService.deleteWardrobeItem(itemId, userId).enqueue(new Callback<WardrobeResponse.EmptyResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.EmptyResponse> call, Response<WardrobeResponse.EmptyResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        Toast.makeText(ClothingDetailsActivity.this, "Item removed from your wardrobe.", Toast.LENGTH_SHORT).show();
                        Intent intent = new Intent(ClothingDetailsActivity.this, DonationActivity.class);
                        startActivity(intent);
                        finish();
                    } else {
                        Toast.makeText(ClothingDetailsActivity.this, response.body().getMessage(), Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(ClothingDetailsActivity.this, "Failed to delete item", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.EmptyResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(ClothingDetailsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

}
