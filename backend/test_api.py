import requests

# We need a dummy image
from PIL import Image
img = Image.new('RGB', (200, 200), color = 'red')
img.save('test.jpg')

url = 'http://localhost:5000/api/appearance/analyze'
files = {'image': open('test.jpg', 'rb')}
data = {'user_id': '1'}

try:
    response = requests.post(url, files=files, data=data)
    print("Status:", response.status_code)
    print("Body:", response.text)
except Exception as e:
    print("Error:", e)
