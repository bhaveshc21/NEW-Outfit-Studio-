using UnityEngine;

public class AvatarManager : MonoBehaviour
{
    public Transform avatarRoot;
    public Renderer[] skinRenderers;

    public void ApplyProfile(ProfileData profile)
    {
        if (profile == null) return;
        
        // Apply Height (Scaling)
        float targetScale = profile.height > 0 ? (profile.height / 170f) : 1.0f;
        targetScale = Mathf.Clamp(targetScale, 0.85f, 1.15f);
        
        if (avatarRoot != null)
        {
            avatarRoot.localScale = new Vector3(targetScale, targetScale, targetScale);
        }

        // Apply Skin Tone
        Color skinColor = GetSkinColorFromTone(profile.skin_tone);
        
        // Auto-find renderers if array is empty
        if (skinRenderers == null || skinRenderers.Length == 0)
        {
            if (avatarRoot != null) skinRenderers = avatarRoot.GetComponentsInChildren<Renderer>();
            else skinRenderers = GetComponentsInChildren<Renderer>();
        }

        if (skinRenderers != null)
        {
            foreach (var r in skinRenderers)
            {
                if (r != null && r.material != null)
                {
                    r.material.color = skinColor;
                    if (r.material.HasProperty("_BaseColor")) r.material.SetColor("_BaseColor", skinColor);
                    if (r.material.HasProperty("_Color")) r.material.SetColor("_Color", skinColor);
                }
            }
        }
    }

    private Color GetSkinColorFromTone(string skinTone)
    {
        if (string.IsNullOrEmpty(skinTone)) return new Color(0.88f, 0.73f, 0.62f); // Default Medium

        skinTone = skinTone.ToLower();
        
        if (skinTone.Contains("fair") || skinTone.Contains("light"))
        {
            return new Color(0.96f, 0.86f, 0.77f);
        }
        else if (skinTone.Contains("medium") || skinTone.Contains("olive"))
        {
            return new Color(0.88f, 0.73f, 0.62f);
        }
        else if (skinTone.Contains("tan") || skinTone.Contains("brown"))
        {
            return new Color(0.55f, 0.35f, 0.22f);
        }
        else if (skinTone.Contains("dark"))
        {
            return new Color(0.27f, 0.16f, 0.12f);
        }

        // Fallback
        return new Color(0.88f, 0.73f, 0.62f);
    }
}
