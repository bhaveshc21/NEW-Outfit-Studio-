import os
import re

java_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\java\com\outfitstudio'
res_layout_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\res\layout'
res_drawable_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\res\drawable'

# 1. Create a circular background for the profile image if we need one
bg_circle = '''<?xml version="1.0" encoding="utf-8"?>
<shape xmlns:android="http://schemas.android.com/apk/res/android"
    android:shape="oval">
    <solid android:color="@color/surface"/>
    <stroke android:color="@color/primary_variant" android:width="2dp"/>
</shape>
'''
with open(os.path.join(res_drawable_dir, 'bg_circle_profile.xml'), 'w') as f:
    f.write(bg_circle)
    
bg_card = '''<?xml version="1.0" encoding="utf-8"?>
<shape xmlns:android="http://schemas.android.com/apk/res/android">
    <solid android:color="@color/surface"/>
    <corners android:radius="16dp"/>
</shape>
'''
with open(os.path.join(res_drawable_dir, 'bg_profile_card.xml'), 'w') as f:
    f.write(bg_card)

# 2. Rename the old profile activity to EditProfileActivity
with open(os.path.join(java_dir, 'ProfileActivity.java'), 'r', encoding='utf-8') as f:
    old_profile_java = f.read()
    
# We will create EditProfileActivity for everything (My Profile and Measurements combined for now, or just let them edit what was there)
# Actually, let's keep EditProfileActivity for Name, Style, Colors, Occasions
old_profile_java = old_profile_java.replace('ProfileActivity', 'EditProfileActivity')
old_profile_java = old_profile_java.replace('activity_profile', 'activity_edit_profile')

with open(os.path.join(java_dir, 'EditProfileActivity.java'), 'w', encoding='utf-8') as f:
    f.write(old_profile_java)

# Rename the layout
with open(os.path.join(res_layout_dir, 'activity_profile.xml'), 'r', encoding='utf-8') as f:
    old_profile_xml = f.read()

with open(os.path.join(res_layout_dir, 'activity_edit_profile.xml'), 'w', encoding='utf-8') as f:
    f.write(old_profile_xml)

# 3. Create the new activity_profile.xml
new_profile_xml = '''<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@color/background">

    <ScrollView
        android:layout_width="match_parent"
        android:layout_height="match_parent"
        android:layout_above="@+id/bottomNavigationContainer">
        
        <LinearLayout
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:orientation="vertical"
            android:gravity="center_horizontal"
            android:padding="24dp">
            
            <FrameLayout
                android:layout_width="120dp"
                android:layout_height="120dp"
                android:layout_marginTop="16dp"
                android:background="@drawable/bg_circle_profile">
                
                <androidx.cardview.widget.CardView
                    android:layout_width="116dp"
                    android:layout_height="116dp"
                    android:layout_gravity="center"
                    app:cardCornerRadius="58dp"
                    app:cardElevation="0dp"
                    app:cardBackgroundColor="@android:color/transparent">
                    
                    <ImageView
                        android:id="@+id/ivProfileImage"
                        android:layout_width="match_parent"
                        android:layout_height="match_parent"
                        android:scaleType="centerCrop"
                        android:src="@drawable/ic_profile"/>
                </androidx.cardview.widget.CardView>
            </FrameLayout>

            <TextView
                android:id="@+id/tvProfileName"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:layout_marginTop="16dp"
                android:text="Loading..."
                android:textSize="24sp"
                android:textStyle="bold"
                android:textColor="@color/on_background"/>

            <TextView
                android:id="@+id/tvProfileEmail"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:layout_marginTop="4dp"
                android:text="Loading..."
                android:textSize="14sp"
                android:textColor="@color/on_background"/>
                
            <!-- Card 1 -->
            <LinearLayout
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:orientation="vertical"
                android:background="@drawable/bg_profile_card"
                android:layout_marginTop="24dp"
                android:padding="8dp"
                android:elevation="2dp">
                
                <TextView
                    android:id="@+id/btnMyProfile"
                    android:layout_width="match_parent"
                    android:layout_height="wrap_content"
                    android:text="My Profile"
                    android:textSize="16sp"
                    android:padding="16dp"
                    android:textColor="@color/on_surface"
                    android:drawableEnd="@drawable/ic_arrow_forward"
                    android:background="?attr/selectableItemBackground"/>
                    
                <View android:layout_width="match_parent" android:layout_height="1dp" android:background="#E0E0E0" android:layout_marginHorizontal="16dp"/>
                
                <TextView
                    android:id="@+id/btnChangePassword"
                    android:layout_width="match_parent"
                    android:layout_height="wrap_content"
                    android:text="Change Password"
                    android:textSize="16sp"
                    android:padding="16dp"
                    android:textColor="@color/on_surface"
                    android:drawableEnd="@drawable/ic_arrow_forward"
                    android:background="?attr/selectableItemBackground"/>
                    
                <View android:layout_width="match_parent" android:layout_height="1dp" android:background="#E0E0E0" android:layout_marginHorizontal="16dp"/>
                
                <TextView
                    android:id="@+id/btnMeasurements"
                    android:layout_width="match_parent"
                    android:layout_height="wrap_content"
                    android:text="Measurements &amp; Body Doubling"
                    android:textSize="16sp"
                    android:padding="16dp"
                    android:textColor="@color/on_surface"
                    android:drawableEnd="@drawable/ic_arrow_forward"
                    android:background="?attr/selectableItemBackground"/>
            </LinearLayout>

            <!-- Card 2 -->
            <LinearLayout
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:orientation="vertical"
                android:background="@drawable/bg_profile_card"
                android:layout_marginTop="16dp"
                android:padding="8dp"
                android:elevation="2dp">
                
                <LinearLayout
                    android:layout_width="match_parent"
                    android:layout_height="wrap_content"
                    android:orientation="horizontal"
                    android:padding="16dp"
                    android:gravity="center_vertical">
                    <TextView
                        android:layout_width="0dp"
                        android:layout_height="wrap_content"
                        android:layout_weight="1"
                        android:text="Notification Reminders"
                        android:textSize="16sp"
                        android:textColor="@color/on_surface"/>
                    <Switch
                        android:id="@+id/switchNotifications"
                        android:layout_width="wrap_content"
                        android:layout_height="wrap_content"/>
                </LinearLayout>
                    
                <View android:layout_width="match_parent" android:layout_height="1dp" android:background="#E0E0E0" android:layout_marginHorizontal="16dp"/>
                
                <TextView
                    android:id="@+id/btnAppearanceAnalysis"
                    android:layout_width="match_parent"
                    android:layout_height="wrap_content"
                    android:text="Aesthetic Color &amp; Appearance Analysis"
                    android:textSize="16sp"
                    android:padding="16dp"
                    android:textColor="@color/on_surface"
                    android:drawableEnd="@drawable/ic_arrow_forward"
                    android:background="?attr/selectableItemBackground"/>
            </LinearLayout>
            
            <Button
                android:id="@+id/btnLogoutNew"
                android:layout_width="match_parent"
                android:layout_height="wrap_content"
                android:layout_marginTop="24dp"
                android:text="Sign Out of Studio"
                android:textColor="#D32F2F"
                android:backgroundTint="#FFEBEE"
                android:padding="12dp"
                app:cornerRadius="24dp"
                android:layout_marginBottom="32dp"/>
                
        </LinearLayout>
    </ScrollView>
    
    <!-- Bottom Navigation -->
    <FrameLayout
        android:id="@+id/bottomNavigationContainer"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_alignParentBottom="true">

        <com.google.android.material.bottomnavigation.BottomNavigationView
            android:id="@+id/bottomNavigation"
            app:itemIconSize="20dp"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:layout_gravity="bottom"
            app:menu="@menu/bottom_nav_menu"
            app:labelVisibilityMode="labeled"
            app:itemIconTint="@color/nav_item_color_state"
            app:itemTextColor="@color/nav_item_color_state"
            android:background="@color/surface" />
    </FrameLayout>
</RelativeLayout>
'''

# Need ic_arrow_forward if it doesn't exist.
ic_arrow = '''<vector xmlns:android="http://schemas.android.com/apk/res/android"
    android:width="24dp" android:height="24dp" android:viewportWidth="24.0" android:viewportHeight="24.0">
    <path android:fillColor="#808080" android:pathData="M8.59,16.59L13.17,12L8.59,7.41L10,6l6,6l-6,6L8.59,16.59z"/>
</vector>'''
with open(os.path.join(res_drawable_dir, 'ic_arrow_forward.xml'), 'w') as f:
    f.write(ic_arrow)

with open(os.path.join(res_layout_dir, 'activity_profile.xml'), 'w', encoding='utf-8') as f:
    f.write(new_profile_xml)

# 4. Create the new ProfileActivity.java
new_profile_java = '''package com.outfitstudio;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.bumptech.glide.Glide;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AppearanceApiService;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.AppearanceResponse;
import com.outfitstudio.api.models.ProfileResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class ProfileActivity extends AppCompatActivity {

    private ImageView ivProfileImage;
    private TextView tvProfileName, tvProfileEmail;
    private TextView btnMyProfile, btnChangePassword, btnMeasurements, btnAppearanceAnalysis;
    private Switch switchNotifications;
    private Button btnLogoutNew;

    private AuthApiService authService;
    private AppearanceApiService appearanceService;
    private TokenManager tokenManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_profile);

        NavigationHelper.setupBottomNavigation(this, R.id.bottomNavigation);

        tokenManager = TokenManager.getInstance(this);
        authService = ApiClient.getClient(this).create(AuthApiService.class);
        appearanceService = ApiClient.getClient(this).create(AppearanceApiService.class);

        ivProfileImage = findViewById(R.id.ivProfileImage);
        tvProfileName = findViewById(R.id.tvProfileName);
        tvProfileEmail = findViewById(R.id.tvProfileEmail);
        btnMyProfile = findViewById(R.id.btnMyProfile);
        btnChangePassword = findViewById(R.id.btnChangePassword);
        btnMeasurements = findViewById(R.id.btnMeasurements);
        btnAppearanceAnalysis = findViewById(R.id.btnAppearanceAnalysis);
        switchNotifications = findViewById(R.id.switchNotifications);
        btnLogoutNew = findViewById(R.id.btnLogoutNew);

        loadProfileData();
        loadAppearanceData();

        btnMyProfile.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, EditProfileActivity.class);
            startActivity(intent);
        });
        
        btnChangePassword.setOnClickListener(v -> {
            Toast.makeText(ProfileActivity.this, "Change Password clicked", Toast.LENGTH_SHORT).show();
        });
        
        btnMeasurements.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, EditProfileActivity.class);
            startActivity(intent);
            Toast.makeText(ProfileActivity.this, "Edit Measurements", Toast.LENGTH_SHORT).show();
        });
        
        btnAppearanceAnalysis.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, AppearanceAnalysisActivity.class);
            startActivity(intent);
        });

        btnLogoutNew.setOnClickListener(v -> logout());
    }

    private void loadProfileData() {
        int userId = tokenManager.getUserId();
        authService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    if (data.getUser() != null) {
                        tvProfileName.setText(data.getUser().getName());
                        tvProfileEmail.setText(data.getUser().getEmail());
                    }
                }
            }
            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {}
        });
    }

    private void loadAppearanceData() {
        int userId = tokenManager.getUserId();
        appearanceService.getAppearance(userId).enqueue(new Callback<AppearanceResponse>() {
            @Override
            public void onResponse(Call<AppearanceResponse> call, Response<AppearanceResponse> response) {
                if (response.isSuccessful() && response.body() != null) {
                    AppearanceResponse res = response.body();
                    if (res.isSuccess() && res.getData() != null && res.getData().getImageUrl() != null) {
                        String imageUrl = ApiClient.BASE_URL + res.getData().getImageUrl();
                        Glide.with(ProfileActivity.this)
                             .load(imageUrl)
                             .placeholder(R.drawable.ic_profile)
                             .error(R.drawable.ic_profile)
                             .into(ivProfileImage);
                    }
                }
            }
            @Override
            public void onFailure(Call<AppearanceResponse> call, Throwable t) {}
        });
    }

    private void logout() {
        tokenManager.clear();
        Intent intent = new Intent(ProfileActivity.this, LoginActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        startActivity(intent);
        finish();
    }
}
'''
with open(os.path.join(java_dir, 'ProfileActivity.java'), 'w', encoding='utf-8') as f:
    f.write(new_profile_java)

# 5. Add EditProfileActivity to AndroidManifest.xml
manifest_path = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\AndroidManifest.xml'
with open(manifest_path, 'r', encoding='utf-8') as f:
    manifest_content = f.read()

if '.EditProfileActivity' not in manifest_content:
    manifest_content = manifest_content.replace(
        '<activity android:name=".ProfileActivity" />',
        '<activity android:name=".ProfileActivity" />\n        <activity android:name=".EditProfileActivity" />'
    )
    # Also in case it wasn't there like that:
    if '<activity android:name=".EditProfileActivity"' not in manifest_content:
        manifest_content = manifest_content.replace(
            '</application>',
            '    <activity android:name=".EditProfileActivity" />\n    </application>'
        )
    with open(manifest_path, 'w', encoding='utf-8') as f:
        f.write(manifest_content)

print("Files generated and updated.")
