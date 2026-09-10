package com.outfitstudio.api.models;

public class ProfileData {
    private Float height;
    private Float chest;
    private Float waist;
    private Float hip;
    private Float shoulder;
    private Float inseam;
    private String preferred_style;
    private String preferred_colors;
    private String preferred_occasions;
    
    public ProfileData() {}
    
    public Float getHeight() { return height; }
    public void setHeight(Float height) { this.height = height; }
    
    public Float getChest() { return chest; }
    public void setChest(Float chest) { this.chest = chest; }
    
    public Float getWaist() { return waist; }
    public void setWaist(Float waist) { this.waist = waist; }
    
    public Float getHip() { return hip; }
    public void setHip(Float hip) { this.hip = hip; }
    
    public Float getShoulder() { return shoulder; }
    public void setShoulder(Float shoulder) { this.shoulder = shoulder; }
    
    public Float getInseam() { return inseam; }
    public void setInseam(Float inseam) { this.inseam = inseam; }
    
    public String getPreferredStyle() { return preferred_style; }
    public void setPreferredStyle(String style) { this.preferred_style = style; }
    
    public String getPreferredColors() { return preferred_colors; }
    public void setPreferredColors(String colors) { this.preferred_colors = colors; }
    
    public String getPreferredOccasions() { return preferred_occasions; }
    public void setPreferredOccasions(String occasions) { this.preferred_occasions = occasions; }
}
