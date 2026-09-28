package com.outfitstudio.models;

public class DonationCenter {
    private String id;
    private String name;
    private String address;
    private String phone;
    private String hours;
    private String mapsQuery;

    public DonationCenter(String id, String name, String address, String phone, String hours, String mapsQuery) {
        this.id = id;
        this.name = name;
        this.address = address;
        this.phone = phone;
        this.hours = hours;
        this.mapsQuery = mapsQuery;
    }

    public String getId() { return id; }
    public String getName() { return name; }
    public String getAddress() { return address; }
    public String getPhone() { return phone; }
    public String getHours() { return hours; }
    public String getMapsQuery() { return mapsQuery; }
}
