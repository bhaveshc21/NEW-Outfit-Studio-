import requests
import os

BASE_URL = "http://127.0.0.1:5000/api/wardrobe"

# Assuming user_id 1 exists from previous testing. If not, this is just to verify routes
user_id = 1 

print("--- Testing Wardrobe API ---")

# 1. Create a dummy image
with open('dummy.jpg', 'wb') as f:
    f.write(os.urandom(1024))

# 2. Add Wardrobe Item
print("\n[POST] /api/wardrobe")
with open('dummy.jpg', 'rb') as img:
    files = {'image': ('dummy.jpg', img, 'image/jpeg')}
    data = {
        'user_id': user_id,
        'name': 'Test Shirt',
        'category': 'Shirts',
        'color': 'Blue'
    }
    response = requests.post(BASE_URL, data=data, files=files)
    print(response.status_code, response.json())
    item_id = response.json().get('data', {}).get('id')

# 3. Get User Wardrobe
print(f"\n[GET] /api/wardrobe/{user_id}")
response = requests.get(f"{BASE_URL}/{user_id}")
print(response.status_code, response.json())

# 4. Get Wardrobe Item
if item_id:
    print(f"\n[GET] /api/wardrobe/item/{item_id}")
    response = requests.get(f"{BASE_URL}/item/{item_id}?user_id={user_id}")
    print(response.status_code, response.json())

    # 5. Update Wardrobe Item
    print(f"\n[PUT] /api/wardrobe/{item_id}")
    update_data = {
        'user_id': user_id,
        'name': 'Updated Shirt',
        'category': 'Shirts',
        'color': 'Red'
    }
    response = requests.put(f"{BASE_URL}/{item_id}", data=update_data)
    print(response.status_code, response.json())

    # 6. Delete Wardrobe Item
    print(f"\n[DELETE] /api/wardrobe/{item_id}")
    response = requests.delete(f"{BASE_URL}/{item_id}?user_id={user_id}")
    print(response.status_code, response.json())

if os.path.exists('dummy.jpg'):
    os.remove('dummy.jpg')
