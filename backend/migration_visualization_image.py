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
        cursor.execute("ALTER TABLE users ADD COLUMN visualization_image VARCHAR(255) NULL;")
        connection.commit()
        print("Successfully added visualization_image to users.")
    except Exception as e:
        print(f"Error altering table: {e}")
    finally:
        cursor.close()
        connection.close()

if __name__ == '__main__':
    alter_table()
