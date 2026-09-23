# Outfit Studio: 3D Engine Handoff Guide

## Welcome, Teammate!
If you are reading this, your teammate has successfully laid the groundwork for the **Smart Hybrid 3D Engine**. The Python backend, MySQL database, and Android routing logic have all been completely coded to support Generative AI 3D meshes (via Tripo3D) and instant 2D texture mapping.

**The code works perfectly, but the visual Unity scene needs final configuring before the 3D models will display on the screen.** 

If you are running the Android app and seeing an empty skybox, follow the steps below to fix the Unity Scene and export it!

---

## The Architecture You Inherited
1. **Tripo3D Backend:** When a user uploads a Jacket, Coat, or Shoe, `backend/services/tripo_service.py` is triggered. It talks to the Tripo3D API to generate a fully custom `.glb` 3D model, and saves the download URL to the `wardrobe_items` database.
2. **2D Texture Mapping:** When a user uploads a Shirt or Pants, the backend just passes the image URL.
3. **Unity Hybrid Engine:** In `Unity3DModule/Assets/Scripts/Clothing/ClothingManager.cs`, the script is designed to either download the Tripo3D `.glb` model (using `glTFast`) or instantly map the 2D image as a texture onto a generic 3D prefab.

---

## 🛠️ Your Mission: Finish the Unity Setup

The Unity C# scripts are already written. You just need to set up the visual Scene in the Unity Editor and export it to Android.

### 1. Setup the Scene
1. Open the `Unity3DModule` project in Unity Hub.
2. Open the `AvatarScene` (or `SampleScene`).
3. Download a free mannequin character named **Remy** from [Mixamo.com](https://www.mixamo.com) (Format: FBX for Unity, T-Pose).
4. Drag `Remy.fbx` into your `Assets/Models` folder in Unity, and then drag him into your Hierarchy so he is in the 3D world.
5. Create an empty GameObject in the Hierarchy named `OutfitStudioManager`.
6. Add the `Android Receiver`, `Avatar Manager`, and `Clothing Manager` scripts to it.
7. Drag `OutfitStudioManager` into the slots on the Android Receiver script.
8. Drag `Remy` into the **Avatar Root** slot on the Avatar Manager script.

### 2. Fix the Camera & Build Settings (Crucial!)
If you just see an empty skybox in the Android app, it means the camera is looking the wrong way or the wrong scene was exported!
- **Camera:** Click the `Main Camera` in the Hierarchy and set its position to `X: 0, Y: 1, Z: -3`.
- **Build Settings:** Go to **File -> Build Settings**. Click **Add Open Scenes**. Ensure your `AvatarScene` is at **Index 0** in the list, and remove any blank empty scenes.

### 3. Setup the API Keys
- Go to [platform.tripo3d.ai](https://platform.tripo3d.ai/), create a free account, and get an API key.
- Create a `.env` file in the `backend` folder and add: `TRIPO_API_KEY=your_key_here`.

### 4. Export & Run
- In Unity Build Settings, make sure **Export Project** is checked, and export it into the Android project's `unityLibrary` folder to overwrite the old one.
- Open Android Studio, click **Sync Project with Gradle Files**, and run the app!
