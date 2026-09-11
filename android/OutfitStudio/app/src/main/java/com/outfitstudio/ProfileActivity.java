package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.ProfileData;
import com.outfitstudio.api.models.ProfileRequest;
import com.outfitstudio.api.models.ProfileResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ProfileActivity extends AppCompatActivity {

    private EditText etName, etHeight, etChest, etWaist, etHip, etShoulder, etInseam;
    private EditText etStyle, etColors, etOccasions;
    private Button btnSave, btnLogout, btnAnalyzeAppearance;
    private ProgressBar progressBar;
    private AuthApiService apiService;
    private TokenManager tokenManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile);

        tokenManager = TokenManager.getInstance(this);
        apiService = ApiClient.getClient(this).create(AuthApiService.class);

        initViews();
        loadProfileData();

        btnSave.setOnClickListener(v -> saveProfile());
        btnLogout.setOnClickListener(v -> logout());
        btnAnalyzeAppearance.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, AppearanceAnalysisActivity.class);
            startActivity(intent);
        });
    }

    private void initViews() {
        etName = findViewById(R.id.etName);
        etHeight = findViewById(R.id.etHeight);
        etChest = findViewById(R.id.etChest);
        etWaist = findViewById(R.id.etWaist);
        etHip = findViewById(R.id.etHip);
        etShoulder = findViewById(R.id.etShoulder);
        etInseam = findViewById(R.id.etInseam);
        etStyle = findViewById(R.id.etStyle);
        etColors = findViewById(R.id.etColors);
        etOccasions = findViewById(R.id.etOccasions);
        btnSave = findViewById(R.id.btnSave);
        btnLogout = findViewById(R.id.btnLogout);
        btnAnalyzeAppearance = findViewById(R.id.btnAnalyzeAppearance);
        progressBar = findViewById(R.id.progressBar);
    }

    private void loadProfileData() {
        setLoading(true);
        int userId = tokenManager.getUserId();
        
        apiService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    
                    if (data.getUser() != null) {
                        etName.setText(data.getUser().getName());
                    }
                    
                    if (data.getProfile() != null) {
                        ProfileData p = data.getProfile();
                        if (p.getHeight() != null) etHeight.setText(String.valueOf(p.getHeight()));
                        if (p.getChest() != null) etChest.setText(String.valueOf(p.getChest()));
                        if (p.getWaist() != null) etWaist.setText(String.valueOf(p.getWaist()));
                        if (p.getHip() != null) etHip.setText(String.valueOf(p.getHip()));
                        if (p.getShoulder() != null) etShoulder.setText(String.valueOf(p.getShoulder()));
                        if (p.getInseam() != null) etInseam.setText(String.valueOf(p.getInseam()));
                        
                        if (p.getPreferredStyle() != null) etStyle.setText(p.getPreferredStyle());
                        if (p.getPreferredColors() != null) etColors.setText(p.getPreferredColors());
                        if (p.getPreferredOccasions() != null) etOccasions.setText(p.getPreferredOccasions());
                    }
                } else {
                    Toast.makeText(ProfileActivity.this, "Failed to load profile", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(ProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void saveProfile() {
        setLoading(true);
        
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(etName.getText().toString());
        ProfileData profileData = new ProfileData();
        
        try {
            if (!etHeight.getText().toString().isEmpty()) profileData.setHeight(Float.parseFloat(etHeight.getText().toString()));
            if (!etChest.getText().toString().isEmpty()) profileData.setChest(Float.parseFloat(etChest.getText().toString()));
            if (!etWaist.getText().toString().isEmpty()) profileData.setWaist(Float.parseFloat(etWaist.getText().toString()));
            if (!etHip.getText().toString().isEmpty()) profileData.setHip(Float.parseFloat(etHip.getText().toString()));
            if (!etShoulder.getText().toString().isEmpty()) profileData.setShoulder(Float.parseFloat(etShoulder.getText().toString()));
            if (!etInseam.getText().toString().isEmpty()) profileData.setInseam(Float.parseFloat(etInseam.getText().toString()));
        } catch (NumberFormatException e) {
            setLoading(false);
            Toast.makeText(this, "Measurements must be numbers", Toast.LENGTH_SHORT).show();
            return;
        }

        profileData.setPreferredStyle(etStyle.getText().toString());
        profileData.setPreferredColors(etColors.getText().toString());
        profileData.setPreferredOccasions(etOccasions.getText().toString());
        
        ProfileRequest request = new ProfileRequest(userUpdate, profileData);
        int userId = tokenManager.getUserId();

        apiService.updateProfile(userId, request).enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(ProfileActivity.this, "Profile updated successfully", Toast.LENGTH_SHORT).show();
                } else {
                    Toast.makeText(ProfileActivity.this, "Failed to update profile", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(ProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void logout() {
        apiService.logout().enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                // Ignore server response for logout, clear local token anyway
                performLogout();
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                performLogout();
            }
        });
    }
    
    private void performLogout() {
        tokenManager.clear();
        Intent intent = new Intent(ProfileActivity.this, LoginActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        startActivity(intent);
        finish();
    }

    private void setLoading(boolean isLoading) {
        btnSave.setEnabled(!isLoading);
        btnLogout.setEnabled(!isLoading);
        btnAnalyzeAppearance.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
