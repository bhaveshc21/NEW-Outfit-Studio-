package com.outfitstudio.api.models;

public class ProfileResponse {
    private UserData user;
    private ProfileData profile;
    
    public UserData getUser() { return user; }
    public ProfileData getProfile() { return profile; }
    
    public static class UserData {
        private int id;
        private String name;
        private String email;
        private String profile_image;
        
        public int getId() { return id; }
        public String getName() { return name; }
        public String getEmail() { return email; }
        public String getProfileImage() { return profile_image; }
    }
}
