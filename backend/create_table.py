import mysql.connector
from config import Config

def create_table():
    db = mysql.connector.connect(
        host=Config.DATABASE_HOST,
        port=Config.DATABASE_PORT,
        user=Config.DATABASE_USER,
        password=Config.DATABASE_PASSWORD,
        database=Config.DATABASE_NAME
    )
    cursor = db.cursor()
    cursor.execute("""
    CREATE TABLE `donation_bin` (
      `id` int NOT NULL AUTO_INCREMENT,
      `user_id` int NOT NULL,
      `name` varchar(100) DEFAULT NULL,
      `category` varchar(50) DEFAULT NULL,
      `color` varchar(50) DEFAULT NULL,
      `image_path` varchar(255) DEFAULT NULL,
      `created_at` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
      PRIMARY KEY (`id`),
      KEY `user_id` (`user_id`),
      CONSTRAINT `donation_bin_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`id`) ON DELETE CASCADE
    ) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
    """)
    db.commit()
    print("Table created successfully")

if __name__ == "__main__":
    create_table()
