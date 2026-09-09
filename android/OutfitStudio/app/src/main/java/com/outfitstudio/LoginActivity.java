package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class LoginActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        Button btnLogin = findViewById(R.id.btnLogin);
        TextView tvToRegister = findViewById(R.id.tvToRegister);

        btnLogin.setOnClickListener(v -> {
            // Placeholder: navigate to Home on login click
            startActivity(new Intent(LoginActivity.this, HomeActivity.class));
            finish();
        });

        tvToRegister.setOnClickListener(v -> {
            // Navigate to Register
            startActivity(new Intent(LoginActivity.this, RegisterActivity.class));
        });
    }
}
