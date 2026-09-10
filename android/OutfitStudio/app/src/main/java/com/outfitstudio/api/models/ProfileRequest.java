package com.outfitstudio.api.models;

public class ProfileRequest {
    private UserUpdate user;
    private ProfileData profile;
    
    public ProfileRequest(UserUpdate user, ProfileData profile) {
        this.user = user;
        this.profile = profile;
    }
    
    public static class UserUpdate {
        private String name;
        public UserUpdate(String name) { this.name = name; }
    }
}
