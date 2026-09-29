import os

base_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main'
java_dir = os.path.join(base_dir, 'java', 'com', 'outfitstudio')
layout_dir = os.path.join(base_dir, 'res', 'layout')

# 1. Create NavigationHelper.java
nav_helper_content = '''package com.outfitstudio;

import android.app.Activity;
import android.content.Intent;
import com.google.android.material.bottomnavigation.BottomNavigationView;

public class NavigationHelper {
    public static void setupBottomNavigation(Activity activity, int currentItemId) {
        BottomNavigationView bottomNav = activity.findViewById(R.id.bottomNavigation);
        if (bottomNav != null) {
            bottomNav.setSelectedItemId(currentItemId);
            bottomNav.setOnItemSelectedListener(item -> {
                int itemId = item.getItemId();
                if (itemId == currentItemId) {
                    return true;
                }
                Intent intent = null;
                if (itemId == R.id.nav_home) {
                    intent = new Intent(activity, HomeActivity.class);
                } else if (itemId == R.id.nav_wardrobe) {
                    intent = new Intent(activity, WardrobeActivity.class);
                } else if (itemId == R.id.nav_generate) {
                    intent = new Intent(activity, OccasionSelectionActivity.class);
                } else if (itemId == R.id.nav_stats) {
                    intent = new Intent(activity, ClosetStatisticsActivity.class);
                } else if (itemId == R.id.nav_shop) {
                    intent = new Intent(activity, SmartShoppingActivity.class);
                }
                if (intent != null) {
                    intent.addFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
                    activity.startActivity(intent);
                    activity.overridePendingTransition(0, 0);
                }
                return false;
            });
        }
    }
}
'''
with open(os.path.join(java_dir, 'NavigationHelper.java'), 'w', encoding='utf-8') as f:
    f.write(nav_helper_content)

# 2. Update Java files to call NavigationHelper in onResume
activities = {
    'HomeActivity.java': 'R.id.nav_home',
    'WardrobeActivity.java': 'R.id.nav_wardrobe',
    'OccasionSelectionActivity.java': 'R.id.nav_generate',
    'ClosetStatisticsActivity.java': 'R.id.nav_stats',
    'SmartShoppingActivity.java': 'R.id.nav_shop'
}

for java_file, nav_id in activities.items():
    path = os.path.join(java_dir, java_file)
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Remove existing bottomNav logic if present (e.g. in HomeActivity)
    if 'bottomNav.setOnItemSelectedListener' in content:
        import re
        content = re.sub(r'com\.google\.android\.material\.bottomnavigation\.BottomNavigationView\s+bottomNav\s*=\s*findViewById\(R\.id\.bottomNavigation\);\s*bottomNav\.setOnItemSelectedListener\(.*?\);', '', content, flags=re.DOTALL)
        content = re.sub(r'BottomNavigationView\s+bottomNav\s*=\s*findViewById\(R\.id\.bottomNavigation\);\s*bottomNav\.setOnItemSelectedListener\([\s\S]*?\}\);\s*', '', content)
    
    # Insert onResume
    if 'protected void onResume()' in content:
        content = content.replace('super.onResume();', f'super.onResume();\n        NavigationHelper.setupBottomNavigation(this, {nav_id});')
    else:
        # add onResume before last closing brace
        on_resume_code = f'''
    @Override
    protected void onResume() {{
        super.onResume();
        NavigationHelper.setupBottomNavigation(this, {nav_id});
    }}
'''
        content = content[:content.rfind('}')] + on_resume_code + '}'
    with open(path, 'w', encoding='utf-8') as f:
        f.write(content)

# 3. Wrap Layouts in RelativeLayout
nav_xml = '''
    <com.google.android.material.bottomnavigation.BottomNavigationView
        android:id="@+id/bottomNavigation"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_alignParentBottom="true"
        app:menu="@menu/bottom_nav"
        app:itemIconTint="@color/primary"
        app:itemTextColor="@color/primary"
        android:background="@color/surface"
        app:labelVisibilityMode="labeled"
        android:elevation="16dp"/>
'''

def wrap_layout(filename):
    path = os.path.join(layout_dir, filename)
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    if '<RelativeLayout xmlns:' in content and 'bottomNavigation' in content:
        return
    # Find the root tag and its attributes
    import re
    match = re.search(r'<([a-zA-Z0-9_.]+)([^>]*)>', content)
    if not match: return
    root_tag = match.group(1)
    
    new_content = f'''<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    android:layout_width="match_parent"
    android:layout_height="match_parent">
    
    <{root_tag} {match.group(2).replace('xmlns:android="http://schemas.android.com/apk/res/android"', '').replace('xmlns:app="http://schemas.android.com/apk/res-auto"', '')}
        android:layout_above="@+id/bottomNavigation">
''' + content[match.end():]
    new_content = new_content.replace(f'</{root_tag}>', f'</{root_tag}>\n{nav_xml}\n</RelativeLayout>')
    with open(path, 'w', encoding='utf-8') as f:
        f.write(new_content)

wrap_layout('activity_smart_shopping.xml')
wrap_layout('activity_occasion_selection.xml')

print('Java and layout updates done')
