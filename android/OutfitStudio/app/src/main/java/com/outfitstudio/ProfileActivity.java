package com.outfitstudio;

import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AppearanceApiService;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.AppearanceResponse;
import com.outfitstudio.api.models.ProfileResponse;
import com.outfitstudio.api.models.UploadImageResponse;

import java.io.File;

import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ProfileActivity extends AppCompatActivity {

    private ImageView ivProfileImage;
    private TextView tvProfileName, tvProfileEmail;
    private TextView btnMyProfile, btnChangePassword, btnAppearanceAnalysis;
    private Switch switchNotifications;
    private Button btnLogoutNew;

    private AuthApiService authService;
    private AppearanceApiService appearanceService;
    private TokenManager tokenManager;

    private ActivityResultLauncher<Intent> imagePickerLauncher;

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
        btnAppearanceAnalysis = findViewById(R.id.btnAppearanceAnalysis);
        switchNotifications = findViewById(R.id.switchNotifications);
        btnLogoutNew = findViewById(R.id.btnLogoutNew);

        imagePickerLauncher = registerForActivityResult(
                new ActivityResultContracts.StartActivityForResult(),
                result -> {
                    if (result.getResultCode() == RESULT_OK && result.getData() != null) {
                        Uri selectedImage = result.getData().getData();
                        if (selectedImage != null) {
                            uploadProfileImage(selectedImage);
                        }
                    }
                });

        loadProfileData();

        btnMyProfile.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, MyProfileActivity.class);
            startActivity(intent);
        });
        
        btnChangePassword.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, ChangePasswordActivity.class);
            startActivity(intent);
        });
        
        btnAppearanceAnalysis.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, AppearanceAnalysisActivity.class);
            startActivity(intent);
        });

        ImageView btnEditProfileImage = findViewById(R.id.btnEditProfileImage);
        btnEditProfileImage.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
            imagePickerLauncher.launch(intent);
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
                        
                        if (data.getUser().getProfileImage() != null) {
                            String baseUrl = ApiClient.BASE_URL.replace("/api/", "");
                            String imageUrl = baseUrl + data.getUser().getProfileImage();
                            Glide.with(ProfileActivity.this)
                                 .load(imageUrl)
                                 .placeholder(R.drawable.ic_profile)
                                 .error(R.drawable.ic_profile)
                                 .into(ivProfileImage);
                        } else {
                            loadAppearanceData();
                        }
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
    
    private void uploadProfileImage(Uri imageUri) {
        try {
            String[] filePathColumn = {MediaStore.Images.Media.DATA};
            Cursor cursor = getContentResolver().query(imageUri, filePathColumn, null, null, null);
            cursor.moveToFirst();
            int columnIndex = cursor.getColumnIndex(filePathColumn[0]);
            String picturePath = cursor.getString(columnIndex);
            cursor.close();

            File file = new File(picturePath);
            RequestBody requestFile = RequestBody.create(MediaType.parse("image/*"), file);
            MultipartBody.Part body = MultipartBody.Part.createFormData("image", file.getName(), requestFile);

            int userId = tokenManager.getUserId();
            authService.uploadProfileImage(userId, body).enqueue(new Callback<ApiResponse<UploadImageResponse>>() {
                @Override
                public void onResponse(Call<ApiResponse<UploadImageResponse>> call, Response<ApiResponse<UploadImageResponse>> response) {
                    if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                        Toast.makeText(ProfileActivity.this, "Profile picture updated!", Toast.LENGTH_SHORT).show();
                        loadProfileData(); // Reload profile to fetch the new image URL
                    } else {
                        Toast.makeText(ProfileActivity.this, "Upload failed", Toast.LENGTH_SHORT).show();
                    }
                }

                @Override
                public void onFailure(Call<ApiResponse<UploadImageResponse>> call, Throwable t) {
                    Toast.makeText(ProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            Toast.makeText(this, "Could not read image file", Toast.LENGTH_SHORT).show();
        }
    }

    private void logout() {
        tokenManager.clear();
        Intent intent = new Intent(ProfileActivity.this, LoginActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        startActivity(intent);
        finish();
    }
}
