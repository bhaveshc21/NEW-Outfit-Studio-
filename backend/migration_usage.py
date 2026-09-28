import mysql.connector
from config import Config

def migrate():
    connection = mysql.connector.connect(
        host=Config.DATABASE_HOST,
        port=Config.DATABASE_PORT,
        database=Config.DATABASE_NAME,
        user=Config.DATABASE_USER,
        password=Config.DATABASE_PASSWORD
    )
    cursor = connection.cursor()
    try:
        cursor.execute("ALTER TABLE wardrobe_items ADD COLUMN usage_count INT NOT NULL DEFAULT 0;")
        cursor.execute("ALTER TABLE wardrobe_items ADD COLUMN last_worn_at DATETIME NULL;")
        connection.commit()
        print("Successfully added usage tracking columns.")
    except Exception as e:
        print(f"Error altering table: {e}")
    finally:
        cursor.close()
        connection.close()

if __name__ == '__main__':
    migrate()
