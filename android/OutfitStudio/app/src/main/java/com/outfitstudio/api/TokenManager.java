package com.outfitstudio.api;

import android.content.Context;
import android.content.SharedPreferences;

public class TokenManager {
    private static final String PREF_NAME = "OutfitStudioAuth";
    private static final String KEY_TOKEN = "jwt_token";
    private static final String KEY_USER_ID = "user_id";
    private static final String KEY_GENDER = "gender";
    
    private SharedPreferences prefs;
    private static TokenManager instance;
    
    private TokenManager(Context context) {
        prefs = context.getApplicationContext().getSharedPreferences(PREF_NAME, Context.MODE_PRIVATE);
    }
    
    public static synchronized TokenManager getInstance(Context context) {
        if (instance == null) {
            instance = new TokenManager(context);
        }
        return instance;
    }
    
    public void saveAuthData(String token, int userId, String gender) {
        SharedPreferences.Editor editor = prefs.edit();
        editor.putString(KEY_TOKEN, token);
        editor.putInt(KEY_USER_ID, userId);
        if (gender != null) {
            editor.putString(KEY_GENDER, gender);
        }
        editor.apply();
    }
    
    public String getToken() {
        return prefs.getString(KEY_TOKEN, null);
    }
    
    public int getUserId() {
        return prefs.getInt(KEY_USER_ID, -1);
    }
    
    public String getGender() {
        return prefs.getString(KEY_GENDER, "Male"); // Default to Male if missing
    }
    
    public void clear() {
        prefs.edit().clear().apply();
    }
    
    public boolean isLoggedIn() {
        return getToken() != null;
    }
}
