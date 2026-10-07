import os
import mysql.connector

app_dir = r'c:\Users\bhave\Desktop\NEW-Outfit-Studio-\backend'
db = mysql.connector.connect(host='localhost', port=3306, database='outfit_studio', user='root', password='bhaveshc@123')
cursor = db.cursor(dictionary=True)
cursor.execute('SELECT id, image_path FROM wardrobe_items')
items = cursor.fetchall()

missing = []
for item in items:
    path = os.path.join(app_dir, item['image_path'])
    if not os.path.exists(path):
        missing.append(item['id'])

if missing:
    format_strings = ','.join(['%s'] * len(missing))
    cursor.execute(f'DELETE FROM wardrobe_items WHERE id IN ({format_strings})', tuple(missing))
    db.commit()
    print(f'Deleted {len(missing)} missing items.')
else:
    print('No missing items.')

db.close()
