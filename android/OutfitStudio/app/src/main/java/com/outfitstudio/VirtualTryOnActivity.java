package com.outfitstudio;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import com.google.gson.Gson;
import com.google.gson.JsonObject;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.VirtualTryOnApiService;
import com.outfitstudio.models.VirtualTryOnResponse;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class VirtualTryOnActivity extends AppCompatActivity {

    private ProgressBar progressBar;
    private String outfitJson = null;
    private ImageView ivUserPhoto;
    private Button btnSelectPhoto;
    private Button btnGenerate;
    private Uri selectedPhotoUri = null;

    private final ActivityResultLauncher<Intent> photoPickerLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), result -> {
                if (result.getResultCode() == RESULT_OK && result.getData() != null) {
                    selectedPhotoUri = result.getData().getData();
                    if (selectedPhotoUri != null) {
                        ivUserPhoto.setImageURI(selectedPhotoUri);
                        btnGenerate.setEnabled(true);
                    }
                }
            });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_virtual_try_on);

        progressBar = findViewById(R.id.progressBar);
        ivUserPhoto = findViewById(R.id.ivUserPhoto);
        btnSelectPhoto = findViewById(R.id.btnSelectPhoto);
        btnGenerate = findViewById(R.id.btnGenerate);
        
        // Hide UI elements to directly generate the image
        ivUserPhoto.setVisibility(View.GONE);
        btnSelectPhoto.setVisibility(View.GONE);
        btnGenerate.setVisibility(View.GONE);

        outfitJson = getIntent().getStringExtra("outfit_json");

        if (outfitJson == null || outfitJson.isEmpty()) {
            Toast.makeText(this, "Invalid outfit data", Toast.LENGTH_SHORT).show();
            finish();
            return;
        }

        // Trigger automatically
        generateTryOn();
    }

    private void generateTryOn() {
        progressBar.setVisibility(View.VISIBLE);

        Object outfitDataObj = new Gson().fromJson(outfitJson, Object.class);
        com.outfitstudio.models.VirtualTryOnRequest request = new com.outfitstudio.models.VirtualTryOnRequest(outfitDataObj);

        VirtualTryOnApiService apiService = ApiClient.getClient(this).create(VirtualTryOnApiService.class);
        apiService.generateTryOnJson(request).enqueue(new Callback<VirtualTryOnResponse>() {
            @Override
            public void onResponse(@NonNull Call<VirtualTryOnResponse> call, @NonNull Response<VirtualTryOnResponse> response) {
                progressBar.setVisibility(View.GONE);

                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    String imageUrl = response.body().getData().getImageUrl();
                    Intent intent = new Intent(VirtualTryOnActivity.this, VirtualTryOnResultActivity.class);
                    intent.putExtra("image_url", imageUrl);
                    startActivity(intent);
                    finish();
                } else {
                    String msg = "Failed to generate try-on";
                    if (response.body() != null && response.body().getMessage() != null) {
                        msg = response.body().getMessage();
                    } else if (response.errorBody() != null) {
                        try {
                            String errorStr = response.errorBody().string();
                            JsonObject errorJson = new Gson().fromJson(errorStr, JsonObject.class);
                            if (errorJson.has("message")) {
                                msg = errorJson.get("message").getAsString();
                            }
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                    Toast.makeText(VirtualTryOnActivity.this, msg, Toast.LENGTH_LONG).show();
                    finish(); // Go back on failure
                }
            }

            @Override
            public void onFailure(@NonNull Call<VirtualTryOnResponse> call, @NonNull Throwable t) {
                progressBar.setVisibility(View.GONE);
                Toast.makeText(VirtualTryOnActivity.this, "Network Error: " + t.getMessage(), Toast.LENGTH_LONG).show();
                finish(); // Go back on failure
            }
        });
    }
}
