package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;

public class OccasionSelectionActivity extends AppCompatActivity {

    private RadioGroup rgOccasions;
    private Button btnContinue;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_occasion_selection);

        rgOccasions = findViewById(R.id.rgOccasions);
        btnContinue = findViewById(R.id.btnContinue);

        btnContinue.setOnClickListener(v -> {
            int selectedId = rgOccasions.getCheckedRadioButtonId();
            if (selectedId == -1) {
                Toast.makeText(this, "Please select an occasion", Toast.LENGTH_SHORT).show();
                return;
            }

            RadioButton selectedButton = findViewById(selectedId);
            String occasion = selectedButton.getText().toString();

            // We move to GenerateOutfitActivity which will now act as the loading/weather-fetching screen
            Intent intent = new Intent(this, GenerateOutfitActivity.class);
            intent.putExtra("occasion", occasion);
            startActivity(intent);
        });
    }
}
