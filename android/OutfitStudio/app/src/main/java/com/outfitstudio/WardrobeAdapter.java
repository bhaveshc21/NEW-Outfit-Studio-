package com.outfitstudio;

import android.content.Context;
import android.content.Intent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.models.WardrobeItem;

import java.util.List;

public class WardrobeAdapter extends RecyclerView.Adapter<WardrobeAdapter.WardrobeViewHolder> {

    private Context context;
    private List<WardrobeItem> items;

    public WardrobeAdapter(Context context, List<WardrobeItem> items) {
        this.context = context;
        this.items = items;
    }

    public void updateData(List<WardrobeItem> newItems) {
        this.items = newItems;
        notifyDataSetChanged();
    }

    @NonNull
    @Override
    public WardrobeViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_wardrobe_card, parent, false);
        return new WardrobeViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull WardrobeViewHolder holder, int position) {
        WardrobeItem item = items.get(position);
        holder.tvName.setText(item.getName());
        holder.tvCategory.setText(item.getCategory());
        holder.tvColor.setText(item.getColor());

        String imageUrl = "http://192.168.1.102:5000/" + item.getImagePath().replace("\\", "/");
        
        Glide.with(context)
                .load(imageUrl)
                .centerCrop()
                .into(holder.ivImage);

        holder.itemView.setOnClickListener(v -> {
            Intent intent = new Intent(context, ClothingDetailsActivity.class);
            intent.putExtra("ITEM_ID", item.getId());
            context.startActivity(intent);
        });
    }

    @Override
    public int getItemCount() {
        return items != null ? items.size() : 0;
    }

    public static class WardrobeViewHolder extends RecyclerView.ViewHolder {
        ImageView ivImage;
        TextView tvName, tvCategory, tvColor;

        public WardrobeViewHolder(@NonNull View itemView) {
            super(itemView);
            ivImage = itemView.findViewById(R.id.ivClothingImage);
            tvName = itemView.findViewById(R.id.tvClothingName);
            tvCategory = itemView.findViewById(R.id.tvClothingCategory);
            tvColor = itemView.findViewById(R.id.tvClothingColor);
        }
    }
}
