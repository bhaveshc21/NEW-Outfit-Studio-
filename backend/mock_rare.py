import mysql.connector
from config import Config

db = mysql.connector.connect(
    host=Config.DATABASE_HOST,
    user=Config.DATABASE_USER,
    password=Config.DATABASE_PASSWORD,
    database=Config.DATABASE_NAME
)

cursor = db.cursor()
cursor.execute("UPDATE wardrobe_items SET last_worn_at = DATE_SUB(NOW(), INTERVAL 5 MONTH), usage_count = 1 WHERE usage_count = 0 LIMIT 1")
db.commit()

cursor.execute("SELECT name, last_worn_at FROM wardrobe_items WHERE last_worn_at <= DATE_SUB(NOW(), INTERVAL 4 MONTH) LIMIT 1")
res = cursor.fetchone()
print("Updated item:", res)

cursor.close()
db.close()
