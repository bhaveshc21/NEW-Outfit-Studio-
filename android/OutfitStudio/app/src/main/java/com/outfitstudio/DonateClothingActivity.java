package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

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

public class DonateClothingActivity extends AppCompatActivity {

    private RecyclerView rvDonateWardrobe;
    private DonateClothingAdapter adapter;
    private ProgressBar progressBar;
    private LinearLayout llEmptyState;
    private WardrobeApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_donate_clothing);

        rvDonateWardrobe = findViewById(R.id.rvDonateWardrobe);
        progressBar = findViewById(R.id.progressBar);
        llEmptyState = findViewById(R.id.llEmptyState);

        rvDonateWardrobe.setLayoutManager(new GridLayoutManager(this, 2));
        apiService = ApiClient.getClient(this).create(WardrobeApiService.class);
        adapter = new DonateClothingAdapter(this, new ArrayList<>(), apiService);
        rvDonateWardrobe.setAdapter(adapter);
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
                        List<WardrobeItem> allItems = response.body().getDataList();
                        if (allItems == null) allItems = new ArrayList<>();
                        updateUI(allItems);
                    } else {
                        Toast.makeText(DonateClothingActivity.this, response.body().getMessage(), Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(DonateClothingActivity.this, "Failed to load wardrobe", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.ListResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(DonateClothingActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void updateUI(List<WardrobeItem> itemsToShow) {
        if (itemsToShow.isEmpty()) {
            rvDonateWardrobe.setVisibility(View.GONE);
            llEmptyState.setVisibility(View.VISIBLE);
        } else {
            rvDonateWardrobe.setVisibility(View.VISIBLE);
            llEmptyState.setVisibility(View.GONE);
            adapter.updateData(itemsToShow);
        }
    }
}
