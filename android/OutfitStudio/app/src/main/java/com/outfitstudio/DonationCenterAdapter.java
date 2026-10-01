package com.outfitstudio;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.outfitstudio.models.DonationCenter;

import java.util.List;

public class DonationCenterAdapter extends RecyclerView.Adapter<DonationCenterAdapter.ViewHolder> {

    private Context context;
    private List<DonationCenter> donationCenters;

    public DonationCenterAdapter(Context context, List<DonationCenter> donationCenters) {
        this.context = context;
        this.donationCenters = donationCenters;
    }

    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.item_donation_center, parent, false);
        return new ViewHolder(view);
    }

    @Override
    public void onBindViewHolder(@NonNull ViewHolder holder, int position) {
        DonationCenter center = donationCenters.get(position);
        holder.tvName.setText(center.getName());
        holder.tvAddress.setText(center.getAddress());

        if (center.getPhone() != null && !center.getPhone().isEmpty()) {
            holder.tvPhone.setText(center.getPhone());
            holder.tvPhone.setVisibility(View.VISIBLE);
            holder.tvPhone.setOnClickListener(v -> {
                Intent intent = new Intent(Intent.ACTION_DIAL);
                // Extract only numbers and '+' from phone string
                String rawPhone = center.getPhone().replaceAll("[^0-9+]", "");
                intent.setData(Uri.parse("tel:" + rawPhone));
                context.startActivity(intent);
            });
        } else {
            holder.tvPhone.setVisibility(View.GONE);
            holder.tvPhone.setOnClickListener(null);
        }

        if (center.getHours() != null && !center.getHours().isEmpty()) {
            holder.tvHours.setText(center.getHours());
            holder.tvHours.setVisibility(View.VISIBLE);
        } else {
            holder.tvHours.setVisibility(View.GONE);
        }

        holder.btnGetDirections.setOnClickListener(v -> openGoogleMaps(center.getMapsQuery(), true));
    }

    @Override
    public int getItemCount() {
        return donationCenters.size();
    }

    private void openGoogleMaps(String destination, boolean isDirections) {
        try {
            Uri gmmIntentUri;
            if (isDirections) {
                gmmIntentUri = Uri.parse("google.navigation:q=" + Uri.encode(destination));
            } else {
                gmmIntentUri = Uri.parse("geo:0,0?q=" + Uri.encode(destination));
            }
            Intent mapIntent = new Intent(Intent.ACTION_VIEW, gmmIntentUri);
            mapIntent.setPackage("com.google.android.apps.maps");
            if (mapIntent.resolveActivity(context.getPackageManager()) != null) {
                context.startActivity(mapIntent);
            } else {
                // Fallback to browser
                String url = isDirections ? 
                    "https://www.google.com/maps/dir/?api=1&destination=" + Uri.encode(destination) : 
                    "https://www.google.com/maps/search/?api=1&query=" + Uri.encode(destination);
                Intent browserIntent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
                context.startActivity(browserIntent);
            }
        } catch (Exception e) {
            Toast.makeText(context, "Could not open Maps", Toast.LENGTH_SHORT).show();
        }
    }

    public static class ViewHolder extends RecyclerView.ViewHolder {
        TextView tvName, tvAddress, tvPhone, tvHours;
        Button btnGetDirections;

        public ViewHolder(@NonNull View itemView) {
            super(itemView);
            tvName = itemView.findViewById(R.id.tvName);
            tvAddress = itemView.findViewById(R.id.tvAddress);
            tvPhone = itemView.findViewById(R.id.tvPhone);
            tvHours = itemView.findViewById(R.id.tvHours);
            btnGetDirections = itemView.findViewById(R.id.btnGetDirections);
        }
    }
}
