using UnityEngine;

[System.Serializable]
public class VisualizationData
{
    public ProfileData profile;
    public OutfitData outfit;
}

[System.Serializable]
public class ProfileData
{
    public float height;
    public string gender;
    public string body_type;
    public string skin_tone;
}

[System.Serializable]
public class OutfitData
{
    public ItemData top;
    public ItemData bottom;
    public ItemData footwear;
}

[System.Serializable]
public class ItemData
{
    public int id;
    public string name;
    public string model_key;
    public string image_url;
    public string model_3d_url;
}

public class AndroidReceiver : MonoBehaviour
{
    public AvatarManager avatarManager;
    public ClothingManager clothingManager;

    // Called by Android via UnityPlayer.UnitySendMessage
    public void ReceiveVisualizationData(string jsonPayload)
    {
        Debug.Log("Received Payload from Android: " + jsonPayload);
        
        try
        {
            VisualizationData data = JsonUtility.FromJson<VisualizationData>(jsonPayload);
            
            if (avatarManager != null)
            {
                avatarManager.ApplyProfile(data.profile);
            }
            
            if (clothingManager != null)
            {
                clothingManager.ApplyOutfit(data.outfit);
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError("Failed to parse VisualizationData: " + e.Message);
        }
    }
}
