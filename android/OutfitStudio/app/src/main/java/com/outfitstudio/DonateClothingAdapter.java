package com.outfitstudio;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertDialog;
import androidx.recyclerview.widget.RecyclerView;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.WardrobeApiService;
import com.outfitstudio.api.models.WardrobeItem;
import com.outfitstudio.api.models.WardrobeResponse;

import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class DonateClothingAdapter extends RecyclerView.Adapter<DonateClothingAdapter.ViewHolder> {

    private Context context;
    private List<WardrobeItem> items;
    private WardrobeApiService apiService;

    public DonateClothingAdapter(Context context, List<WardrobeItem> items, WardrobeApiService apiService) {
        this.context = context;
        this.items = items;
        this.apiService = apiService;
    }

    public void updateData(List<WardrobeItem> newItems) {
        this.items = newItems;
        notifyDataSetChanged();
    }

    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_wardrobe_card, parent, false);
        return new ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        WardrobeItem item = items.get(position);
        holder.tvCategory.setText(item.getCategory());
        holder.tvColor.setText(item.getColor());

        String imageUrl = "http://192.168.1.103:5000/" + item.getImagePath().replace("\\", "/");
        
        Glide.with(context)
                .load(imageUrl)
                .centerCrop()
                .into(holder.ivImage);

        holder.tvUsageStatus.setVisibility(View.VISIBLE);
        holder.tvUsageStatus.setText("Status: " + (item.getUsageStatus() != null ? item.getUsageStatus() : "Unknown"));

        holder.itemView.setOnClickListener(v -> showConfirmationDialog(item));
    }

    private void showConfirmationDialog(WardrobeItem item) {
        new AlertDialog.Builder(context)
            .setTitle("Donate " + item.getName() + "?")
            .setMessage("Are you sure you want to donate this item?\nThis item will be removed from your wardrobe.")
            .setPositiveButton("YES, DONATE", (dialog, which) -> donateItem(item))
            .setNegativeButton("CANCEL", null)
            .show();
    }

    private void donateItem(WardrobeItem item) {
        int userId = TokenManager.getInstance(context).getUserId();
        
        apiService.deleteWardrobeItem(item.getId(), userId).enqueue(new Callback<WardrobeResponse.EmptyResponse>() {
            @Override
            public void onResponse(Call<WardrobeResponse.EmptyResponse> call, Response<WardrobeResponse.EmptyResponse> response) {
                if (response.isSuccessful() && response.body() != null) {
                    if (response.body().isSuccess()) {
                        Toast.makeText(context, item.getName() + " has been removed from your wardrobe.", Toast.LENGTH_SHORT).show();
                        Intent intent = new Intent(context, DonationActivity.class);
                        context.startActivity(intent);
                        if (context instanceof Activity) {
                            ((Activity) context).finish();
                        }
                    } else {
                        Toast.makeText(context, response.body().getMessage(), Toast.LENGTH_SHORT).show();
                    }
                } else {
                    Toast.makeText(context, "Failed to donate item", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<WardrobeResponse.EmptyResponse> call, Throwable t) {
                Toast.makeText(context, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    @Override
    public int getItemCount() {
        return items != null ? items.size() : 0;
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {
        ImageView ivImage;
        TextView tvCategory, tvColor, tvUsageStatus;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);
            ivImage = itemView.findViewById(R.id.ivClothingImage);
            tvCategory = itemView.findViewById(R.id.tvClothingCategory);
            tvColor = itemView.findViewById(R.id.tvClothingColor);
            tvUsageStatus = itemView.findViewById(R.id.tvUsageStatus);
        }
    }
}
