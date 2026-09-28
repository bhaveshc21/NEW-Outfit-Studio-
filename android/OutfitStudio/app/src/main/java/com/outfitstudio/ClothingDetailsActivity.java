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
    private TextView tvDetailName, tvDetailCategory, tvDetailColor, tvUsageInfo;
    private ProgressBar progressBar;
    private Button btnDelete, btnEdit, btnMarkWorn, btnDonate;
    
    private int itemId = -1;
    private WardrobeApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_clothing_details);

        ivClothingDetail = findViewById(R.id.ivClothingDetail);
        tvDetailName = findViewById(R.id.tvDetailName);
        tvDetailCategory = findViewById(R.id.tvDetailCategory);
        tvDetailColor = findViewById(R.id.tvDetailColor);
        tvUsageInfo = findViewById(R.id.tvUsageInfo);
        progressBar = findViewById(R.id.progressBar);
        btnDelete = findViewById(R.id.btnDelete);
        btnEdit = findViewById(R.id.btnEdit);
        btnMarkWorn = findViewById(R.id.btnMarkWorn);
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
        
        btnMarkWorn.setOnClickListener(v -> markAsWorn());
        
        btnDonate.setOnClickListener(v -> {
            new AlertDialog.Builder(this)
                .setTitle("Donate Item")
                .setMessage("This item has not been used for 4 months. Would you like to donate it?")
                .setPositiveButton("YES", (dialog, which) -> {
                    android.widget.Toast.makeText(ClothingDetailsActivity.this, "Thank you for choosing to donate!", android.widget.Toast.LENGTH_SHORT).show();
                })
                .setNegativeButton("NO", null)
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
        tvDetailName.setText(item.getName());
        tvDetailCategory.setText(item.getCategory());
        tvDetailColor.setText(item.getColor());
        
        StringBuilder usageText = new StringBuilder("USAGE\n");
        usageText.append("Worn ").append(item.getUsageCount()).append(" times\n");
        
        if (item.getUsageCount() == 0 && item.getLastWornAt() == null) {
            usageText.append("Never Worn");
        } else {
            if (item.getDaysSinceLastWorn() != null) {
                if (item.getDaysSinceLastWorn() == 0) {
                    usageText.append("Last worn today");
                } else {
                    usageText.append("Last worn ").append(item.getDaysSinceLastWorn()).append(" days ago");
                }
            } else {
                usageText.append("Last worn recently");
            }
        }
        
        if (item.isRarelyUsed()) {
            usageText.append("\n\nRARELY USED\nNot worn for over 4 months");
            btnDonate.setVisibility(View.VISIBLE);
        } else {
            btnDonate.setVisibility(View.GONE);
        }
        
        tvUsageInfo.setText(usageText.toString());

        String imageUrl = "http://192.168.1.6:5000/" + item.getImagePath().replace("\\", "/");
        Glide.with(this)
                .load(imageUrl)
                .centerCrop()
                .into(ivClothingDetail);
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
    private void markAsWorn() {
        btnMarkWorn.setEnabled(false);
        btnMarkWorn.setText("Recording...");
        
        apiService.markItemAsWorn(itemId).enqueue(new Callback<WardrobeResponse.SingleResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.SingleResponse> call, Response<WardrobeResponse.SingleResponse> response) {
                btnMarkWorn.setEnabled(true);
                btnMarkWorn.setText("Mark as Worn");
                
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(ClothingDetailsActivity.this, "Marked as worn", Toast.LENGTH_SHORT).show();
                    if (response.body().getSingleData() != null) {
                        displayData(response.body().getSingleData());
                    } else {
                        loadDetails();
                    }
                } else {
                    Toast.makeText(ClothingDetailsActivity.this, "Failed to mark as worn", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.SingleResponse> call, Throwable t) {
                btnMarkWorn.setEnabled(true);
                btnMarkWorn.setText("Mark as Worn");
                Toast.makeText(ClothingDetailsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }
}
