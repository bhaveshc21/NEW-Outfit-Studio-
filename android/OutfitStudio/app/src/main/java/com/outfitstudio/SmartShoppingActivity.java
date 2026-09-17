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
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.Spinner;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import com.google.android.material.textfield.TextInputEditText;
import com.google.gson.Gson;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.ShoppingApiService;
import com.outfitstudio.api.models.ShoppingResponse;

import java.io.ByteArrayOutputStream;
import java.io.InputStream;

import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.RequestBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class SmartShoppingActivity extends AppCompatActivity {

    private static final int REQUEST_IMAGE_CAPTURE = 1;
    private static final int REQUEST_IMAGE_PICK = 2;
    private static final int PERMISSION_REQUEST_CAMERA = 100;

    private ImageView ivClothingPreview;
    private View llImagePlaceholder;
    private Spinner spinnerCategory;
    private Button btnAnalyze;
    private ProgressBar progressBar;

    private Bitmap selectedBitmap = null;
    private ShoppingApiService apiService;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_smart_shopping);

        ivClothingPreview = findViewById(R.id.ivClothingPreview);
        llImagePlaceholder = findViewById(R.id.llImagePlaceholder);

        spinnerCategory = findViewById(R.id.spinnerCategory);
        btnAnalyze = findViewById(R.id.btnAnalyze);
        progressBar = findViewById(R.id.progressBar);

        Button btnCamera = findViewById(R.id.btnCamera);
        Button btnGallery = findViewById(R.id.btnGallery);

        apiService = ApiClient.getClient(this).create(ShoppingApiService.class);

        // Setup Spinner
        String[] categories = {"Unknown", "T-Shirts", "Shirts", "Jeans", "Trousers", "Jackets", "Sneakers", "Slippers", "Sandals", "Sports shoes", "Formal Shoes", "Heels", "Crocs"};
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_dropdown_item, categories);
        spinnerCategory.setAdapter(adapter);

        btnCamera.setOnClickListener(v -> showUploadGuidelinesDialog(this::checkCameraPermission));
        btnGallery.setOnClickListener(v -> showUploadGuidelinesDialog(this::openGallery));
        llImagePlaceholder.setOnClickListener(v -> openGallery());
        ivClothingPreview.setOnClickListener(v -> openGallery());
        btnAnalyze.setOnClickListener(v -> analyzePurchase());
    }

    private void showUploadGuidelinesDialog(Runnable onAccept) {
        new AlertDialog.Builder(this)
                .setTitle("Upload Guidelines")
                .setMessage("Please upload user face and clothes as clear image, with proper white background.")
                .setPositiveButton("Proceed", (dialog, which) -> onAccept.run())
                .setNegativeButton("Cancel", null)
                .show();
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
        try {
            startActivityForResult(takePictureIntent, REQUEST_IMAGE_CAPTURE);
        } catch (Exception e) {
            Toast.makeText(this, "No camera app found", Toast.LENGTH_SHORT).show();
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
                setImagePreview(selectedBitmap);
            } else if (requestCode == REQUEST_IMAGE_PICK) {
                Uri imageUri = data.getData();
                try {
                    InputStream imageStream = getContentResolver().openInputStream(imageUri);
                    selectedBitmap = BitmapFactory.decodeStream(imageStream);
                    setImagePreview(selectedBitmap);
                } catch (Exception e) {
                    e.printStackTrace();
                    Toast.makeText(this, "Failed to load image", Toast.LENGTH_SHORT).show();
                }
            }
        }
    }

    private void setImagePreview(Bitmap bitmap) {
        ivClothingPreview.setImageBitmap(bitmap);
        llImagePlaceholder.setVisibility(View.GONE);
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == PERMISSION_REQUEST_CAMERA) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                openCamera();
            } else {
                Toast.makeText(this, "Camera permission is required to take photos", Toast.LENGTH_SHORT).show();
            }
        }
    }

    private void analyzePurchase() {
        String category = spinnerCategory.getSelectedItem().toString();
        String color = "Unknown";
        int userId = TokenManager.getInstance(this).getUserId();

        if (selectedBitmap == null) {
            Toast.makeText(this, "Please select an image", Toast.LENGTH_SHORT).show();
            return;
        }
        if (userId == -1) {
            Toast.makeText(this, "User not logged in", Toast.LENGTH_SHORT).show();
            return;
        }

        setLoading(true);

        ByteArrayOutputStream stream = new ByteArrayOutputStream();
        selectedBitmap.compress(Bitmap.CompressFormat.JPEG, 80, stream);
        byte[] byteArray = stream.toByteArray();

        RequestBody requestFile = RequestBody.create(MediaType.parse("image/jpeg"), byteArray);
        MultipartBody.Part body = MultipartBody.Part.createFormData("image", "shopping_item.jpg", requestFile);
        
        RequestBody userIdBody = RequestBody.create(MediaType.parse("text/plain"), String.valueOf(userId));
        RequestBody categoryBody = RequestBody.create(MediaType.parse("text/plain"), category);
        RequestBody colorBody = RequestBody.create(MediaType.parse("text/plain"), color);

        apiService.analyzeShoppingItem(userIdBody, categoryBody, colorBody, body).enqueue(new Callback<ShoppingResponse>() {
            @Override
            public void onResponse(Call<ShoppingResponse> call, Response<ShoppingResponse> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        Intent intent = new Intent(SmartShoppingActivity.this, ShoppingResultActivity.class);
                        intent.putExtra("shopping_data", new Gson().toJson(response.body().getData()));
                        startActivity(intent);
                        finish();
                    } else {
                        Toast.makeText(SmartShoppingActivity.this, response.body().getMessage(), Toast.LENGTH_LONG).show();
                    }
                } else {
                    Toast.makeText(SmartShoppingActivity.this, "Failed to analyze clothing", Toast.LENGTH_LONG).show();
                }
            }

            @Override
            public void onFailure(Call<ShoppingResponse> call, Throwable t) {
                setLoading(false);
                Toast.makeText(SmartShoppingActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void setLoading(boolean isLoading) {
        btnAnalyze.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
