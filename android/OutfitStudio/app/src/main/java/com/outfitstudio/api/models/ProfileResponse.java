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
        
        public int getId() { return id; }
        public String getName() { return name; }
        public String getEmail() { return email; }
    }
}
