package com.outfitstudio;

public class CategoryConstants {
    public static final String[] MALE_CATEGORIES = {
        "tshirt", "shirt", "jeans", "trousers", "shorts", "jacket", 
        "Sneakers", "Slippers", "Sandals", "Sports shoes", 
        "Formal Shoes", "Crocs", "blazer", "kurta", "sweatpants"
    };

    public static final String[] FEMALE_CATEGORIES = {
        "long dress", "bodycon", "frock", "sleeveless tops", 
        "long sleeved top", "crop top", "skirt", "shorts", "leggings", 
        "tshirt", "shirt", "jeans", "trousers", "jacket", 
        "Sneakers", "Slippers", "Sandals", "Sports shoes", 
        "Formal Shoes", "Heels", "Crocs", "blazer", "kurta", "sweatpants"
    };
    
    public static String[] getCategoriesByGender(String gender) {
        if ("Female".equalsIgnoreCase(gender)) {
            return FEMALE_CATEGORIES;
        }
        return MALE_CATEGORIES;
    }
}
