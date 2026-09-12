package com.outfitstudio;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.List;

public class RecommendedOutfitActivity extends AppCompatActivity {

    private RecyclerView recyclerView;
    private OutfitAdapter adapter;
    private List<GeneratedOutfit> outfitList;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_recommended_outfit);

        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        // Get JSON string from intent
        String jsonOutfits = getIntent().getStringExtra("outfits_json");
        
        if (jsonOutfits != null && !jsonOutfits.isEmpty()) {
            Type listType = new TypeToken<ArrayList<GeneratedOutfit>>(){}.getType();
            outfitList = new Gson().fromJson(jsonOutfits, listType);
        } else {
            outfitList = new ArrayList<>();
        }

        adapter = new OutfitAdapter(this, outfitList);
        recyclerView.setAdapter(adapter);
    }
}
