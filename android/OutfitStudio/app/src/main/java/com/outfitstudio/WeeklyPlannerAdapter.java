package com.outfitstudio;

import android.content.Context;
import android.graphics.Color;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.appcompat.app.AlertDialog;
import androidx.recyclerview.widget.RecyclerView;
import com.bumptech.glide.Glide;
import com.outfitstudio.api.models.GeneratedOutfit;
import com.outfitstudio.api.models.PlannedDay;
import com.outfitstudio.api.models.WardrobeItem;
import java.util.List;

public class WeeklyPlannerAdapter extends RecyclerView.Adapter<WeeklyPlannerAdapter.PlannerViewHolder> {

    private Context context;
    private List<PlannedDay> days;
    private PlannerActionCallback callback;
    private static final String BASE_IMAGE_URL = "http://192.168.1.10:5000/";

    public interface PlannerActionCallback {
        void onRegenerate(String date, String occasion, int position);
        void onToggleLock(String date, boolean currentLockState, int position);
    }

    public WeeklyPlannerAdapter(Context context, List<PlannedDay> days, PlannerActionCallback callback) {
        this.context = context;
        this.days = days;
        this.callback = callback;
    }

    @Override
    public PlannerViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View view = LayoutInflater.from(context).inflate(R.layout.planner_day_card, parent, false);
        return new PlannerViewHolder(view);
    }

    @Override
    public void onBindViewHolder(PlannerViewHolder holder, int position) {
        PlannedDay day = days.get(position);
        
        holder.tvDate.setText(day.getDay() + " " + day.getDate());
        
        String[] occasions = {"Casual", "College", "Office", "Interview", "Party", "Wedding", "Travel"};
        android.widget.ArrayAdapter<String> occAdapter = new android.widget.ArrayAdapter<>(context, android.R.layout.simple_spinner_item, occasions);
        occAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        holder.spinnerOccasion.setAdapter(occAdapter);
        
        // Find position of current occasion
        int occPos = 0;
        for (int i = 0; i < occasions.length; i++) {
            if (occasions[i].equalsIgnoreCase(day.getOccasion())) {
                occPos = i;
                break;
            }
        }
        holder.spinnerOccasion.setSelection(occPos, false); // false to avoid triggering listener immediately
        
        holder.spinnerOccasion.setOnItemSelectedListener(new android.widget.AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(android.widget.AdapterView<?> parent, View view, int pos, long id) {
                String newOccasion = occasions[pos];
                if (!newOccasion.equalsIgnoreCase(day.getOccasion()) && callback != null) {
                    callback.onRegenerate(day.getDate(), newOccasion, position);
                }
            }
            @Override
            public void onNothingSelected(android.widget.AdapterView<?> parent) {}
        });
        
        if (day.getWeather() != null) {
            holder.tvWeatherTemp.setText(day.getWeather().getTemperature() + "°C");
            holder.tvWeatherCond.setText(day.getWeather().getCondition());
        }
        
        holder.tvScore.setText("Fashion Score: " + Math.round(day.getFashionScore()) + "%");

        if (day.getOutfit() == null) {
            holder.llOutfitContainer.setVisibility(View.GONE);
            holder.tvEmptyState.setVisibility(View.VISIBLE);
            holder.tvEmptyState.setText(day.getReason() != null ? day.getReason() : "No suitable outfit found.");
            holder.tvScore.setVisibility(View.GONE);
        } else {
            holder.llOutfitContainer.setVisibility(View.VISIBLE);
            holder.tvEmptyState.setVisibility(View.GONE);
            holder.tvScore.setVisibility(View.VISIBLE);
            
            GeneratedOutfit outfit = day.getOutfit();
            loadImage(outfit.getTop(), holder.ivTop);
            loadImage(outfit.getBottom(), holder.ivBottom);
            loadImage(outfit.getOuterwear(), holder.ivOuterwear);
            loadImage(outfit.getFootwear(), holder.ivFootwear);
        }
        
        if (day.isLocked()) {
            holder.btnLock.setText("Unlock");
            holder.btnLock.setBackgroundColor(Color.parseColor("#999999"));
            holder.btnRegenerate.setEnabled(false);
        } else {
            holder.btnLock.setText("Lock");
            holder.btnLock.setBackgroundColor(Color.parseColor("#C18C8D"));
            holder.btnRegenerate.setEnabled(true);
        }
        
        holder.btnRegenerate.setOnClickListener(v -> {
            String selectedOccasion = holder.spinnerOccasion.getSelectedItem().toString();
            if (callback != null) callback.onRegenerate(day.getDate(), selectedOccasion, position);
        });
        
        holder.btnLock.setOnClickListener(v -> {
            if (callback != null) callback.onToggleLock(day.getDate(), day.isLocked(), position);
        });
        
        holder.btnWhy.setOnClickListener(v -> {
            new AlertDialog.Builder(context)
                .setTitle("Why this outfit?")
                .setMessage(day.getReason() != null ? day.getReason() : "No explanation available.")
                .setPositiveButton("OK", null)
                .show();
        });
    }

    private void loadImage(WardrobeItem item, ImageView imageView) {
        if (item != null && item.getImagePath() != null) {
            imageView.setVisibility(View.VISIBLE);
            String url = BASE_IMAGE_URL + item.getImagePath().replace("\\", "/");
            Glide.with(context).load(url).centerCrop().into(imageView);
        } else {
            imageView.setVisibility(View.GONE);
        }
    }

    @Override
    public int getItemCount() {
        return days != null ? days.size() : 0;
    }
    
    public void updateDay(int position, PlannedDay newDay) {
        if (position >= 0 && position < days.size()) {
            days.set(position, newDay);
            notifyItemChanged(position);
        }
    }

    public static class PlannerViewHolder extends RecyclerView.ViewHolder {
        TextView tvDate, tvWeatherTemp, tvWeatherCond, tvEmptyState, tvScore;
        android.widget.Spinner spinnerOccasion;
        LinearLayout llOutfitContainer;
        ImageView ivTop, ivBottom, ivOuterwear, ivFootwear;
        Button btnRegenerate, btnLock, btnWhy;

        public PlannerViewHolder(View itemView) {
            super(itemView);
            tvDate = itemView.findViewById(R.id.tvDate);
            spinnerOccasion = itemView.findViewById(R.id.spinnerOccasion);
            tvWeatherTemp = itemView.findViewById(R.id.tvWeatherTemp);
            tvWeatherCond = itemView.findViewById(R.id.tvWeatherCond);
            tvEmptyState = itemView.findViewById(R.id.tvEmptyState);
            tvScore = itemView.findViewById(R.id.tvScore);
            llOutfitContainer = itemView.findViewById(R.id.llOutfitContainer);
            ivTop = itemView.findViewById(R.id.ivTop);
            ivBottom = itemView.findViewById(R.id.ivBottom);
            ivOuterwear = itemView.findViewById(R.id.ivOuterwear);
            ivFootwear = itemView.findViewById(R.id.ivFootwear);
            btnRegenerate = itemView.findViewById(R.id.btnRegenerate);
            btnLock = itemView.findViewById(R.id.btnLock);
            btnWhy = itemView.findViewById(R.id.btnWhy);
        }
    }
}
