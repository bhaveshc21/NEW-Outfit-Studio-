package com.outfitstudio;

import android.content.Intent;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.ClosetApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.CategoryStatistic;
import com.outfitstudio.api.models.ClosetStatisticsData;
import com.outfitstudio.api.models.ClosetStatisticsResponse;
import com.outfitstudio.api.models.ColorStatistic;
import com.outfitstudio.api.models.WardrobeGapStatistics;

import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ClosetStatisticsActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private TextView tvLoadingText;
    private LinearLayout emptyStateLayout;
    private ScrollView contentScrollView;

    private TextView tvTotalItems;
    private LinearLayout layoutCategoryChart;
    private LinearLayout layoutColorChart;

    private LinearLayout layoutInsights;
    private Button btnEmptyGoToWardrobe;

    private TokenManager tokenManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_closet_statistics);

        // Custom header handles layout

        progressBar = findViewById(R.id.progressBar);
        tvLoadingText = findViewById(R.id.tvLoadingText);
        emptyStateLayout = findViewById(R.id.emptyStateLayout);
        contentScrollView = findViewById(R.id.contentScrollView);

        tvTotalItems = findViewById(R.id.tvTotalItems);
        layoutCategoryChart = findViewById(R.id.layoutCategoryChart);
        layoutColorChart = findViewById(R.id.layoutColorChart);

        layoutInsights = findViewById(R.id.layoutInsights);
        btnEmptyGoToWardrobe = findViewById(R.id.btnEmptyGoToWardrobe);

        btnEmptyGoToWardrobe.setOnClickListener(v -> {
            startActivity(new Intent(ClosetStatisticsActivity.this, WardrobeActivity.class));
            finish();
        });



        tokenManager = TokenManager.getInstance(this);

        fetchStatistics();
    }

    private void fetchStatistics() {
        showLoading(true);
        int userId = tokenManager.getUserId();

        if (userId == -1) {
            Toast.makeText(this, "Session expired or invalid. Please login again.", Toast.LENGTH_LONG).show();
            tokenManager.clear();
            startActivity(new Intent(this, LoginActivity.class));
            finish();
            return;
        }

        ClosetApiService apiService = ApiClient.getClient(this).create(ClosetApiService.class);
        Call<ClosetStatisticsResponse> call = apiService.getClosetStatistics(userId);

        call.enqueue(new Callback<ClosetStatisticsResponse>() {
            @Override
            public void onResponse(Call<ClosetStatisticsResponse> call, Response<ClosetStatisticsResponse> response) {
                showLoading(false);
                if (response.isSuccessful() && response.body() != null) {
                    ClosetStatisticsData data = response.body().getData();
                    if (data.getTotalItems() == 0) {
                        showEmptyState();
                    } else {
                        populateUI(data);
                    }
                } else {
                    Toast.makeText(ClosetStatisticsActivity.this, "Failed to load statistics.", Toast.LENGTH_SHORT).show();
                    showEmptyState();
                }
            }

            @Override
            public void onFailure(Call<ClosetStatisticsResponse> call, Throwable t) {
                showLoading(false);
                Toast.makeText(ClosetStatisticsActivity.this, "Network error. Please try again.", Toast.LENGTH_SHORT).show();
                showEmptyState();
            }
        });
    }

    private void showLoading(boolean isLoading) {
        if (isLoading) {
            progressBar.setVisibility(View.VISIBLE);
            tvLoadingText.setVisibility(View.VISIBLE);
            emptyStateLayout.setVisibility(View.GONE);
            contentScrollView.setVisibility(View.GONE);
        } else {
            progressBar.setVisibility(View.GONE);
            tvLoadingText.setVisibility(View.GONE);
        }
    }

    private void showEmptyState() {
        emptyStateLayout.setVisibility(View.VISIBLE);
        contentScrollView.setVisibility(View.GONE);
    }

    private void populateUI(ClosetStatisticsData data) {
        contentScrollView.setVisibility(View.VISIBLE);
        emptyStateLayout.setVisibility(View.GONE);

        tvTotalItems.setText(String.valueOf(data.getTotalItems()));

        // Category Chart
        layoutCategoryChart.removeAllViews();
        if (data.getCategoryDistribution() != null) {
            for (CategoryStatistic stat : data.getCategoryDistribution()) {
                addBarToChart(layoutCategoryChart, stat.getName(), stat.getCount(), stat.getPercentage());
            }
        }

        // Color Chart
        layoutColorChart.removeAllViews();
        if (data.getColorDistribution() != null) {
            for (ColorStatistic stat : data.getColorDistribution()) {
                addBarToChart(layoutColorChart, stat.getName(), stat.getCount(), stat.getPercentage());
            }
        }

        // Insights
        layoutInsights.removeAllViews();
        if (data.getInsights() != null) {
            for (String insight : data.getInsights()) {
                TextView tv = new TextView(this);
                tv.setText("• " + insight);
                tv.setTextColor(Color.parseColor("#424242")); // Use equivalent of on_background roughly
                tv.setPadding(0, 8, 0, 8);
                tv.setTextSize(14f);
                layoutInsights.addView(tv);
            }
        }
    }

    private void addBarToChart(LinearLayout parent, String name, int count, double percentage) {
        // Label
        TextView tvLabel = new TextView(this);
        tvLabel.setText(name + "  (" + count + ")");
        tvLabel.setTextColor(Color.parseColor("#3E3C3A")); // on_background
        tvLabel.setTypeface(null, android.graphics.Typeface.BOLD);
        tvLabel.setTextSize(14f);
        tvLabel.setPadding(0, 16, 0, 4);

        // Bar container
        LinearLayout barContainer = new LinearLayout(this);
        barContainer.setOrientation(LinearLayout.HORIZONTAL);
        barContainer.setLayoutParams(new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT,
                30 // Height of bar in px, thinner
        ));

        // The colored bar part (weight = percentage)
        View filledBar = new View(this);
        filledBar.setBackgroundResource(R.drawable.bg_button_rounded); // Use rounded background if possible
        filledBar.setBackgroundTintList(android.content.res.ColorStateList.valueOf(Color.parseColor("#BB8588"))); // primary
        LinearLayout.LayoutParams filledParams = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, (float) percentage
        );
        filledBar.setLayoutParams(filledParams);

        // The empty part (weight = 100 - percentage)
        View emptyBar = new View(this);
        emptyBar.setBackgroundResource(R.drawable.bg_button_rounded);
        emptyBar.setBackgroundTintList(android.content.res.ColorStateList.valueOf(Color.parseColor("#F4EFEA"))); // secondary_variant
        LinearLayout.LayoutParams emptyParams = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, (float) (100.0 - percentage)
        );
        // Add a tiny margin to the empty bar so it separates from the filled bar
        emptyParams.setMarginStart(4);
        emptyBar.setLayoutParams(emptyParams);

        barContainer.addView(filledBar);
        barContainer.addView(emptyBar);

        parent.addView(tvLabel);
        parent.addView(barContainer);
    }

    @Override
    protected void onResume() {
        super.onResume();
        NavigationHelper.setupBottomNavigation(this, R.id.nav_stats);
    }
}