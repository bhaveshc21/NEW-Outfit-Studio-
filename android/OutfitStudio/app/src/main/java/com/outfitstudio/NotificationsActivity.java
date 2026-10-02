package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeItem;
import com.outfitstudio.api.models.WardrobeResponse;
import com.outfitstudio.api.TokenManager;

import java.util.ArrayList;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class NotificationsActivity extends AppCompatActivity {

    private RecyclerView rvNotifications;
    private ProgressBar progressBar;
    private TextView tvEmpty;
    private NotificationsAdapter adapter;
    private List<WardrobeItem> notificationItems = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_notifications);

        ImageView btnBack = findViewById(R.id.btnBack);
        btnBack.setOnClickListener(v -> finish());

        rvNotifications = findViewById(R.id.rvNotifications);
        progressBar = findViewById(R.id.progressBar);
        tvEmpty = findViewById(R.id.tvEmpty);

        rvNotifications.setLayoutManager(new LinearLayoutManager(this));
        adapter = new NotificationsAdapter(this, notificationItems);
        rvNotifications.setAdapter(adapter);

        fetchNotifications();
    }

    private void fetchNotifications() {
        progressBar.setVisibility(View.VISIBLE);
        int userId = TokenManager.getInstance(this).getUserId();
        
        WardrobeApiService apiService = ApiClient.getClient(this).create(WardrobeApiService.class);
        apiService.getWardrobe(userId).enqueue(new Callback<WardrobeResponse.ListResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.ListResponse> call, Response<WardrobeResponse.ListResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    List<WardrobeItem> allItems = response.body().getDataList();
                    notificationItems.clear();
                    
                    if (allItems != null) {
                        for (WardrobeItem item : allItems) {
                            if (item.isRarelyUsed()) {
                                notificationItems.add(item);
                            }
                        }
                    }
                    
                    if (notificationItems.isEmpty() && allItems != null && !allItems.isEmpty()) {
                        notificationItems.add(allItems.get(0));
                    }

                    adapter.notifyDataSetChanged();
                    
                    if (notificationItems.isEmpty()) {
                        tvEmpty.setVisibility(View.VISIBLE);
                        rvNotifications.setVisibility(View.GONE);
                    } else {
                        tvEmpty.setVisibility(View.GONE);
                        rvNotifications.setVisibility(View.VISIBLE);
                    }
                } else {
                    Toast.makeText(NotificationsActivity.this, "Failed to load notifications", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.ListResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(NotificationsActivity.this, "Network error: " + t.getMessage(), Toast.LENGTH_SHORT).show();
            }
        });
    }
}
