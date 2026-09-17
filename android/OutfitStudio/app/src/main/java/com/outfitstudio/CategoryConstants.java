package com.outfitstudio;

public class CategoryConstants {
    public static final String[] MALE_CATEGORIES = {
        "tshirt", "shirt", "jeans", "trousers", "jacket", 
        "Sneakers", "Slippers", "Sandals", "Sports shoes", 
        "Formal Shoes", "Crocs", "blazer"
    };

    public static final String[] FEMALE_CATEGORIES = {
        "long dress", "bodycon", "frock", "sleeveless tops", 
        "sleeved top", "crop top", "skirt", "leggings", 
        "tshirt", "shirt", "jeans", "trousers", "jacket", 
        "Sneakers", "Slippers", "Sandals", "Sports shoes", 
        "Formal Shoes", "Heels", "Crocs", "blazer"
    };
    
    public static String[] getCategoriesByGender(String gender) {
        if ("Female".equalsIgnoreCase(gender)) {
            return FEMALE_CATEGORIES;
        }
        return MALE_CATEGORIES;
    }
}
