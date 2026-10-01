package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.OutfitApiService;
import com.outfitstudio.api.models.OutfitResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class SavedOutfitsActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private TextView tvError;
    private RecyclerView recyclerView;
    private OutfitAdapter adapter;
    private OutfitApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_saved_outfits);

        progressBar = findViewById(R.id.progressBar);
        tvError = findViewById(R.id.tvError);
        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        apiService = ApiClient.getClient(this).create(OutfitApiService.class);
        fetchSavedOutfits();
    }

    private void fetchSavedOutfits() {
        progressBar.setVisibility(View.VISIBLE);
        recyclerView.setVisibility(View.GONE);
        tvError.setVisibility(View.GONE);

        apiService.getSavedOutfits().enqueue(new Callback<OutfitResponse>() {
            @Override
            public void onResponse(Call<OutfitResponse> call, Response<OutfitResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    OutfitResponse resp = response.body();
                    if (resp.isSuccess() && resp.getData() != null && resp.getData().getOutfits() != null && !resp.getData().getOutfits().isEmpty()) {
                        recyclerView.setVisibility(View.VISIBLE);
                        adapter = new OutfitAdapter(SavedOutfitsActivity.this, resp.getData().getOutfits(), true);
                        recyclerView.setAdapter(adapter);
                    } else {
                        showError("You haven't saved any outfits yet.");
                    }
                } else {
                    showError("Failed to load saved outfits.");
                }
            }

            @Override
            public void onFailure(Call<OutfitResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                showError("Network error: " + t.getMessage());
            }
        });
    }

    private void showError(String message) {
        tvError.setVisibility(View.VISIBLE);
        tvError.setText(message);
    }
}
