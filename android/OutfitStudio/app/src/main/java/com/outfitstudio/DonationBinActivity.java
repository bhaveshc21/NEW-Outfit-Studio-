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
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeItem;
import com.outfitstudio.api.models.WardrobeResponse;

import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class DonationBinActivity extends AppCompatActivity {

    private RecyclerView rvDonationBin;
    private ProgressBar progressBar;
    private LinearLayout llEmptyState;
    private WardrobeApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_donation_bin);

        rvDonationBin = findViewById(R.id.rvDonationBin);
        progressBar = findViewById(R.id.progressBar);
        llEmptyState = findViewById(R.id.llEmptyState);

        rvDonationBin.setLayoutManager(new GridLayoutManager(this, 2));
        
        apiService = ApiClient.getClient(this).create(WardrobeApiService.class);
        
        loadDonationBin();
    }

    private void loadDonationBin() {
        progressBar.setVisibility(View.VISIBLE);
        rvDonationBin.setVisibility(View.GONE);
        llEmptyState.setVisibility(View.GONE);

        apiService.getDonationBin().enqueue(new Callback<WardrobeResponse.ListResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.ListResponse> call, Response<WardrobeResponse.ListResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    List<WardrobeItem> items = response.body().getDataList();
                    if (items == null || items.isEmpty()) {
                        llEmptyState.setVisibility(View.VISIBLE);
                    } else {
                        rvDonationBin.setVisibility(View.VISIBLE);
                        DonationBinAdapter adapter = new DonationBinAdapter(DonationBinActivity.this, items);
                        rvDonationBin.setAdapter(adapter);
                    }
                } else {
                    Toast.makeText(DonationBinActivity.this, "Failed to load donation bin", Toast.LENGTH_SHORT).show();
                    llEmptyState.setVisibility(View.VISIBLE);
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.ListResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(DonationBinActivity.this, "Network error", Toast.LENGTH_SHORT).show();
                llEmptyState.setVisibility(View.VISIBLE);
            }
        });
    }
}
