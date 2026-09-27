package com.outfitstudio;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.models.GeneratedOutfit;

import java.util.List;
import java.util.Set;
import java.util.HashSet;
import android.widget.CheckBox;
import android.widget.CompoundButton;

public class OutfitAdapter extends RecyclerView.Adapter<OutfitAdapter.OutfitViewHolder> {

    private Context context;
    private List<GeneratedOutfit> outfits;
    private Set<GeneratedOutfit> selectedOutfits = new HashSet<>();
    
    // Change if hosting backend elsewhere or using emulator 10.0.2.2
    private static final String BASE_IMAGE_URL = "http://192.168.1.12:5000/";

    public OutfitAdapter(Context context, List<GeneratedOutfit> outfits) {
        this.context = context;
        this.outfits = outfits;
    }

    public List<GeneratedOutfit> getSelectedOutfits() {
        return new java.util.ArrayList<>(selectedOutfits);
    }

    @NonNull
    @Override
    public OutfitViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_outfit_card, parent, false);
        return new OutfitViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull OutfitViewHolder holder, int position) {
        GeneratedOutfit outfit = outfits.get(position);
        
        holder.tvScore.setText(String.format("Recommendation Score: %.1f", outfit.getRecommendationScore()));
        holder.tvReason.setText(outfit.getReason());
        
        if (outfit.getTop() != null && outfit.getTop().getImagePath() != null) {
            holder.tvTopName.setText(outfit.getTop().getName());
            String topPath = outfit.getTop().getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + topPath)
                 .centerCrop()
                 .into(holder.ivTop);
        }
        
        if (outfit.getOuterwear() != null && outfit.getOuterwear().getImagePath() != null) {
            holder.layoutOuterwear.setVisibility(View.VISIBLE);
            holder.tvOuterwearName.setText(outfit.getOuterwear().getName());
            String outPath = outfit.getOuterwear().getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + outPath)
                 .centerCrop()
                 .into(holder.ivOuterwear);
        } else {
            holder.layoutOuterwear.setVisibility(View.GONE);
        }
        
        if (outfit.getBottom() != null && outfit.getBottom().getImagePath() != null) {
            holder.tvBottomName.setText(outfit.getBottom().getName());
            String bottomPath = outfit.getBottom().getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + bottomPath)
                 .centerCrop()
                 .into(holder.ivBottom);
        }
        
        if (outfit.getFootwear() != null && outfit.getFootwear().getImagePath() != null) {
            holder.tvFootwearName.setText(outfit.getFootwear().getName());
            String footwearPath = outfit.getFootwear().getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + footwearPath)
                 .centerCrop()
                 .into(holder.ivFootwear);
        }
        
        holder.btnRateOutfit.setOnClickListener(v -> {
            android.content.Intent intent = new android.content.Intent(context, FashionScoreActivity.class);
            com.google.gson.Gson gson = new com.google.gson.Gson();
            intent.putExtra("outfit_json", gson.toJson(outfit));
            if (context instanceof android.app.Activity) {
                android.app.Activity activity = (android.app.Activity) context;
                String occasion = activity.getIntent().getStringExtra("occasion");
                if (occasion != null) {
                    intent.putExtra("occasion", occasion);
                }
            }
            context.startActivity(intent);
        });

        holder.btnExplainOutfit.setOnClickListener(v -> {
            android.content.Intent intent = new android.content.Intent(context, OutfitExplanationActivity.class);
            com.google.gson.Gson gson = new com.google.gson.Gson();
            intent.putExtra("outfit_json", gson.toJson(outfit));
            if (context instanceof android.app.Activity) {
                android.app.Activity activity = (android.app.Activity) context;
                String occasion = activity.getIntent().getStringExtra("occasion");
                if (occasion != null) {
                    intent.putExtra("occasion", occasion);
                }
            }
            context.startActivity(intent);
        });

        holder.cbSelect.setOnCheckedChangeListener(null);
        holder.cbSelect.setChecked(selectedOutfits.contains(outfit));
        holder.cbSelect.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked) {
                selectedOutfits.add(outfit);
            } else {
                selectedOutfits.remove(outfit);
            }
        });
    }

    @Override
    public int getItemCount() {
        return outfits == null ? 0 : outfits.size();
    }

    public static class OutfitViewHolder extends RecyclerView.ViewHolder {
        TextView tvScore, tvReason;
        TextView tvTopName, tvOuterwearName, tvBottomName, tvFootwearName;
        ImageView ivTop, ivOuterwear, ivBottom, ivFootwear;
        View layoutOuterwear;
        android.widget.Button btnRateOutfit, btnExplainOutfit;
        CheckBox cbSelect;

        public OutfitViewHolder(@NonNull View itemView) {
            super(itemView);
            tvScore = itemView.findViewById(R.id.tvScore);
            tvReason = itemView.findViewById(R.id.tvReason);
            tvTopName = itemView.findViewById(R.id.tvTopName);
            tvOuterwearName = itemView.findViewById(R.id.tvOuterwearName);
            tvBottomName = itemView.findViewById(R.id.tvBottomName);
            tvFootwearName = itemView.findViewById(R.id.tvFootwearName);
            ivTop = itemView.findViewById(R.id.ivTop);
            ivOuterwear = itemView.findViewById(R.id.ivOuterwear);
            ivBottom = itemView.findViewById(R.id.ivBottom);
            ivFootwear = itemView.findViewById(R.id.ivFootwear);
            layoutOuterwear = itemView.findViewById(R.id.layoutOuterwear);
            btnRateOutfit = itemView.findViewById(R.id.btnRateOutfit);
            btnExplainOutfit = itemView.findViewById(R.id.btnExplainOutfit);
            cbSelect = itemView.findViewById(R.id.cbSelect);
        }
    }
}
