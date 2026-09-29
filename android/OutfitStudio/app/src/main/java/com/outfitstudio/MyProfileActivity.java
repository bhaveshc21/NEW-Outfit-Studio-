package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.android.material.textfield.TextInputEditText;
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

public class MyProfileActivity extends AppCompatActivity {
    private TextInputEditText etName, etEmail, etPassword;
    private Button btnEditSave;
    private ProgressBar progressBar;
    private AuthApiService apiService;
    private TokenManager tokenManager;
    private boolean isEditing = false;
    private ProfileData currentProfileData = null; // Store it so we don't overwrite measurements

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my_profile);

        etName = findViewById(R.id.etName);
        etEmail = findViewById(R.id.etEmail);
        etPassword = findViewById(R.id.etPassword);
        btnEditSave = findViewById(R.id.btnEditSave);
        progressBar = findViewById(R.id.progressBar);

        apiService = ApiClient.getClient(this).create(AuthApiService.class);
        tokenManager = TokenManager.getInstance(this);

        loadData();

        btnEditSave.setOnClickListener(v -> {
            if (!isEditing) {
                isEditing = true;
                etName.setEnabled(true);
                // Email might not be updatable in backend easily, but let's enable it if user wants
                // etEmail.setEnabled(true);
                etPassword.setEnabled(true);
                etPassword.setText("");
                etPassword.setHint("Enter new password (optional)");
                btnEditSave.setText("Save Changes");
            } else {
                saveData();
            }
        });
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
                        etName.setText(data.getUser().getName());
                        etEmail.setText(data.getUser().getEmail());
                    }
                    currentProfileData = data.getProfile();
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
        String newName = etName.getText().toString();
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(newName);
        
        ProfileData profileData = currentProfileData;
        if (profileData == null) {
            profileData = new ProfileData();
        }
        
        ProfileRequest request = new ProfileRequest(userUpdate, profileData);
        int userId = tokenManager.getUserId();

        apiService.updateProfile(userId, request).enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(MyProfileActivity.this, "Profile updated successfully", Toast.LENGTH_SHORT).show();
                    isEditing = false;
                    etName.setEnabled(false);
                    etPassword.setEnabled(false);
                    etPassword.setText("********");
                    btnEditSave.setText("Edit");
                } else {
                    Toast.makeText(MyProfileActivity.this, "Failed to update profile", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(MyProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void setLoading(boolean isLoading) {
        btnEditSave.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
