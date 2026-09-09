# Outfit Studio

## Project Overview

Outfit Studio is an Android-based AI personal styling application. This repository contains the Phase 0 foundational setup for both the backend (Flask) and frontend (Android).

## Technology Stack

**Backend:**
- Python
- Flask
- MySQL (via mysql-connector-python)

**Frontend:**
- Android Studio
- Java
- XML

**Future Integration (Not implemented in Phase 0):**
- OpenCV, MediaPipe, Pillow
- Unity (3D)
- Gemini/LLM integration

## Project Structure

```
OutfitStudio/
├── backend/
│   ├── app.py (Entry point)
│   ├── config.py
│   ├── requirements.txt
│   ├── .env.example
│   ├── routes/
│   ├── models/
│   ├── services/
│   ├── recommendation/
│   ├── cv/
│   └── utils/
├── android/
│   └── OutfitStudio/ (Android Project)
│       ├── app/
│       ├── build.gradle
│       └── settings.gradle
├── .gitignore
└── README.md
```

## Backend Setup

1. **Python Environment:** Ensure Python 3.x is installed.
2. **Virtual Environment:** Navigate to `backend/` and run:
   ```bash
   python -m venv venv
   # Activate it (Windows)
   .\venv\Scripts\activate
   # Activate it (Mac/Linux)
   source venv/bin/activate
   ```
3. **Install Requirements:** 
   ```bash
   pip install -r requirements.txt
   ```
4. **Configuration:** Copy `.env.example` to `.env` and fill in your MySQL credentials and Secret Key.
   ```bash
   cp .env.example .env
   ```
5. **Run Flask:** 
   ```bash
   python app.py
   ```
   The backend will start on `http://0.0.0.0:5000`.

## Database Setup

1. **MySQL Requirement:** Ensure MySQL 8+ is installed and running.
2. **Create Database:** Open your MySQL shell (e.g., `mysql -u root -p`) and run:
   ```sql
   CREATE DATABASE IF NOT EXISTS outfit_studio;
   ```
   *(Note: No tables are created in Phase 0. Do not create feature tables until required by the next phases).*
3. **Configuration Variables:** Set the database credentials in `backend/.env`. You can verify connectivity by starting the Flask server—it will print an error if the connection fails.

## Test API

**Endpoint:** `GET /api/test`

**Expected Response (HTTP 200 OK):**
```json
{
    "success": true,
    "message": "Backend is running"
}
```

## Android Setup

1. **Android Studio:** Open Android Studio.
2. **Open Project:** Select `Open` and navigate to the `android/OutfitStudio` directory.
3. **Gradle Sync:** Allow Android Studio to download Gradle and sync the project dependencies.
4. **Build and Run:** Run the `app` configuration on an emulator or physical device. The app currently contains foundational placeholder screens: Splash, Login, Register, and Home.

## API Conventions

- **Base Path:** `/api/`
- **JSON Format:** Request and response bodies use JSON.
- **Success Response:**
  ```json
  {
      "success": true,
      "message": "...",
      "data": {}
  }
  ```
- **Error Response:**
  ```json
  {
      "success": false,
      "message": "...",
      "error": "..."
  }
  ```
- **User ID Convention:** `INT AUTO_INCREMENT` (MySQL Primary Key).
- **Database Naming Convention:** Lowercase, `snake_case`, singular/plural usage must be consistent, primary keys named `id`, foreign keys named `[entity]_id`.
- **Image Handling Convention:** Images will be validated/processed by Flask and stored centrally. The database will only store references/paths/identifiers to the images, not raw blobs.

## Git Workflow

Development workflow to follow:

```bash
git pull origin main
# do development and testing
git add .
git commit -m "Your descriptive commit message"
git push origin main
```
