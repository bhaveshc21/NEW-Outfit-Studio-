import mysql.connector
from config import Config

def alter_table():
    connection = mysql.connector.connect(
        host=Config.DATABASE_HOST,
        port=Config.DATABASE_PORT,
        database=Config.DATABASE_NAME,
        user=Config.DATABASE_USER,
        password=Config.DATABASE_PASSWORD
    )
    cursor = connection.cursor()
    try:
        cursor.execute("ALTER TABLE wardrobe_items ADD COLUMN model_3d_url VARCHAR(500);")
        connection.commit()
        print("Successfully added model_3d_url to wardrobe_items.")
    except Exception as e:
        print(f"Error altering table: {e}")
    finally:
        cursor.close()
        connection.close()

if __name__ == '__main__':
    alter_table()
