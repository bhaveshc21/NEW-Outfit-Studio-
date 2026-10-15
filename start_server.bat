@echo off
echo ===================================================
echo Setting up ADB reverse for Android USB testing...
echo ===================================================
where adb >nul 2>nul
if %ERRORLEVEL% equ 0 (
    adb reverse tcp:5000 tcp:5000
    echo ADB reverse configured: phone port 5000 -^> PC port 5000
) else (
    if exist "%LOCALAPPDATA%\Android\Sdk\platform-tools\adb.exe" (
        "%LOCALAPPDATA%\Android\Sdk\platform-tools\adb.exe" reverse tcp:5000 tcp:5000
        echo ADB reverse configured: phone port 5000 -^> PC port 5000
    ) else (
        echo ADB not found in PATH or standard Android SDK location.
    )
)

echo.
echo ===================================================
echo Starting Flask Backend Server (Port 5000)...
echo ===================================================
cd /d "%~dp0backend"
venv\Scripts\python.exe app.py
pause
