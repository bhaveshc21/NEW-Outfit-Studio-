import os
import re

java_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\java\com\outfitstudio'
res_layout_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\res\layout'
manifest_path = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\AndroidManifest.xml'

# 1. MyProfileActivity and layout
my_profile_xml = '''<?xml version="1.0" encoding="utf-8"?>
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    android:padding="24dp"
    android:background="@color/background">

    <TextView
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="My Profile"
        android:textSize="28sp"
        android:textStyle="bold"
        android:textColor="@color/on_background"
        android:layout_marginBottom="24dp"/>

    <com.google.android.material.textfield.TextInputLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:hint="Full Name"
        style="@style/Widget.MaterialComponents.TextInputLayout.OutlinedBox"
        android:layout_marginBottom="16dp">
        <com.google.android.material.textfield.TextInputEditText
            android:id="@+id/etName"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:enabled="false"
            android:textColor="@color/on_background"/>
    </com.google.android.material.textfield.TextInputLayout>

    <com.google.android.material.textfield.TextInputLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:hint="Email"
        style="@style/Widget.MaterialComponents.TextInputLayout.OutlinedBox"
        android:layout_marginBottom="16dp">
        <com.google.android.material.textfield.TextInputEditText
            android:id="@+id/etEmail"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:enabled="false"
            android:inputType="textEmailAddress"
            android:textColor="@color/on_background"/>
    </com.google.android.material.textfield.TextInputLayout>

    <com.google.android.material.textfield.TextInputLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:hint="Password"
        style="@style/Widget.MaterialComponents.TextInputLayout.OutlinedBox"
        app:passwordToggleEnabled="true"
        android:layout_marginBottom="32dp">
        <com.google.android.material.textfield.TextInputEditText
            android:id="@+id/etPassword"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:enabled="false"
            android:inputType="textPassword"
            android:text="********"
            android:textColor="@color/on_background"/>
    </com.google.android.material.textfield.TextInputLayout>

    <Button
        android:id="@+id/btnEditSave"
        android:layout_width="match_parent"
        android:layout_height="60dp"
        android:text="Edit"
        android:backgroundTint="@color/primary_variant"
        app:cornerRadius="12dp"/>
        
    <ProgressBar
        android:id="@+id/progressBar"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_gravity="center"
        android:visibility="gone"
        android:layout_marginTop="16dp"/>
</LinearLayout>
'''
with open(os.path.join(res_layout_dir, 'activity_my_profile.xml'), 'w', encoding='utf-8') as f:
    f.write(my_profile_xml)

my_profile_java = '''package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.google.android.material.textfield.TextInputEditText;
import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.ProfileData;
import com.outfitstudio.api.models.ProfileRequest;
import com.outfitstudio.api.models.ProfileResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class MyProfileActivity extends AppCompatActivity {
    private TextInputEditText etName, etEmail, etPassword;
    private Button btnEditSave;
    private ProgressBar progressBar;
    private AuthApiService apiService;
    private TokenManager tokenManager;
    private boolean isEditing = false;
    private ProfileData currentProfileData = null; // Store it so we don't overwrite measurements

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_my_profile);

        etName = findViewById(R.id.etName);
        etEmail = findViewById(R.id.etEmail);
        etPassword = findViewById(R.id.etPassword);
        btnEditSave = findViewById(R.id.btnEditSave);
        progressBar = findViewById(R.id.progressBar);

        apiService = ApiClient.getClient(this).create(AuthApiService.class);
        tokenManager = TokenManager.getInstance(this);

        loadData();

        btnEditSave.setOnClickListener(v -> {
            if (!isEditing) {
                isEditing = true;
                etName.setEnabled(true);
                // Email might not be updatable in backend easily, but let's enable it if user wants
                // etEmail.setEnabled(true);
                etPassword.setEnabled(true);
                etPassword.setText("");
                etPassword.setHint("Enter new password (optional)");
                btnEditSave.setText("Save Changes");
            } else {
                saveData();
            }
        });
    }

    private void loadData() {
        setLoading(true);
        int userId = tokenManager.getUserId();
        apiService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    if (data.getUser() != null) {
                        etName.setText(data.getUser().getName());
                        etEmail.setText(data.getUser().getEmail());
                    }
                    currentProfileData = data.getProfile();
                }
            }
            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {
                setLoading(false);
            }
        });
    }

    private void saveData() {
        setLoading(true);
        String newName = etName.getText().toString();
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(newName);
        
        ProfileData profileData = currentProfileData;
        if (profileData == null) {
            profileData = new ProfileData();
        }
        
        ProfileRequest request = new ProfileRequest(userUpdate, profileData);
        int userId = tokenManager.getUserId();

        apiService.updateProfile(userId, request).enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(MyProfileActivity.this, "Profile updated successfully", Toast.LENGTH_SHORT).show();
                    isEditing = false;
                    etName.setEnabled(false);
                    etPassword.setEnabled(false);
                    etPassword.setText("********");
                    btnEditSave.setText("Edit");
                } else {
                    Toast.makeText(MyProfileActivity.this, "Failed to update profile", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(MyProfileActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void setLoading(boolean isLoading) {
        btnEditSave.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
'''
with open(os.path.join(java_dir, 'MyProfileActivity.java'), 'w', encoding='utf-8') as f:
    f.write(my_profile_java)

# 2. MeasurementsActivity and layout
measurements_xml = '''<?xml version="1.0" encoding="utf-8"?>
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@color/background">

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="vertical"
        android:padding="24dp">

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Measurements &amp; Body Doubling"
            android:textSize="24sp"
            android:textStyle="bold"
            android:textColor="@color/on_background"
            android:layout_marginBottom="24dp"/>

        <GridLayout
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:columnCount="2"
            android:layout_marginBottom="24dp">

            <EditText
                android:id="@+id/etHeight"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Height (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginEnd="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>

            <EditText
                android:id="@+id/etChest"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Chest (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginStart="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>

            <EditText
                android:id="@+id/etWaist"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Waist (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginEnd="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>

            <EditText
                android:id="@+id/etHip"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Hip (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginStart="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>

            <EditText
                android:id="@+id/etShoulder"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Shoulder (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginEnd="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>

            <EditText
                android:id="@+id/etInseam"
                android:layout_width="0dp"
                android:layout_height="wrap_content"
                android:layout_columnWeight="1"
                android:hint="Inseam (cm)"
                android:inputType="numberDecimal"
                android:background="@drawable/bg_edit_text"
                android:layout_marginStart="8dp"
                android:layout_marginBottom="16dp"
                android:enabled="false"/>
        </GridLayout>

        <TextView
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:text="Style Preferences"
            android:textSize="18sp"
            android:textStyle="bold"
            android:textColor="@color/primary_variant"
            android:layout_marginBottom="16dp"/>

        <EditText
            android:id="@+id/etStyle"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Preferred Style"
            android:background="@drawable/bg_edit_text"
            android:layout_marginBottom="16dp"
            android:enabled="false"/>

        <EditText
            android:id="@+id/etColors"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Preferred Colors"
            android:background="@drawable/bg_edit_text"
            android:layout_marginBottom="16dp"
            android:enabled="false"/>

        <EditText
            android:id="@+id/etOccasions"
            android:layout_width="match_parent"
            android:layout_height="wrap_content"
            android:hint="Preferred Occasions"
            android:background="@drawable/bg_edit_text"
            android:layout_marginBottom="32dp"
            android:enabled="false"/>

        <Button
            android:id="@+id/btnEditSave"
            android:layout_width="match_parent"
            android:layout_height="60dp"
            android:text="Edit"
            android:backgroundTint="@color/primary_variant"
            app:cornerRadius="12dp"/>
            
        <ProgressBar
            android:id="@+id/progressBar"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_gravity="center"
            android:visibility="gone"
            android:layout_marginTop="16dp"/>

    </LinearLayout>
</ScrollView>
'''
with open(os.path.join(res_layout_dir, 'activity_measurements.xml'), 'w', encoding='utf-8') as f:
    f.write(measurements_xml)

measurements_java = '''package com.outfitstudio;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ProgressBar;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.outfitstudio.api.ApiClient;
import com.outfitstudio.api.AuthApiService;
import com.outfitstudio.api.TokenManager;
import com.outfitstudio.api.models.ApiResponse;
import com.outfitstudio.api.models.ProfileData;
import com.outfitstudio.api.models.ProfileRequest;
import com.outfitstudio.api.models.ProfileResponse;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class MeasurementsActivity extends AppCompatActivity {
    private EditText etHeight, etChest, etWaist, etHip, etShoulder, etInseam;
    private EditText etStyle, etColors, etOccasions;
    private Button btnEditSave;
    private ProgressBar progressBar;
    
    private AuthApiService apiService;
    private TokenManager tokenManager;
    private boolean isEditing = false;
    private String currentName = "";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_measurements);

        etHeight = findViewById(R.id.etHeight);
        etChest = findViewById(R.id.etChest);
        etWaist = findViewById(R.id.etWaist);
        etHip = findViewById(R.id.etHip);
        etShoulder = findViewById(R.id.etShoulder);
        etInseam = findViewById(R.id.etInseam);
        etStyle = findViewById(R.id.etStyle);
        etColors = findViewById(R.id.etColors);
        etOccasions = findViewById(R.id.etOccasions);
        
        btnEditSave = findViewById(R.id.btnEditSave);
        progressBar = findViewById(R.id.progressBar);

        apiService = ApiClient.getClient(this).create(AuthApiService.class);
        tokenManager = TokenManager.getInstance(this);

        loadData();

        btnEditSave.setOnClickListener(v -> {
            if (!isEditing) {
                isEditing = true;
                setFieldsEnabled(true);
                btnEditSave.setText("Save Measurements");
            } else {
                saveData();
            }
        });
    }

    private void setFieldsEnabled(boolean enabled) {
        etHeight.setEnabled(enabled);
        etChest.setEnabled(enabled);
        etWaist.setEnabled(enabled);
        etHip.setEnabled(enabled);
        etShoulder.setEnabled(enabled);
        etInseam.setEnabled(enabled);
        etStyle.setEnabled(enabled);
        etColors.setEnabled(enabled);
        etOccasions.setEnabled(enabled);
    }

    private void loadData() {
        setLoading(true);
        int userId = tokenManager.getUserId();
        apiService.getProfile(userId).enqueue(new Callback<ApiResponse<ProfileResponse>>() {
            @Override
            public void onResponse(Call<ApiResponse<ProfileResponse>> call, Response<ApiResponse<ProfileResponse>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    ProfileResponse data = response.body().getData();
                    if (data.getUser() != null) {
                        currentName = data.getUser().getName();
                    }
                    if (data.getProfile() != null) {
                        ProfileData p = data.getProfile();
                        if (p.getHeight() != null) etHeight.setText(String.valueOf(p.getHeight()));
                        if (p.getChest() != null) etChest.setText(String.valueOf(p.getChest()));
                        if (p.getWaist() != null) etWaist.setText(String.valueOf(p.getWaist()));
                        if (p.getHip() != null) etHip.setText(String.valueOf(p.getHip()));
                        if (p.getShoulder() != null) etShoulder.setText(String.valueOf(p.getShoulder()));
                        if (p.getInseam() != null) etInseam.setText(String.valueOf(p.getInseam()));
                        if (p.getPreferredStyle() != null) etStyle.setText(p.getPreferredStyle());
                        if (p.getPreferredColors() != null) etColors.setText(p.getPreferredColors());
                        if (p.getPreferredOccasions() != null) etOccasions.setText(p.getPreferredOccasions());
                    }
                }
            }
            @Override
            public void onFailure(Call<ApiResponse<ProfileResponse>> call, Throwable t) {
                setLoading(false);
            }
        });
    }

    private void saveData() {
        setLoading(true);
        
        ProfileData profileData = new ProfileData();
        try {
            if (!etHeight.getText().toString().isEmpty()) profileData.setHeight(Float.parseFloat(etHeight.getText().toString()));
            if (!etChest.getText().toString().isEmpty()) profileData.setChest(Float.parseFloat(etChest.getText().toString()));
            if (!etWaist.getText().toString().isEmpty()) profileData.setWaist(Float.parseFloat(etWaist.getText().toString()));
            if (!etHip.getText().toString().isEmpty()) profileData.setHip(Float.parseFloat(etHip.getText().toString()));
            if (!etShoulder.getText().toString().isEmpty()) profileData.setShoulder(Float.parseFloat(etShoulder.getText().toString()));
            if (!etInseam.getText().toString().isEmpty()) profileData.setInseam(Float.parseFloat(etInseam.getText().toString()));
        } catch (NumberFormatException e) {
            setLoading(false);
            Toast.makeText(this, "Measurements must be numbers", Toast.LENGTH_SHORT).show();
            return;
        }

        profileData.setPreferredStyle(etStyle.getText().toString());
        profileData.setPreferredColors(etColors.getText().toString());
        profileData.setPreferredOccasions(etOccasions.getText().toString());
        
        ProfileRequest.UserUpdate userUpdate = new ProfileRequest.UserUpdate(currentName);
        ProfileRequest request = new ProfileRequest(userUpdate, profileData);
        int userId = tokenManager.getUserId();

        apiService.updateProfile(userId, request).enqueue(new Callback<ApiResponse<Void>>() {
            @Override
            public void onResponse(Call<ApiResponse<Void>> call, Response<ApiResponse<Void>> response) {
                setLoading(false);
                if (response.isSuccessful() && response.body() != null && response.body().isSuccess()) {
                    Toast.makeText(MeasurementsActivity.this, "Measurements saved", Toast.LENGTH_SHORT).show();
                    isEditing = false;
                    setFieldsEnabled(false);
                    btnEditSave.setText("Edit");
                } else {
                    Toast.makeText(MeasurementsActivity.this, "Failed to update", Toast.LENGTH_SHORT).show();
                }
            }

            @Override
            public void onFailure(Call<ApiResponse<Void>> call, Throwable t) {
                setLoading(false);
                Toast.makeText(MeasurementsActivity.this, "Network error", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void setLoading(boolean isLoading) {
        btnEditSave.setEnabled(!isLoading);
        progressBar.setVisibility(isLoading ? View.VISIBLE : View.GONE);
    }
}
'''
with open(os.path.join(java_dir, 'MeasurementsActivity.java'), 'w', encoding='utf-8') as f:
    f.write(measurements_java)

# 3. Modify ProfileActivity.java to use these new activities
with open(os.path.join(java_dir, 'ProfileActivity.java'), 'r', encoding='utf-8') as f:
    profile_java = f.read()

profile_java = profile_java.replace(
    'Intent intent = new Intent(ProfileActivity.this, EditProfileActivity.class);',
    'Intent intent = new Intent(ProfileActivity.this, MyProfileActivity.class);',
    1 # Only first one for MyProfile
)

# For measurements, we need to find the specific block
# Let's replace the whole block
measurements_block_old = '''btnMeasurements.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, EditProfileActivity.class);
            startActivity(intent);
            Toast.makeText(ProfileActivity.this, "Edit Measurements", Toast.LENGTH_SHORT).show();
        });'''
        
measurements_block_new = '''btnMeasurements.setOnClickListener(v -> {
            Intent intent = new Intent(ProfileActivity.this, MeasurementsActivity.class);
            startActivity(intent);
        });'''

profile_java = profile_java.replace(measurements_block_old, measurements_block_new)

with open(os.path.join(java_dir, 'ProfileActivity.java'), 'w', encoding='utf-8') as f:
    f.write(profile_java)

# 4. Add to AndroidManifest.xml
with open(manifest_path, 'r', encoding='utf-8') as f:
    manifest_content = f.read()

if '.MyProfileActivity' not in manifest_content:
    manifest_content = manifest_content.replace(
        '</application>',
        '    <activity android:name=".MyProfileActivity" />\n        <activity android:name=".MeasurementsActivity" />\n    </application>'
    )
    with open(manifest_path, 'w', encoding='utf-8') as f:
        f.write(manifest_content)

print("Split profile and measurements successfully.")
