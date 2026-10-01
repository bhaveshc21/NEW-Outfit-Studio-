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
        private String email;
        
        public UserUpdate(String name) {
            this.name = name;
            this.email = null;
        }
        
        public UserUpdate(String name, String email) { 
            this.name = name; 
            this.email = email;
        }
    }
}
