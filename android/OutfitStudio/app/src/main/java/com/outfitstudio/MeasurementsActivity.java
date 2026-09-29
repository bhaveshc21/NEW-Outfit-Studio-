package com.outfitstudio;

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

public class MeasurementsActivity extends AppCompatActivity {
    private EditText etHeight, etChest, etWaist, etHip, etShoulder, etInseam;
    private EditText etStyle, etColors, etOccasions;
    private Button btnEditSave;
    private ProgressBar progressBar;
    
    private AuthApiService apiService;
    private TokenManager tokenManager;
    private boolean isEditing = false;
    private String currentName = "";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_measurements);

        etHeight = findViewById(R.id.etHeight);
        etChest = findViewById(R.id.etChest);
        etWaist = findViewById(R.id.etWaist);
        etHip = findViewById(R.id.etHip);
        etShoulder = findViewById(R.id.etShoulder);
        etInseam = findViewById(R.id.etInseam);
        etStyle = findViewById(R.id.etStyle);
        etColors = findViewById(R.id.etColors);
        etOccasions = findViewById(R.id.etOccasions);
        
        btnEditSave = findViewById(R.id.btnEditSave);
        progressBar = findViewById(R.id.progressBar);

        apiService = ApiClient.getClient(this).create(AuthApiService.class);
        tokenManager = TokenManager.getInstance(this);

        loadData();

        btnEditSave.setOnClickListener(v -> {
            if (!isEditing) {
                isEditing = true;
                setFieldsEnabled(true);
                btnEditSave.setText("Save Measurements");
            } else {
                saveData();
            }
        });
    }

    private void setFieldsEnabled(boolean enabled) {
        etHeight.setEnabled(enabled);
        etChest.setEnabled(enabled);
        etWaist.setEnabled(enabled);
        etHip.setEnabled(enabled);
        etShoulder.setEnabled(enabled);
        etInseam.setEnabled(enabled);
        etStyle.setEnabled(enabled);
        etColors.setEnabled(enabled);
        etOccasions.setEnabled(enabled);
    }

    private void loadData() {
        setLoading(true);
        int userId = tokenManager.getUserId();
        apiService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    if (data.getUser() != null) {
                        currentName = data.getUser().getName();
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
                }
            }
            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {
                setLoading(false);
            }
        });
    }

    private void saveData() {
        setLoading(true);
        
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
        
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(currentName);
        ProfileRequest request = new ProfileRequest(userUpdate, profileData);
        int userId = tokenManager.getUserId();

        apiService.updateProfile(userId, request).enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(MeasurementsActivity.this, "Measurements saved", Toast.LENGTH_SHORT).show();
                    isEditing = false;
                    setFieldsEnabled(false);
                    btnEditSave.setText("Edit");
                } else {
                    Toast.makeText(MeasurementsActivity.this, "Failed to update", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(MeasurementsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void setLoading(boolean isLoading) {
        btnEditSave.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
