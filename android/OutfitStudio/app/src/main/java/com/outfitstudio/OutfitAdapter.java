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

public class OutfitAdapter extends RecyclerView.Adapter<OutfitAdapter.OutfitViewHolder> {

    private Context context;
    private List<GeneratedOutfit> outfits;
    
    // Change if hosting backend elsewhere or using emulator 10.0.2.2
    private static final String BASE_IMAGE_URL = "http://10.0.2.2:5000/";

    public OutfitAdapter(Context context, List<GeneratedOutfit> outfits) {
        this.context = context;
        this.outfits = outfits;
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
        
        holder.tvScore.setText("Recommendation Score: " + outfit.getRecommendationScore());
        holder.tvReason.setText(outfit.getReason());
        
        if (outfit.getTop() != null && outfit.getTop().getImagePath() != null) {
            holder.tvTopName.setText(outfit.getTop().getName());
            String topPath = outfit.getTop().getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + topPath)
                 .centerCrop()
                 .into(holder.ivTop);
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
    }

    @Override
    public int getItemCount() {
        return outfits == null ? 0 : outfits.size();
    }

    public static class OutfitViewHolder extends RecyclerView.ViewHolder {
        TextView tvScore, tvReason;
        TextView tvTopName, tvBottomName, tvFootwearName;
        ImageView ivTop, ivBottom, ivFootwear;

        public OutfitViewHolder(@NonNull View itemView) {
            super(itemView);
            tvScore = itemView.findViewById(R.id.tvScore);
            tvReason = itemView.findViewById(R.id.tvReason);
            tvTopName = itemView.findViewById(R.id.tvTopName);
            tvBottomName = itemView.findViewById(R.id.tvBottomName);
            tvFootwearName = itemView.findViewById(R.id.tvFootwearName);
            ivTop = itemView.findViewById(R.id.ivTop);
            ivBottom = itemView.findViewById(R.id.ivBottom);
            ivFootwear = itemView.findViewById(R.id.ivFootwear);
        }
    }
}
