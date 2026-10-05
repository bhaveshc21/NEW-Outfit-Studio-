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

public class NotificationsAdapter extends RecyclerView.Adapter<NotificationsAdapter.ViewHolder> {

    private Context context;
    private List<WardrobeItem> items;

    public NotificationsAdapter(Context context, List<WardrobeItem> items) {
        this.context = context;
        this.items = items;
    }

    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_notification, parent, false);
        return new ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        WardrobeItem item = items.get(position);
        
        // Ensure image URL is absolute
        String imageUrl = item.getImagePath();
        if (imageUrl != null && !imageUrl.startsWith("http")) {
            imageUrl = "http://192.168.1.12:5000/" + imageUrl.replace("\\", "/");
        }

        Glide.with(context)
                .load(imageUrl)
                .placeholder(R.color.background)
                .error(R.color.background)
                .into(holder.ivItemImage);
                
        holder.tvNotificationTitle.setText(item.getName() + " hasn't been used");
    }

    @Override
    public int getItemCount() {
        return items.size();
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {
        ImageView ivItemImage;
        TextView tvNotificationTitle;
        TextView tvNotificationMessage;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);
            ivItemImage = itemView.findViewById(R.id.ivItemImage);
            tvNotificationTitle = itemView.findViewById(R.id.tvNotificationTitle);
            tvNotificationMessage = itemView.findViewById(R.id.tvNotificationMessage);
        }
    }
}
