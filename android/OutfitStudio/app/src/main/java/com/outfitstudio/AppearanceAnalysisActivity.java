package com.outfitstudio;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AppearanceApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.AppearanceResponse;

import java.io.ByteArrayOutputStream;
import java.io.InputStream;

import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class AppearanceAnalysisActivity extends AppCompatActivity {

    private static final int REQUEST_IMAGE_CAPTURE = 1;
    private static final int REQUEST_IMAGE_PICK = 2;
    private static final int PERMISSION_REQUEST_CAMERA = 100;

    private ImageView ivPreview;
    private Button btnCamera, btnGallery, btnAnalyze;
    private ProgressBar progressBar;
    private LinearLayout llResults;
    private TextView tvFaceShape, tvSkinTone, tvBodyType;

    private Bitmap selectedBitmap = null;
    private AppearanceApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_appearance_analysis);

        ivPreview = findViewById(R.id.ivPreview);
        btnCamera = findViewById(R.id.btnCamera);
        btnGallery = findViewById(R.id.btnGallery);
        btnAnalyze = findViewById(R.id.btnAnalyze);
        progressBar = findViewById(R.id.progressBar);
        llResults = findViewById(R.id.llResults);
        tvFaceShape = findViewById(R.id.tvFaceShape);
        tvSkinTone = findViewById(R.id.tvSkinTone);
        tvBodyType = findViewById(R.id.tvBodyType);

        apiService = ApiClient.getClient(this).create(AppearanceApiService.class);

        btnCamera.setOnClickListener(v -> checkCameraPermission());
        btnGallery.setOnClickListener(v -> openGallery());
        btnAnalyze.setOnClickListener(v -> analyzeAppearance());

        loadExistingAnalysis();
    }

    private void checkCameraPermission() {
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, new String[]{Manifest.permission.CAMERA}, PERMISSION_REQUEST_CAMERA);
        } else {
            openCamera();
        }
    }

    private void openCamera() {
        Intent takePictureIntent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        if (takePictureIntent.resolveActivity(getPackageManager()) != null) {
            startActivityForResult(takePictureIntent, REQUEST_IMAGE_CAPTURE);
        }
    }

    private void openGallery() {
        Intent intent = new Intent(Intent.ACTION_GET_CONTENT);
        intent.setType("image/*");
        startActivityForResult(Intent.createChooser(intent, "Select Picture"), REQUEST_IMAGE_PICK);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (resultCode == RESULT_OK && data != null) {
            if (requestCode == REQUEST_IMAGE_CAPTURE) {
                Bundle extras = data.getExtras();
                selectedBitmap = (Bitmap) extras.get("data");
                ivPreview.setImageBitmap(selectedBitmap);
            } else if (requestCode == REQUEST_IMAGE_PICK) {
                Uri imageUri = data.getData();
                try {
                    InputStream imageStream = getContentResolver().openInputStream(imageUri);
                    selectedBitmap = BitmapFactory.decodeStream(imageStream);
                    ivPreview.setImageBitmap(selectedBitmap);
                } catch (Exception e) {
                    e.printStackTrace();
                    Toast.makeText(this, "Failed to load image", Toast.LENGTH_SHORT).show();
                }
            }
        }
    }

    private void analyzeAppearance() {
        if (selectedBitmap == null) {
            Toast.makeText(this, "Please select an image first", Toast.LENGTH_SHORT).show();
            return;
        }

        int userId = TokenManager.getInstance(this).getUserId();
        if (userId == -1) {
            Toast.makeText(this, "User not logged in", Toast.LENGTH_SHORT).show();
            return;
        }

        setLoading(true);

        ByteArrayOutputStream stream = new ByteArrayOutputStream();
        selectedBitmap.compress(Bitmap.CompressFormat.JPEG, 80, stream);
        byte[] byteArray = stream.toByteArray();

        RequestBody requestFile = RequestBody.create(MediaType.parse("image/jpeg"), byteArray);
        MultipartBody.Part body = MultipartBody.Part.createFormData("image", "upload.jpg", requestFile);
        RequestBody userIdBody = RequestBody.create(MediaType.parse("text/plain"), String.valueOf(userId));

        apiService.analyzeAppearance(userIdBody, body).enqueue(new Callback<AppearanceResponse>() {
            @Override
            public void onResponse(Call<AppearanceResponse> call, Response<AppearanceResponse> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null) {
                    AppearanceResponse res = response.body();
                    if (res.isSuccess() && res.getData() != null) {
                        displayResults(res.getData());
                        Toast.makeText(AppearanceAnalysisActivity.this, "Analysis Complete", Toast.LENGTH_SHORT).show();
                    } else {
                        Toast.makeText(AppearanceAnalysisActivity.this, res.getMessage(), Toast.LENGTH_LONG).show();
                    }
                } else {
                    try {
                        String errorBody = response.errorBody().string();
                        Toast.makeText(AppearanceAnalysisActivity.this, "Error: " + errorBody, Toast.LENGTH_LONG).show();
                    } catch (Exception e) {
                        Toast.makeText(AppearanceAnalysisActivity.this, "Server error or invalid response", Toast.LENGTH_LONG).show();
                    }
                }
            }

            @Override
            public void onFailure(Call<AppearanceResponse> call, Throwable t) {
                setLoading(false);
                Toast.makeText(AppearanceAnalysisActivity.this, "Network error: " + t.getMessage(), Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void loadExistingAnalysis() {
        int userId = TokenManager.getInstance(this).getUserId();
        if (userId != -1) {
            apiService.getAppearance(userId).enqueue(new Callback<AppearanceResponse>() {
                @Override
                public void onResponse(Call<AppearanceResponse> call, Response<AppearanceResponse> response) {
                    if (response.isSuccessful() && response.body() != null) {
                        AppearanceResponse res = response.body();
                        if (res.isSuccess() && res.getData() != null) {
                            displayResults(res.getData());
                        }
                    }
                }

                @Override
                public void onFailure(Call<AppearanceResponse> call, Throwable t) {
                    // Ignore
                }
            });
        }
    }

    private void displayResults(AppearanceResponse.AppearanceData data) {
        llResults.setVisibility(View.VISIBLE);
        tvFaceShape.setText("Estimated: " + (data.getFaceShape() != null ? data.getFaceShape() : "Unknown"));
        tvSkinTone.setText("Estimated: " + (data.getSkinTone() != null ? data.getSkinTone() : "Unknown"));
        tvBodyType.setText("Estimated: " + (data.getBodyType() != null ? data.getBodyType() : "Unknown"));
    }

    private void setLoading(boolean isLoading) {
        btnAnalyze.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
