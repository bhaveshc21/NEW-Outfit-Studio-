package com.outfitstudio;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import com.outfitstudio.models.DonationCenter;

import java.util.ArrayList;
import java.util.List;

public class DonationActivity extends AppCompatActivity {

    private RecyclerView rvDonationCenters;
    private DonationCenterAdapter adapter;
    private List<DonationCenter> centerList;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_donation);

        rvDonationCenters = findViewById(R.id.rvDonationCenters);
        rvDonationCenters.setLayoutManager(new LinearLayoutManager(this));

        centerList = new ArrayList<>();
        
        // Load the 5 approved organizations
        centerList.add(new DonationCenter(
            "goodwill_india",
            "1. Goodwill India / More Welfare Trust",
            "More Petrol Pump, Shivane, Pune, Maharashtra",
            "📞 020-25290909 / 9011013330",
            null,
            "Goodwill India More Welfare Trust, Pune"
        ));
        
        centerList.add(new DonationCenter(
            "sevadeep",
            "2. SevaDeep",
            "Row House Gulmarg Co-op Hsg Soc, Baner, Pune, Maharashtra",
            "📞 +91 9518541719",
            "🕙 Daily, 10:00 AM – 6:00 PM",
            "SevaDeep, Baner, Pune"
        ));
        
        centerList.add(new DonationCenter(
            "share_with_india",
            "3. Share With India",
            "Swargate, Pune, Maharashtra",
            null,
            null,
            "Share With India, Swargate, Pune"
        ));
        
        centerList.add(new DonationCenter(
            "savali",
            "4. SAVALI",
            "Plot No. 13, S. No. 78, Left Bhusari Colony, Paud Road, Kothrud, Pune - 41103",
            null,
            null,
            "Plot No. 13, S. No. 78, Left Bhusari Colony, Paud Road, Kothrud, Pune - 41103"
        ));
        
        centerList.add(new DonationCenter(
            "poornam_ecovision",
            "5. Poornam Ecovision Foundation",
            "S. No. 41/B/1, Kaushalya Nivas, Charvad Path, Jadhav Nagar, Vadgaon Budruk, Sinhagad Road, Pune 411041",
            null,
            null,
            "Poornam Ecovision Foundation, Sinhagad Road, Pune"
        ));

        adapter = new DonationCenterAdapter(this, centerList);
        rvDonationCenters.setAdapter(adapter);
    }
}
