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

        apiService = ApiClient.getClient(this).create(DashboardApiService.class);

        setupClickListeners();
        fetchDashboardData();
    }

    @Override
    protected void onResume() {
        super.onResume();
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

        findViewById(R.id.btnFashionScore).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, FashionScoreActivity.class)));
        findViewById(R.id.btnWeeklyPlanner).setOnClickListener(v -> startActivity(new Intent(HomeActivity.this, WeeklyPlannerActivity.class)));

        findViewById(R.id.btnLogout).setOnClickListener(v -> handleLogout());

        com.google.android.material.bottomnavigation.BottomNavigationView bottomNav = findViewById(R.id.bottomNavigation);
        bottomNav.setOnItemSelectedListener(item -> {
            int itemId = item.getItemId();
            if (itemId == R.id.nav_home) {
                return true;
            } else if (itemId == R.id.nav_wardrobe) {
                startActivity(new Intent(HomeActivity.this, WardrobeActivity.class));
                return false;
            } else if (itemId == R.id.nav_generate) {
                startActivity(new Intent(HomeActivity.this, OccasionSelectionActivity.class));
                return false;
            } else if (itemId == R.id.nav_stats) {
                startActivity(new Intent(HomeActivity.this, ClosetStatisticsActivity.class));
                return false;
            } else if (itemId == R.id.nav_shop) {
                startActivity(new Intent(HomeActivity.this, SmartShoppingActivity.class));
                return false;
            }
            return false;
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
