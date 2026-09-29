package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AppearanceApiService;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.AppearanceResponse;
import com.outfitstudio.api.models.ProfileResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ProfileActivity extends AppCompatActivity {

    private ImageView ivProfileImage;
    private TextView tvProfileName, tvProfileEmail;
    private TextView btnMyProfile, btnChangePassword, btnMeasurements, btnAppearanceAnalysis;
    private Switch switchNotifications;
    private Button btnLogoutNew;

    private AuthApiService authService;
    private AppearanceApiService appearanceService;
    private TokenManager tokenManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile);

        NavigationHelper.setupBottomNavigation(this, R.id.bottomNavigation);

        tokenManager = TokenManager.getInstance(this);
        authService = ApiClient.getClient(this).create(AuthApiService.class);
        appearanceService = ApiClient.getClient(this).create(AppearanceApiService.class);

        ivProfileImage = findViewById(R.id.ivProfileImage);
        tvProfileName = findViewById(R.id.tvProfileName);
        tvProfileEmail = findViewById(R.id.tvProfileEmail);
        btnMyProfile = findViewById(R.id.btnMyProfile);
        btnChangePassword = findViewById(R.id.btnChangePassword);
        btnMeasurements = findViewById(R.id.btnMeasurements);
        btnAppearanceAnalysis = findViewById(R.id.btnAppearanceAnalysis);
        switchNotifications = findViewById(R.id.switchNotifications);
        btnLogoutNew = findViewById(R.id.btnLogoutNew);

        loadProfileData();
        loadAppearanceData();

        btnMyProfile.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, MyProfileActivity.class);
            startActivity(intent);
        });
        
        btnChangePassword.setOnClickListener(v -> {
            Toast.makeText(ProfileActivity.this, "Change Password clicked", Toast.LENGTH_SHORT).show();
        });
        
        btnMeasurements.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, MeasurementsActivity.class);
            startActivity(intent);
        });
        
        btnAppearanceAnalysis.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, AppearanceAnalysisActivity.class);
            startActivity(intent);
        });

        btnLogoutNew.setOnClickListener(v -> logout());
    }

    private void loadProfileData() {
        int userId = tokenManager.getUserId();
        authService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    if (data.getUser() != null) {
                        tvProfileName.setText(data.getUser().getName());
                        tvProfileEmail.setText(data.getUser().getEmail());
                    }
                }
            }
            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {}
        });
    }

    private void loadAppearanceData() {
        int userId = tokenManager.getUserId();
        appearanceService.getAppearance(userId).enqueue(new Callback<AppearanceResponse>() {
            @Override
            public void onResponse(Call<AppearanceResponse> call, Response<AppearanceResponse> response) {
                if (response.isSuccessful() && response.body() != null) {
                    AppearanceResponse res = response.body();
                    if (res.isSuccess() && res.getData() != null && res.getData().getImageUrl() != null) {
                        String baseUrl = ApiClient.BASE_URL.replace("/api/", "");
                        String imageUrl = baseUrl + res.getData().getImageUrl();
                        Glide.with(ProfileActivity.this)
                             .load(imageUrl)
                             .placeholder(R.drawable.ic_profile)
                             .error(R.drawable.ic_profile)
                             .into(ivProfileImage);
                    }
                }
            }
            @Override
            public void onFailure(Call<AppearanceResponse> call, Throwable t) {}
        });
    }

    private void logout() {
        tokenManager.clear();
        Intent intent = new Intent(ProfileActivity.this, LoginActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        startActivity(intent);
        finish();
    }
}
