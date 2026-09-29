package com.outfitstudio;

import android.app.Activity;
import android.content.Intent;
import com.google.android.material.bottomnavigation.BottomNavigationView;

public class NavigationHelper {
    public static void setupBottomNavigation(Activity activity, int currentItemId) {
        BottomNavigationView bottomNav = activity.findViewById(R.id.bottomNavigation);
        if (bottomNav != null) {
            bottomNav.setSelectedItemId(currentItemId);
            bottomNav.setOnItemSelectedListener(item -> {
                int itemId = item.getItemId();
                if (itemId == currentItemId) {
                    return true;
                }
                Intent intent = null;
                if (itemId == R.id.nav_home) {
                    intent = new Intent(activity, HomeActivity.class);
                } else if (itemId == R.id.nav_wardrobe) {
                    intent = new Intent(activity, WardrobeActivity.class);
                } else if (itemId == R.id.nav_generate) {
                    intent = new Intent(activity, OccasionSelectionActivity.class);
                } else if (itemId == R.id.nav_stats) {
                    intent = new Intent(activity, ClosetStatisticsActivity.class);
                } else if (itemId == R.id.nav_shop) {
                    intent = new Intent(activity, SmartShoppingActivity.class);
                }
                if (intent != null) {
                    intent.addFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
                    activity.startActivity(intent);
                    activity.overridePendingTransition(0, 0);
                }
                return false;
            });
        }
    }
}
