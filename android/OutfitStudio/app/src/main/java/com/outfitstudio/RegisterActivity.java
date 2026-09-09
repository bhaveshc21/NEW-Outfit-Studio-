package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class RegisterActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_register);

        Button btnRegister = findViewById(R.id.btnRegister);
        TextView tvToLogin = findViewById(R.id.tvToLogin);

        btnRegister.setOnClickListener(v -> {
            // Placeholder: Registration logic will go here
            // On success, go to Home or Login
            startActivity(new Intent(RegisterActivity.this, HomeActivity.class));
            finish();
        });

        tvToLogin.setOnClickListener(v -> {
            // Navigate back to Login
            finish();
        });
    }
}
