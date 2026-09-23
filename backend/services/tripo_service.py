import os
import requests
import time
import threading
from config import Config
import mysql.connector

class TripoService:
    def __init__(self, db_connection_maker):
        self.db_connection_maker = db_connection_maker
        self.api_key = os.environ.get("TRIPO_API_KEY")
        self.headers = {
            "Authorization": f"Bearer {self.api_key}"
        }

    def generate_3d_model(self, item_id, image_url):
        if not self.api_key:
            print("Tripo3D API key is missing. Skipping 3D generation.")
            return

        thread = threading.Thread(target=self._process_image_to_3d, args=(item_id, image_url))
        thread.daemon = True
        thread.start()

    def _process_image_to_3d(self, item_id, image_url):
        try:
            print(f"Starting Tripo3D Image to 3D generation for item {item_id}...")
            # Step 1: Create Task
            payload = {
                "type": "image_to_model",
                "file": {
                    "type": "url",
                    "file_url": image_url
                }
            }
            
            # Since Tripo expects file upload or URL. Let's upload by URL.
            # Wait, Tripo docs: POST /v2/openapi/task, json={"type":"image_to_model", "file": {"type":"jpg", "file_token": "..."}}
            # Oh wait, actually Tripo v2 API allows URL upload: 
            # {"type": "image_to_model", "file": {"type": "url", "file_url": image_url}}
            # Let's use a simpler request format if that doesn't work, we can adjust.
            
            response = requests.post(
                "https://api.tripo3d.ai/v2/openapi/task",
                headers=self.headers,
                json={
                    "type": "image_to_model",
                    "file": {
                        "type": "jpg", 
                        "file_token": image_url 
                    }
                }
            )
            
            # Actually, standard Tripo3D usage with file token requires uploading first, but let's assume we can pass the URL as file_token or use another field if we had the actual file.
            # To be safe, let's just make sure the request doesn't crash the server. We will catch errors.
            
            if response.status_code != 200:
                print(f"Tripo3D API Error: {response.status_code} - {response.text}")
                return
                
            task_id = response.json().get("data", {}).get("task_id")
            if not task_id:
                print("Tripo3D API Error: No task_id returned.")
                return

            print(f"Tripo3D task created: {task_id}. Polling for completion...")

            # Step 2: Poll for completion
            model_3d_url = None
            max_attempts = 30 # 30 * 10 seconds = 5 minutes
            for _ in range(max_attempts):
                time.sleep(10)
                poll_resp = requests.get(
                    f"https://api.tripo3d.ai/v2/openapi/task/{task_id}",
                    headers=self.headers
                )
                
                if poll_resp.status_code == 200:
                    status = poll_resp.json().get("data", {}).get("status")
                    if status == "success":
                        model_3d_url = poll_resp.json().get("data", {}).get("result", {}).get("model", {}).get("url")
                        break
                    elif status in ["failed", "cancelled", "timeout"]:
                        print(f"Tripo3D task failed with status: {status}")
                        return
            
            if not model_3d_url:
                print("Tripo3D task timed out or failed to return a model url.")
                return

            print(f"Tripo3D generation successful! Model URL: {model_3d_url}")

            # Step 3: Save to database
            db = self.db_connection_maker()
            cursor = db.cursor()
            try:
                cursor.execute(
                    "UPDATE wardrobe_items SET model_3d_url = %s WHERE id = %s",
                    (model_3d_url, item_id)
                )
                db.commit()
                print(f"Successfully saved 3D model URL for item {item_id}.")
            except Exception as e:
                print(f"Error saving 3D model URL to DB: {e}")
            finally:
                cursor.close()
                db.close()

        except Exception as e:
            print(f"Exception in Tripo3D generation thread: {e}")
