import mysql.connector
from config import Config

def migrate():
    try:
        connection = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            database=Config.DATABASE_NAME,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD
        )
        if connection.is_connected():
            cursor = connection.cursor()
            
            # Check if column exists
            cursor.execute("SHOW COLUMNS FROM users LIKE 'gender'")
            result = cursor.fetchone()
            
            if not result:
                # Add column
                cursor.execute("ALTER TABLE users ADD COLUMN gender VARCHAR(10) NOT NULL DEFAULT 'Male'")
                connection.commit()
                print("Successfully added 'gender' column to 'users' table.")
            else:
                print("'gender' column already exists in 'users' table.")
                
            cursor.close()
            connection.close()
    except Exception as e:
        print(f"Error during migration: {e}")

if __name__ == "__main__":
    migrate()
