import os
import re

base_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main'

nav_xml = '''
    <com.google.android.material.bottomnavigation.BottomNavigationView
        android:id="@+id/bottomNavigation"
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        android:layout_alignParentBottom="true"
        app:menu="@menu/bottom_nav"
        app:itemIconTint="@color/primary"
        app:itemTextColor="@color/primary"
        android:background="@color/surface"
        app:labelVisibilityMode="labeled"
        android:elevation="16dp"/>
'''

def update_wardrobe():
    path = os.path.join(base_dir, 'res', 'layout', 'activity_wardrobe.xml')
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    if 'bottomNavigation' not in content:
        content = content.replace('app:layout_constraintBottom_toBottomOf="parent"', 'app:layout_constraintBottom_toTopOf="@+id/bottomNavigation"')
        content = content.replace('</androidx.constraintlayout.widget.ConstraintLayout>', nav_xml + '</androidx.constraintlayout.widget.ConstraintLayout>')
        with open(path, 'w', encoding='utf-8') as f:
            f.write(content)

def update_stats():
    path = os.path.join(base_dir, 'res', 'layout', 'activity_closet_statistics.xml')
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    if 'bottomNavigation' not in content:
        content = content.replace('app:layout_constraintBottom_toBottomOf="parent"', 'app:layout_constraintBottom_toTopOf="@+id/bottomNavigation"')
        content = content.replace('</androidx.constraintlayout.widget.ConstraintLayout>', nav_xml + '</androidx.constraintlayout.widget.ConstraintLayout>')
        with open(path, 'w', encoding='utf-8') as f:
            f.write(content)

def update_shop():
    path = os.path.join(base_dir, 'res', 'layout', 'activity_smart_shopping.xml')
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    if 'bottomNavigation' not in content:
        content = content.replace('</LinearLayout>', nav_xml + '</LinearLayout>')
        # Note: shop is a RelativeLayout inside or LinearLayout? Let's check shop.
        pass

update_wardrobe()
update_stats()
print('XML layouts updated')
