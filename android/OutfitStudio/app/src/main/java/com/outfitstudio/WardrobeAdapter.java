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

    private boolean showUsageStatus;

    public WardrobeAdapter(Context context, List<WardrobeItem> items) {
        this(context, items, false);
    }

    public WardrobeAdapter(Context context, List<WardrobeItem> items, boolean showUsageStatus) {
        this.context = context;
        this.items = items;
        this.showUsageStatus = showUsageStatus;
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
        holder.tvCategory.setText(item.getCategory());
        holder.tvColor.setText(item.getColor());

        if (item.getImagePath() != null) {
            String imageUrl = "http://192.168.1.103:5000/" + item.getImagePath().replace("\\", "/");
            Glide.with(context)
                    .load(imageUrl)
                    .centerCrop()
                    .into(holder.ivImage);
        } else {
            // Load a placeholder or just leave empty
            holder.ivImage.setImageResource(android.R.color.transparent);
        }

        if (showUsageStatus) {
            holder.tvUsageStatus.setVisibility(View.VISIBLE);
            String formattedDate = "Never";
            if (item.getLastWornAt() != null) {
                formattedDate = item.getLastWornAt();
                try {
                    if (formattedDate.contains("T")) {
                        formattedDate = formattedDate.split("T")[0];
                    } else if (formattedDate.contains(" ")) {
                        formattedDate = formattedDate.split(" ")[0];
                    }
                } catch (Exception e) {
                    // Ignore, use fallback
                }
            }
            holder.tvUsageStatus.setText("Last Worn:\n" + formattedDate);
            holder.tvUsageCount.setVisibility(View.VISIBLE);
            holder.tvUsageCount.setText("Times Worn: " + item.getUsageCount());
        } else {
            holder.tvUsageStatus.setVisibility(View.GONE);
            holder.tvUsageCount.setVisibility(View.GONE);
        }

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
        TextView tvCategory, tvColor, tvUsageStatus, tvUsageCount;

        public WardrobeViewHolder(@NonNull View itemView) {
            super(itemView);
            ivImage = itemView.findViewById(R.id.ivClothingImage);
            tvCategory = itemView.findViewById(R.id.tvClothingCategory);
            tvColor = itemView.findViewById(R.id.tvClothingColor);
            tvUsageStatus = itemView.findViewById(R.id.tvUsageStatus);
            tvUsageCount = itemView.findViewById(R.id.tvUsageCount);
        }
    }
}
