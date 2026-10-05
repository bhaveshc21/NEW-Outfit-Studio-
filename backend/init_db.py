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
                gender VARCHAR(10) NOT NULL,
                profile_image VARCHAR(255) NULL,
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
            
            # Create wardrobe_items table
            wardrobe_items_table_query = """
            CREATE TABLE IF NOT EXISTS wardrobe_items (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL,
                name VARCHAR(100),
                category VARCHAR(50),
                color VARCHAR(50),
                image_path VARCHAR(255),
                model_3d_url VARCHAR(500),
                usage_count INT NOT NULL DEFAULT 0,
                last_worn_at DATETIME NULL,
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
            )
            """
            cursor.execute(wardrobe_items_table_query)
            print("Table 'wardrobe_items' created or already exists.")
            
            # Create planner_schedules table
            planner_schedules_table_query = """
            CREATE TABLE IF NOT EXISTS planner_schedules (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL,
                occasion VARCHAR(50) NOT NULL,
                is_recurring BOOLEAN NOT NULL DEFAULT 1,
                day_of_week INT NULL,
                specific_date DATE NULL,
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
            )
            """
            cursor.execute(planner_schedules_table_query)
            print("Table 'planner_schedules' created or already exists.")
            
            # Create planned_outfits table
            planned_outfits_table_query = """
            CREATE TABLE IF NOT EXISTS planned_outfits (
                id INT AUTO_INCREMENT PRIMARY KEY,
                user_id INT NOT NULL,
                planned_date DATE NOT NULL,
                occasion VARCHAR(50) NOT NULL,
                top_id INT NULL,
                outerwear_id INT NULL,
                bottom_id INT NULL,
                footwear_id INT NULL,
                accessories_ids VARCHAR(255) NULL,
                fashion_score FLOAT NULL,
                reason TEXT NULL,
                is_locked BOOLEAN NOT NULL DEFAULT 0,
                created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE,
                UNIQUE KEY unique_user_date (user_id, planned_date)
            )
            """
            cursor.execute(planned_outfits_table_query)
            print("Table 'planned_outfits' created or already exists.")
            
            connection.commit()
            cursor.close()
            connection.close()
            print("Database initialization completed successfully.")
            
    except Error as e:
        print(f"Error while connecting to MySQL: {e}")

if __name__ == '__main__':
    init_db()
