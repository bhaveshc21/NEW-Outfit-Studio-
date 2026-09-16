package com.outfitstudio;

import android.os.Bundle;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.google.gson.Gson;
import com.outfitstudio.api.models.ShoppingAnalysis;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.util.ArrayList;
import java.util.List;

public class ShoppingResultActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private OutfitAdapter adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_shopping_result);

        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        // Get JSON string from intent
        String jsonAnalysis = getIntent().getStringExtra("shopping_data");
        
        if (jsonAnalysis != null && !jsonAnalysis.isEmpty()) {
            ShoppingAnalysis analysis = new Gson().fromJson(jsonAnalysis, ShoppingAnalysis.class);
            
            TextView tvCompatibilityScore = findViewById(R.id.tvCompatibilityScore);
            TextView tvVerdict = findViewById(R.id.tvVerdict);
            
            tvCompatibilityScore.setText(analysis.getCompatibilityScore() + "%");
            tvVerdict.setText(analysis.getVerdict());
            
            List<GeneratedOutfit> outfitList = analysis.getOutfits() != null ? analysis.getOutfits() : new ArrayList<>();

            adapter = new OutfitAdapter(this, outfitList);
            recyclerView.setAdapter(adapter);
        }
    }
}
