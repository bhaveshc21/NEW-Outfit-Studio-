# Feature 2 — Appearance Analysis Documentation

## Overview
Feature 2 introduces an "Appearance Analysis" module to the Outfit Studio app. It allows users to upload a photo to estimate their Face Shape, Skin Tone, and Body Type using Computer Vision (OpenCV and MediaPipe) and existing profile measurements.

## Architecture
- **Android UI**: Collects image (Camera/Gallery) and makes a multipart HTTP POST request using Retrofit.
- **Flask API**: Receives the image and coordinates the Computer Vision tasks.
- **Computer Vision (CV)**: Processes the image and user's profile data to estimate the appearance characteristics.
- **MySQL Database**: Stores the estimated results associated with the `user_id`.

## Database Schema
Table: `appearance_analysis`
- `id` (INT, Primary Key)
- `user_id` (INT, Foreign Key to `users.id`, Unique)
- `face_shape` (VARCHAR)
- `skin_tone` (VARCHAR)
- `body_type` (VARCHAR)
- `image_path` (VARCHAR)

## API Endpoints

### 1. Analyze Appearance
`POST /api/appearance/analyze`
- **Request Format**: `multipart/form-data`
  - `user_id` (Text/Integer)
  - `image` (File/Image)
- **Response Format** (JSON):
```json
{
  "success": true,
  "message": "Appearance analysis completed",
  "data": {
    "face_shape": "Oval",
    "skin_tone": "Medium",
    "body_type": "Rectangle"
  }
}
```

### 2. Get Appearance
`GET /api/appearance/<user_id>`
- **Response Format** (JSON): Returns the same `data` object as above if it exists.

## Algorithms

### Face Shape Estimation
Uses **MediaPipe Face Mesh** to detect facial landmarks. Calculates the face length (top of head to chin), face width (cheek to cheek), and jaw width. Uses length-to-width ratios and jaw width proportions to heuristically classify the face as Oval, Round, Square, Heart, or Oblong.

### Skin Tone Estimation
Uses **OpenCV**. Extracts the center 20% of the image (as a rough approximation of the face/forehead to avoid hair/background), converts the color space to YCrCb, and analyzes the average Y (luminance) channel to categorize the skin tone as Light, Medium, Tan, or Deep.

### Body Type Estimation
Analyzes the existing profile measurements (`chest`, `waist`, `hip`, `shoulder`) fetched from the database. Uses standard measurement differences (e.g., if hips are significantly larger than chest, it's a Triangle/Pear; if chest/hips are similar and waist is small, it's an Hourglass) to categorize the body type.

## Image Requirements
- Image must contain exactly **one** detectable human face.
- Max size is internally scaled down to 1000px if it's too large, to maintain processing performance.

## Error Handling
- Invalid image, no face, or multiple faces detected return a clean JSON error response `{"success": false, "message": "..."}`.
- Android app displays a Toast message gracefully if an error occurs, preventing crashes.

## Setup & Run Instructions

### 1. Backend Setup & Run
1. Open a terminal and navigate to the backend directory:
   ```bash
   cd backend
   ```
2. Activate your virtual environment:
   ```bash
   # Windows
   .\venv\Scripts\activate
   ```
3. Run the Flask server:
   ```bash
   python app.py
   ```

### 2. Android App Run
1. Open the `android/OutfitStudio` project in Android Studio.
2. Build the project (Gradle Sync).
3. Ensure the Android Emulator is running. (The app is configured to point to `http://10.0.2.2:5000/api/` which routes to the host machine's localhost).
4. Run the app on the Emulator.
5. In the app, navigate to the Appearance Analysis screen to test the flow.

## Testing Procedure
1. Start both the Backend Server and Android App.
2. Ensure you have a logged-in user session in the Android app (so `TokenManager` has a valid `user_id`).
3. Ensure the user has profile measurements set up (for body type calculation).
4. Open the **Appearance Analysis** Activity.
5. Tap **Camera** or **Gallery** and select a clear portrait photo.
6. Tap **Analyze Appearance**.
7. Wait for the loading spinner to complete; the results (Face Shape, Skin Tone, Body Type) should appear.
8. Restart the app and reopen the screen; the previously saved results should load automatically via the GET API.
