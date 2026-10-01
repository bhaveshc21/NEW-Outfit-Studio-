import mysql.connector
from config import Config

def migrate():
    try:
        print("Connecting to database...")
        connection = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD,
            database=Config.DATABASE_NAME
        )
        
        if connection.is_connected():
            cursor = connection.cursor()
            
            # Create saved_outfits table
            saved_outfits_table_query = """
            CREATE TABLE IF NOT EXISTS saved_outfits (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL,
                top_id INT NULL,
                outerwear_id INT NULL,
                bottom_id INT NULL,
                footwear_id INT NULL,
                fashion_score FLOAT NULL,
                reason TEXT NULL,
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE,
                FOREIGN KEY (top_id) REFERENCES wardrobe_items(id) ON DELETE SET NULL,
                FOREIGN KEY (outerwear_id) REFERENCES wardrobe_items(id) ON DELETE SET NULL,
                FOREIGN KEY (bottom_id) REFERENCES wardrobe_items(id) ON DELETE SET NULL,
                FOREIGN KEY (footwear_id) REFERENCES wardrobe_items(id) ON DELETE SET NULL
            )
            """
            print("Creating saved_outfits table...")
            cursor.execute(saved_outfits_table_query)
            print("Table saved_outfits created successfully.")
            
            connection.commit()
            cursor.close()
            connection.close()
            print("Migration completed successfully.")
            
    except Exception as e:
        print(f"Error during migration: {e}")

if __name__ == '__main__':
    migrate()
