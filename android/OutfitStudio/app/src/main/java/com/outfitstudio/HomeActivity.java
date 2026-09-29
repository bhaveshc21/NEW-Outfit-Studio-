package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.outfitstudio.api.models.GeneratedOutfit;
import java.util.List;

import androidx.appcompat.app.AppCompatActivity;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.DashboardApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.DashboardResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class HomeActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private LinearLayout contentLayout;
    private RecyclerView rvRecentOutfits;
    private TextView tvEmptyRecent;
    private TextView tvWelcome, tvWardrobeCount, tvAppearanceStatus;
    private DashboardApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        if (!TokenManager.getInstance(this).isLoggedIn()) {
            startActivity(new Intent(this, LoginActivity.class));
            finish();
            return;
        }
        
        setContentView(R.layout.activity_home);

        progressBar = findViewById(R.id.progressBar);
        contentLayout = findViewById(R.id.contentLayout);
        tvWelcome = findViewById(R.id.tvWelcome);
        tvWardrobeCount = findViewById(R.id.tvWardrobeCount);
        tvAppearanceStatus = findViewById(R.id.tvAppearanceStatus);
        rvRecentOutfits = findViewById(R.id.rvRecentOutfits);
        tvEmptyRecent = findViewById(R.id.tvEmptyRecent);
        rvRecentOutfits.setLayoutManager(new LinearLayoutManager(this));

        apiService = ApiClient.getClient(this).create(DashboardApiService.class);

        setupClickListeners();
        fetchDashboardData();
    }

    @Override
    protected void onResume() {
        super.onResume();
        NavigationHelper.setupBottomNavigation(this, R.id.nav_home);
        if (contentLayout.getVisibility() == View.VISIBLE) {
            // Only fetch again if it's already loaded once (to avoid double loading on create)
            fetchDashboardData();
        }
    }

    private void fetchDashboardData() {
        apiService.getDashboardData().enqueue(new Callback<DashboardResponse>() {
            @Override
            public void onResponse(Call<DashboardResponse> call, Response<DashboardResponse> response) {
                progressBar.setVisibility(View.GONE);
                contentLayout.setVisibility(View.VISIBLE);
                
                if (response.isSuccessful() && response.body() != null) {
                    DashboardResponse dashboardResponse = response.body();
                    if (dashboardResponse.isSuccess() && dashboardResponse.getData() != null) {
                        updateUI(dashboardResponse.getData());
                    } else {
                        showError("Failed to load dashboard data");
                    }
                } else if (response.code() == 401 || response.code() == 403) {
                    // Token expired or invalid
                    handleLogout();
                } else {
                    showError("Error connecting to server");
                }
            }

            @Override
            public void onFailure(Call<DashboardResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                contentLayout.setVisibility(View.VISIBLE);
                showError("Network error: " + t.getMessage());
            }
        });
    }

    private void updateUI(DashboardResponse.DashboardData data) {
        if (data.getUser() != null && data.getUser().getName() != null) {
            tvWelcome.setText("Hello, " + data.getUser().getName() + " \uD83D\uDC4B");
        }

        if (data.getWardrobe() != null) {
            int count = data.getWardrobe().getTotalItems();
            tvWardrobeCount.setText(count + (count == 1 ? " item" : " items"));
        }

        if (data.getRecentOutfits() != null && !data.getRecentOutfits().isEmpty()) {
            rvRecentOutfits.setVisibility(View.VISIBLE);
            tvEmptyRecent.setVisibility(View.GONE);
            OutfitAdapter adapter = new OutfitAdapter(this, data.getRecentOutfits());
            rvRecentOutfits.setAdapter(adapter);
        } else {
            rvRecentOutfits.setVisibility(View.GONE);
            tvEmptyRecent.setVisibility(View.VISIBLE);
        }

        if (data.getFeatureStatus() != null) {
            if (data.getFeatureStatus().hasAppearance()) {
                tvAppearanceStatus.setText("Analyzed");
                tvAppearanceStatus.setTextColor(getResources().getColor(R.color.primary));
            } else {
                tvAppearanceStatus.setText("Not analyzed");
            }
        }
    }

    private void setupClickListeners() {
        ImageView btnProfile = findViewById(R.id.btnProfile);
        btnProfile.setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, ProfileActivity.class)));

        findViewById(R.id.cardGenerateOutfit).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, OccasionSelectionActivity.class)));
        findViewById(R.id.btnGenerateOutfitInner).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, OccasionSelectionActivity.class)));

        findViewById(R.id.cardWardrobe).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, WardrobeActivity.class)));
        findViewById(R.id.cardAppearance).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, AppearanceAnalysisActivity.class)));

        ImageView btnDashboard = findViewById(R.id.btnDashboard);
        btnDashboard.setOnClickListener(v -> {
            android.widget.PopupMenu popup = new android.widget.PopupMenu(HomeActivity.this, v);
            popup.getMenu().add(0, 1, 0, "Fashion Score");
            popup.getMenu().add(0, 2, 1, "Weekly Planner");
            popup.getMenu().add(0, 3, 2, "Donate Clothing");
            popup.setOnMenuItemClickListener(item -> {
                switch (item.getItemId()) {
                    case 1:
                        startActivity(new Intent(HomeActivity.this, FashionScoreActivity.class));
                        return true;
                    case 2:
                        startActivity(new Intent(HomeActivity.this, WeeklyPlannerActivity.class));
                        return true;
                    case 3:
                        startActivity(new Intent(HomeActivity.this, DonateClothingActivity.class));
                        return true;
                }
                return false;
            });
            popup.show();
        });

    }

    private void handleLogout() {
        TokenManager.getInstance(this).clear();
        Intent intent = new Intent(this, LoginActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        startActivity(intent);
        finish();
    }

    private void showError(String message) {
        Toast.makeText(this, message, Toast.LENGTH_SHORT).show();
    }
}
