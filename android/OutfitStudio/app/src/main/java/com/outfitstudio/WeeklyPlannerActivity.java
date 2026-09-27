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

import com.google.gson.JsonObject;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.PlannerApiService;
import com.outfitstudio.api.models.PlannedDay;
import com.outfitstudio.api.models.PlannedDayResponse;
import com.outfitstudio.api.models.WeeklyPlanResponse;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.Locale;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class WeeklyPlannerActivity extends AppCompatActivity implements WeeklyPlannerAdapter.PlannerActionCallback {

    private ImageView ivBack;
    private TextView tvWeekRange;
    private ProgressBar progressBar;
    private RecyclerView rvPlanner;
    private WeeklyPlannerAdapter adapter;
    private List<PlannedDay> daysList;
    private PlannerApiService apiService;
    private String currentStartDate;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_weekly_planner);

        ivBack = findViewById(R.id.ivBack);
        tvWeekRange = findViewById(R.id.tvWeekRange);
        progressBar = findViewById(R.id.progressBar);
        rvPlanner = findViewById(R.id.rvPlanner);

        rvPlanner.setLayoutManager(new LinearLayoutManager(this));

        ivBack.setOnClickListener(v -> finish());

        apiService = ApiClient.getClient(this).create(PlannerApiService.class);
        
        // Start from today or next Monday
        Calendar cal = Calendar.getInstance();
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd", Locale.getDefault());
        currentStartDate = sdf.format(cal.getTime());
        
        loadWeeklyPlan();
    }

    private void loadWeeklyPlan() {
        progressBar.setVisibility(View.VISIBLE);
        rvPlanner.setVisibility(View.GONE);
        
        JsonObject body = new JsonObject();
        body.addProperty("start_date", currentStartDate);
        body.addProperty("location", "Pune"); // Or get from profile
        
        apiService.generateWeeklyPlan(body).enqueue(new Callback<WeeklyPlanResponse>() {
            @Override
            public void onResponse(Call<WeeklyPlanResponse> call, Response<WeeklyPlanResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        WeeklyPlanResponse.WeeklyPlanData data = response.body().getData();
                        tvWeekRange.setText(data.getWeekStart() + " to " + data.getWeekEnd());
                        daysList = data.getDays();
                        adapter = new WeeklyPlannerAdapter(WeeklyPlannerActivity.this, daysList, WeeklyPlannerActivity.this);
                        rvPlanner.setAdapter(adapter);
                        rvPlanner.setVisibility(View.VISIBLE);
                    } else {
                        String msg = response.body().getMessage() != null ? response.body().getMessage() : "Failed to generate plan";
                        Toast.makeText(WeeklyPlannerActivity.this, msg, Toast.LENGTH_LONG).show();
                    }
                } else {
                    Toast.makeText(WeeklyPlannerActivity.this, "Server Error or Invalid Response", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WeeklyPlanResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(WeeklyPlannerActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    @Override
    public void onRegenerate(String date, int position) {
        progressBar.setVisibility(View.VISIBLE);
        JsonObject body = new JsonObject();
        body.addProperty("location", "Pune");
        
        apiService.regenerateDay(date, body).enqueue(new Callback<PlannedDayResponse>() {
            @Override
            public void onResponse(Call<PlannedDayResponse> call, Response<PlannedDayResponse> response) {
                progressBar.setVisibility(View.GONE);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    adapter.updateDay(position, response.body().getData());
                } else {
                    String msg = response.body() != null ? response.body().getMessage() : "Failed to regenerate";
                    Toast.makeText(WeeklyPlannerActivity.this, msg, Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<PlannedDayResponse> call, Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(WeeklyPlannerActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    @Override
    public void onToggleLock(String date, boolean currentLockState, int position) {
        boolean newLockState = !currentLockState;
        JsonObject body = new JsonObject();
        body.addProperty("is_locked", newLockState);
        
        apiService.toggleLock(date, body).enqueue(new Callback<JsonObject>() {
            @Override
            public void onResponse(Call<JsonObject> call, Response<JsonObject> response) {
                if (response.isSuccessful()) {
                    daysList.get(position).setLocked(newLockState);
                    adapter.notifyItemChanged(position);
                } else {
                    Toast.makeText(WeeklyPlannerActivity.this, "Failed to lock", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<JsonObject> call, Throwable t) {
                Toast.makeText(WeeklyPlannerActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }
}
