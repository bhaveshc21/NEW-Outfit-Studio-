import os

java_dir = r'c:\Users\ue\OneDrive\Desktop\New Outfit Studio\android\OutfitStudio\app\src\main\java\com\outfitstudio'

# Update HomeActivity.java
home_activity = os.path.join(java_dir, 'HomeActivity.java')
with open(home_activity, 'r') as f:
    content = f.read()

imports = '''import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.outfitstudio.api.models.GeneratedOutfit;
import java.util.List;
'''
if 'androidx.recyclerview.widget.RecyclerView' not in content:
    content = content.replace('import androidx.appcompat.app.AppCompatActivity;', imports + '\nimport androidx.appcompat.app.AppCompatActivity;')

if 'private RecyclerView rvRecentOutfits;' not in content:
    content = content.replace('private TextView tvWelcome', 'private RecyclerView rvRecentOutfits;\n    private TextView tvEmptyRecent;\n    private TextView tvWelcome')
    
    content = content.replace(
        'tvAppearanceStatus = findViewById(R.id.tvAppearanceStatus);',
        'tvAppearanceStatus = findViewById(R.id.tvAppearanceStatus);\n        rvRecentOutfits = findViewById(R.id.rvRecentOutfits);\n        tvEmptyRecent = findViewById(R.id.tvEmptyRecent);\n        rvRecentOutfits.setLayoutManager(new LinearLayoutManager(this));'
    )
    
    update_ui = '''        if (data.getRecentOutfits() != null && !data.getRecentOutfits().isEmpty()) {
            rvRecentOutfits.setVisibility(View.VISIBLE);
            tvEmptyRecent.setVisibility(View.GONE);
            OutfitAdapter adapter = new OutfitAdapter(this, data.getRecentOutfits());
            rvRecentOutfits.setAdapter(adapter);
        } else {
            rvRecentOutfits.setVisibility(View.GONE);
            tvEmptyRecent.setVisibility(View.VISIBLE);
        }'''
        
    content = content.replace(
        '        if (data.getFeatureStatus() != null) {',
        update_ui + '\n\n        if (data.getFeatureStatus() != null) {'
    )
    
    with open(home_activity, 'w') as f:
        f.write(content)

print("Updated HomeActivity.java")
