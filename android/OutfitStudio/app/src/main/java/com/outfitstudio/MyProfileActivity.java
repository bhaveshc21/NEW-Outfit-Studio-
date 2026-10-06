package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.Toast;
import android.widget.ImageView;
import android.net.Uri;
import android.content.Intent;
import android.Manifest;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.provider.MediaStore;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.core.content.ContextCompat;
import com.bumptech.glide.Glide;
import java.io.File;
import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;

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
    private TextInputEditText etName, etEmail;
    private Button btnEditSave, btnChangeImage;
    private ImageView ivProfileImage;
    private ProgressBar progressBar;
    private AuthApiService apiService;
    private TokenManager tokenManager;
    private boolean isEditing = false;
    private ProfileData currentProfileData = null; // Store it so we don't overwrite measurements

    private final ActivityResultLauncher<Intent> photoPickerLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), result -> {
                if (result.getResultCode() == RESULT_OK && result.getData() != null) {
                    Uri selectedPhotoUri = result.getData().getData();
                    ivProfileImage.setImageURI(selectedPhotoUri);
                    uploadProfileImage(selectedPhotoUri);
                }
            });

    private final ActivityResultLauncher<String> requestPermissionLauncher =
            registerForActivityResult(new ActivityResultContracts.RequestPermission(), isGranted -> {
                if (isGranted) {
                    openGallery();
                } else {
                    Toast.makeText(this, "Permission required to select photo", Toast.LENGTH_SHORT).show();
                }
            });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my_profile);

        etName = findViewById(R.id.etName);
        etEmail = findViewById(R.id.etEmail);
        btnEditSave = findViewById(R.id.btnEditSave);
        btnChangeImage = findViewById(R.id.btnChangeImage);
        ivProfileImage = findViewById(R.id.ivProfileImage);
        progressBar = findViewById(R.id.progressBar);

        apiService = ApiClient.getClient(this).create(AuthApiService.class);
        tokenManager = TokenManager.getInstance(this);

        loadData();

        btnEditSave.setOnClickListener(v -> {
            if (!isEditing) {
                isEditing = true;
                etName.setEnabled(true);
                etEmail.setEnabled(true);
                btnEditSave.setText("Save Changes");
            } else {
                saveData();
            }
        });

        btnChangeImage.setOnClickListener(v -> checkPermissionAndOpenGallery());
    }

    private void checkPermissionAndOpenGallery() {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.TIRAMISU) {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.READ_MEDIA_IMAGES)
                    == PackageManager.PERMISSION_GRANTED) {
                openGallery();
            } else {
                requestPermissionLauncher.launch(Manifest.permission.READ_MEDIA_IMAGES);
            }
        } else {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.READ_EXTERNAL_STORAGE)
                    == PackageManager.PERMISSION_GRANTED) {
                openGallery();
            } else {
                requestPermissionLauncher.launch(Manifest.permission.READ_EXTERNAL_STORAGE);
            }
        }
    }

    private void openGallery() {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        photoPickerLauncher.launch(intent);
    }

    private String getRealPathFromURI(Uri uri) {
        String result = null;
        String[] proj = {MediaStore.Images.Media.DATA};
        Cursor cursor = getContentResolver().query(uri, proj, null, null, null);
        if (cursor != null) {
            if (cursor.moveToFirst()) {
                int column_index = cursor.getColumnIndexOrThrow(proj[0]);
                result = cursor.getString(column_index);
            }
            cursor.close();
        }
        return result;
    }

    private void uploadProfileImage(Uri uri) {
        String realPath = getRealPathFromURI(uri);
        if (realPath == null) {
            Toast.makeText(this, "Failed to get image path", Toast.LENGTH_SHORT).show();
            return;
        }

        setLoading(true);
        File file = new File(realPath);
        RequestBody reqFile = RequestBody.create(MediaType.parse("image/*"), file);
        MultipartBody.Part imagePart = MultipartBody.Part.createFormData("image", file.getName(), reqFile);

        apiService.uploadProfileImage(tokenManager.getUserId(), imagePart).enqueue(new Callback<ApiResponse<com.outfitstudio.api.models.UploadImageResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<com.outfitstudio.api.models.UploadImageResponse>> call, Response<ApiResponse<com.outfitstudio.api.models.UploadImageResponse>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(MyProfileActivity.this, "Profile image updated!", Toast.LENGTH_SHORT).show();
                } else {
                    Toast.makeText(MyProfileActivity.this, "Failed to upload image", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<com.outfitstudio.api.models.UploadImageResponse>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(MyProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
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
                        if (data.getUser().getProfileImage() != null) {
                            String baseUrl = ApiClient.BASE_URL.replace("api/", "");
                            String imageUrl = baseUrl + data.getUser().getProfileImage().replace("\\", "/");
                            if (imageUrl.contains("/uploads/profiles/")) {
                                Glide.with(MyProfileActivity.this).load(imageUrl).into(ivProfileImage);
                            }
                        }
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
        String newEmail = etEmail.getText().toString();
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(newName, newEmail);
        
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
                    etEmail.setEnabled(false);
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
