package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.ProgressBar;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class UsageInsightsActivity extends AppCompatActivity {
    private RecyclerView rvUsageInsights;
    private ProgressBar progressBar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_usage_insights);

        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        if (getSupportActionBar() != null) {
            getSupportActionBar().setDisplayHomeAsUpEnabled(true);
        }
        toolbar.setNavigationOnClickListener(v -> finish());

        rvUsageInsights = findViewById(R.id.rvUsageInsights);
        rvUsageInsights.setLayoutManager(new LinearLayoutManager(this));
        progressBar = findViewById(R.id.progressBar);

        loadUsageInsights();
    }

    private void loadUsageInsights() {
        progressBar.setVisibility(View.VISIBLE);
        int userId = com.outfitstudio.api.TokenManager.getInstance(this).getUserId();

        WardrobeApiService apiService = ApiClient.getClient(this).create(WardrobeApiService.class);
        apiService.getWardrobe(userId).enqueue(new Callback<WardrobeResponse.ListResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.ListResponse> call, Response<WardrobeResponse.ListResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    // Reuse WardrobeAdapter to list items
                    WardrobeAdapter adapter = new WardrobeAdapter(UsageInsightsActivity.this, response.body().getDataList());
                    rvUsageInsights.setAdapter(adapter);
                } else {
                    Toast.makeText(UsageInsightsActivity.this, "Failed to load usage insights", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.ListResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(UsageInsightsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }
}
