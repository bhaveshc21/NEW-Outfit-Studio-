import mysql.connector
from mysql.connector import Error
from config import Config

def init_db():
    try:
        print(f"Connecting to database server...")
        # First connect without database to create it if it doesn't exist
        connection = mysql.connector.connect(
            host=Config.DATABASE_HOST,
            port=Config.DATABASE_PORT,
            user=Config.DATABASE_USER,
            password=Config.DATABASE_PASSWORD
        )
        
        if connection.is_connected():
            cursor = connection.cursor()
            
            # Create database
            cursor.execute(f"CREATE DATABASE IF NOT EXISTS {Config.DATABASE_NAME}")
            print(f"Database '{Config.DATABASE_NAME}' created or already exists.")
            
            # Use database
            cursor.execute(f"USE {Config.DATABASE_NAME}")
            
            # Create users table
            users_table_query = """
            CREATE TABLE IF NOT EXISTS users (
                id INT AUTO_INCREMENT PRIMARY KEY,
                name VARCHAR(100) NOT NULL,
                email VARCHAR(100) UNIQUE NOT NULL,
                password VARCHAR(255) NOT NULL,
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
            )
            """
            cursor.execute(users_table_query)
            print("Table 'users' created or already exists.")
            
            # Create profiles table
            profiles_table_query = """
            CREATE TABLE IF NOT EXISTS profiles (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL UNIQUE,
                height FLOAT,
                chest FLOAT,
                waist FLOAT,
                hip FLOAT,
                shoulder FLOAT,
                inseam FLOAT,
                preferred_style VARCHAR(255),
                preferred_colors VARCHAR(255),
                preferred_occasions VARCHAR(255),
                updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
            )
            """
            cursor.execute(profiles_table_query)
            print("Table 'profiles' created or already exists.")
            
            # Create appearance_analysis table
            appearance_table_query = """
            CREATE TABLE IF NOT EXISTS appearance_analysis (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL UNIQUE,
                face_shape VARCHAR(50),
                skin_tone VARCHAR(50),
                body_type VARCHAR(50),
                image_path VARCHAR(255),
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
            )
            """
            cursor.execute(appearance_table_query)
            print("Table 'appearance_analysis' created or already exists.")
            
            connection.commit()
            cursor.close()
            connection.close()
            print("Database initialization completed successfully.")
            
    except Error as e:
        print(f"Error while connecting to MySQL: {e}")

if __name__ == '__main__':
    init_db()
