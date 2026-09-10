package com.outfitstudio.api.models;

public class LoginResponse {
    private String token;
    private User user;
    
    public String getToken() { return token; }
    public User getUser() { return user; }
    
    public static class User {
        private int id;
        private String name;
        private String email;
        
        public int getId() { return id; }
        public String getName() { return name; }
        public String getEmail() { return email; }
    }
}
