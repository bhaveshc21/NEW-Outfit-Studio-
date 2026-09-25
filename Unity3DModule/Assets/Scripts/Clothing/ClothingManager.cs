using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using System.Threading.Tasks;
using GLTFast;

public class ClothingManager : MonoBehaviour
{
    [System.Serializable]
    public class ClothingDictionary
    {
        public string key;
        public GameObject modelPrefab;
    }

    [Header("Model Library Mapping")]
    public List<ClothingDictionary> topModels;
    public List<ClothingDictionary> bottomModels;
    public List<ClothingDictionary> footwearModels;

    [Header("Mount Points")]
    public Transform topMount;
    public Transform bottomMount;
    public Transform footwearMount;

    private GameObject currentTop;
    private GameObject currentBottom;
    private GameObject currentFootwear;

    public void ApplyOutfit(OutfitData outfit)
    {
        if (outfit == null) return;

        // Apply Top
        if (outfit.top != null)
        {
            ApplyClothingItem(outfit.top, topModels, topMount, ref currentTop);
        }

        // Apply Bottom
        if (outfit.bottom != null)
        {
            ApplyClothingItem(outfit.bottom, bottomModels, bottomMount, ref currentBottom);
        }

        // Apply Footwear
        if (outfit.footwear != null)
        {
            ApplyClothingItem(outfit.footwear, footwearModels, footwearMount, ref currentFootwear);
        }
    }

    private void ApplyClothingItem(ItemData itemData, List<ClothingDictionary> dictionary, Transform mountPoint, ref GameObject currentInstance)
    {
        if (currentInstance != null)
        {
            Destroy(currentInstance);
        }

        if (itemData == null || dictionary == null || mountPoint == null)
            return;

        // 1. AI 3D Model Generation (Meshy GLB)
        if (!string.IsNullOrEmpty(itemData.model_3d_url))
        {
            // Note: glTFast must be installed via Package Manager
            LoadGLB(itemData.model_3d_url, mountPoint);
            return; 
        }

        // 2. Dictionary Fallback
        GameObject prefabToLoad = FindPrefabInDictionary(itemData.model_key, dictionary);

        GameObject inst = null;
        if (prefabToLoad != null)
        {
            inst = Instantiate(prefabToLoad, mountPoint);
        }
        else
        {
            Debug.LogWarning("No clothing model found for key: " + itemData.model_key + ". Generating primitive fallback.");
            if (itemData.model_key == "Top") inst = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            else if (itemData.model_key == "Bottoms") inst = GameObject.CreatePrimitive(PrimitiveType.Cube);
            else if (itemData.model_key == "Shoes") inst = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            else inst = GameObject.CreatePrimitive(PrimitiveType.Quad);
            
            inst.transform.SetParent(mountPoint, false);
            // Destroy the default primitive collider to avoid physics issues
            Collider col = inst.GetComponent<Collider>();
            if (col != null) Destroy(col);
            
            // Give it a generic offset so it doesn't clip directly inside the avatar
            inst.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        }

        inst.transform.localPosition = Vector3.zero;
        inst.transform.localRotation = Quaternion.identity;
        currentInstance = inst;

        // 3. 2D Texture Mapping on Blank Prefab
        if (!string.IsNullOrEmpty(itemData.image_url))
        {
            StartCoroutine(DownloadAndApplyTexture(itemData.image_url, inst));
        }
    }

    private GameObject FindPrefabInDictionary(string modelKey, List<ClothingDictionary> dictionary)
    {
        if (string.IsNullOrEmpty(modelKey)) return null;

        foreach (var item in dictionary)
        {
            if (item.key.Equals(modelKey, System.StringComparison.OrdinalIgnoreCase))
                return item.modelPrefab;
        }

        string fallbackKey = "generic_" + modelKey.Split('_')[modelKey.Split('_').Length - 1];
        foreach (var item in dictionary)
        {
            if (item.key.Equals(fallbackKey, System.StringComparison.OrdinalIgnoreCase))
                return item.modelPrefab;
        }
        return null;
    }

    private IEnumerator DownloadAndApplyTexture(string url, GameObject targetObj)
    {
        using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(url))
        {
            yield return uwr.SendWebRequest();

            if (uwr.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Failed to download texture: " + uwr.error);
            }
            else
            {
                Texture2D texture = DownloadHandlerTexture.GetContent(uwr);
                Renderer[] renderers = targetObj.GetComponentsInChildren<Renderer>();
                foreach (var r in renderers)
                {
                    if (r != null && r.material != null)
                    {
                        r.material.mainTexture = texture; 
                        if (r.material.HasProperty("_BaseMap")) r.material.SetTexture("_BaseMap", texture);
                        if (r.material.HasProperty("_MainTex")) r.material.SetTexture("_MainTex", texture);
                        
                        r.material.color = Color.white;
                        if (r.material.HasProperty("_BaseColor")) r.material.SetColor("_BaseColor", Color.white);
                        if (r.material.HasProperty("_Color")) r.material.SetColor("_Color", Color.white);
                    }
                }
            }
        }
    }

    private async void LoadGLB(string url, Transform mountPoint)
    {
        var gltf = new GltfImport();
        bool success = await gltf.Load(url);
        if (success) {
            gltf.InstantiateMainScene(mountPoint);
        } else {
            Debug.LogError("Failed to load GLB from: " + url);
        }
    }
}
