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
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.models.WardrobeItem;

import java.util.List;

public class DonationBinAdapter extends RecyclerView.Adapter<DonationBinAdapter.DonationBinViewHolder> {

    private Context context;
    private List<WardrobeItem> items;
    private static final String BASE_IMAGE_URL = ApiClient.BASE_URL.replace("api/", "");

    public DonationBinAdapter(Context context, List<WardrobeItem> items) {
        this.context = context;
        this.items = items;
    }

    @NonNull
    @Override
    public DonationBinViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_wardrobe_card, parent, false);
        return new DonationBinViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull DonationBinViewHolder holder, int position) {
        WardrobeItem item = items.get(position);

        holder.tvClothingCategory.setText(item.getCategory() != null ? item.getCategory() : "Category");
        holder.tvClothingColor.setText(item.getColor() != null ? "Color: " + item.getColor() : "Color");
        holder.tvUsageStatus.setText("Donated");
        holder.tvUsageStatus.setTextColor(context.getResources().getColor(R.color.primary));

        if (item.getImagePath() != null) {
            String imagePath = item.getImagePath().replace("\\", "/");
            Glide.with(context)
                 .load(BASE_IMAGE_URL + imagePath)
                 .centerCrop()
                 .into(holder.ivClothingImage);
        } else {
            holder.ivClothingImage.setImageResource(android.R.color.darker_gray);
        }
    }

    @Override
    public int getItemCount() {
        return items == null ? 0 : items.size();
    }

    public static class DonationBinViewHolder extends RecyclerView.ViewHolder {
        ImageView ivClothingImage;
        TextView tvClothingCategory, tvClothingColor, tvUsageStatus;

        public DonationBinViewHolder(@NonNull View itemView) {
            super(itemView);
            ivClothingImage = itemView.findViewById(R.id.ivClothingImage);
            tvClothingCategory = itemView.findViewById(R.id.tvClothingCategory);
            tvClothingColor = itemView.findViewById(R.id.tvClothingColor);
            tvUsageStatus = itemView.findViewById(R.id.tvUsageStatus);
        }
    }
}
