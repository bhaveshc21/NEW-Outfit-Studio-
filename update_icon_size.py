import os
import glob

layout_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\res\layout'

files_to_check = [
    'activity_home.xml',
    'activity_wardrobe.xml',
    'activity_occasion_selection.xml',
    'activity_closet_statistics.xml',
    'activity_smart_shopping.xml'
]

for filename in files_to_check:
    path = os.path.join(layout_dir, filename)
    if os.path.exists(path):
        with open(path, 'r', encoding='utf-8') as f:
            content = f.read()
            
        if 'app:itemIconSize' not in content:
            # Add app:itemIconSize="20dp" just after android:id="@+id/bottomNavigation"
            content = content.replace(
                'android:id="@+id/bottomNavigation"',
                'android:id="@+id/bottomNavigation"\n        app:itemIconSize="20dp"'
            )
            with open(path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f'Updated {filename}')
        else:
            # Update existing if needed
            import re
            content = re.sub(r'app:itemIconSize="[^"]*"', 'app:itemIconSize="20dp"', content)
            with open(path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f'Re-updated {filename}')
