package com.outfitstudio;

import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;

import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;

public class VirtualTryOnResultActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_virtual_try_on_result);

        ImageView ivResultImage = findViewById(R.id.ivResultImage);
        Button btnDone = findViewById(R.id.btnDone);

        String imageUrl = getIntent().getStringExtra("image_url");

        if (imageUrl != null) {
            String fullUrl = ApiClient.BASE_URL.replace("api/", "") + imageUrl;
            Glide.with(this)
                    .load(fullUrl)
                    .into(ivResultImage);
        }

        btnDone.setOnClickListener(v -> finish());
    }
}
