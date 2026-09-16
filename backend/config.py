import os
from dotenv import load_dotenv

# Load environment variables from .env file if present
load_dotenv()

class Config:
    SECRET_KEY = os.environ.get('SECRET_KEY', 'default-dev-key')
    FLASK_ENV = os.environ.get('FLASK_ENV', 'development')
    
    # MySQL Database Configuration
    DATABASE_HOST = os.environ.get('DATABASE_HOST', 'localhost')
    DATABASE_PORT = int(os.environ.get('DATABASE_PORT', 3306))
    DATABASE_NAME = os.environ.get('DATABASE_NAME', 'outfit_studio')
    DATABASE_USER = os.environ.get('DATABASE_USER', 'root')
    DATABASE_PASSWORD = os.environ.get('DATABASE_PASSWORD', 'mukul@0906')
