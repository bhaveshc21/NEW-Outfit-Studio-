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
    private TextView tvUsage;
    private TextView tvSavedOutfits;
    private TextView tvWardrobeGaps;
    private LinearLayout layoutInsights;
    private Button btnEmptyGoToWardrobe;

    private TokenManager tokenManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_closet_statistics);

        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        if (getSupportActionBar() != null) {
            getSupportActionBar().setDisplayHomeAsUpEnabled(true);
            getSupportActionBar().setDisplayShowHomeEnabled(true);
        }
        toolbar.setNavigationOnClickListener(v -> finish());

        progressBar = findViewById(R.id.progressBar);
        tvLoadingText = findViewById(R.id.tvLoadingText);
        emptyStateLayout = findViewById(R.id.emptyStateLayout);
        contentScrollView = findViewById(R.id.contentScrollView);

        tvTotalItems = findViewById(R.id.tvTotalItems);
        layoutCategoryChart = findViewById(R.id.layoutCategoryChart);
        layoutColorChart = findViewById(R.id.layoutColorChart);
        tvUsage = findViewById(R.id.tvUsage);
        tvSavedOutfits = findViewById(R.id.tvSavedOutfits);
        tvWardrobeGaps = findViewById(R.id.tvWardrobeGaps);
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

        // Usage
        if (data.getUsage() != null) {
            tvUsage.setText(data.getUsage().getMessage());
        }

        // Saved Outfits
        if (data.getSavedOutfits() != null) {
            tvSavedOutfits.setText(data.getSavedOutfits().getMessage());
        }

        // Gaps
        if (data.getWardrobeGaps() != null) {
            StringBuilder gapsText = new StringBuilder();
            WardrobeGapStatistics gaps = data.getWardrobeGaps();
            
            if (gaps.getCritical() != null && !gaps.getCritical().isEmpty()) {
                gapsText.append("Critical Missing: ").append(String.join(", ", gaps.getCritical())).append("\n");
            }
            if (gaps.getOptional() != null && !gaps.getOptional().isEmpty()) {
                gapsText.append("Optional Missing: ").append(String.join(", ", gaps.getOptional())).append("\n");
            }
            if (gaps.getUnderrepresented() != null && !gaps.getUnderrepresented().isEmpty()) {
                gapsText.append("Underrepresented: ").append(String.join(", ", gaps.getUnderrepresented())).append("\n");
            }
            
            if (gapsText.length() == 0) {
                tvWardrobeGaps.setText("No significant gaps detected.");
            } else {
                tvWardrobeGaps.setText(gapsText.toString().trim());
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
        tvLabel.setTextColor(Color.parseColor("#424242"));
        tvLabel.setTextSize(14f);
        tvLabel.setPadding(0, 16, 0, 4);

        // Bar container
        LinearLayout barContainer = new LinearLayout(this);
        barContainer.setOrientation(LinearLayout.HORIZONTAL);
        barContainer.setLayoutParams(new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT,
                40 // Height of bar in px
        ));

        // The colored bar part (weight = percentage)
        View filledBar = new View(this);
        filledBar.setBackgroundColor(Color.parseColor("#3f51b5")); // primary color
        LinearLayout.LayoutParams filledParams = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, (float) percentage
        );
        filledBar.setLayoutParams(filledParams);

        // The empty part (weight = 100 - percentage)
        View emptyBar = new View(this);
        emptyBar.setBackgroundColor(Color.parseColor("#E0E0E0"));
        LinearLayout.LayoutParams emptyParams = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, (float) (100.0 - percentage)
        );
        emptyBar.setLayoutParams(emptyParams);

        barContainer.addView(filledBar);
        barContainer.addView(emptyBar);

        parent.addView(tvLabel);
        parent.addView(barContainer);
    }
}
