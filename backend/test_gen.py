from app import create_app
import mysql.connector
from recommendation.outfit_generator import OutfitGenerator

app = create_app()
with app.app_context():
    connection = mysql.connector.connect(
        host=app.config['DATABASE_HOST'],
        port=app.config['DATABASE_PORT'],
        database=app.config['DATABASE_NAME'],
        user=app.config['DATABASE_USER'],
        password=app.config['DATABASE_PASSWORD']
    )
    cursor = connection.cursor(dictionary=True)
    
    cursor.execute('SELECT * FROM profiles WHERE user_id = 15')
    profile = cursor.fetchone()
    
    cursor.execute('SELECT * FROM wardrobe_items WHERE user_id = 15')
    wardrobe_items = cursor.fetchall()
    
    cursor.execute('SELECT skin_tone FROM appearance_analysis WHERE user_id = 15')
    appearance = cursor.fetchone()
    
    generator = OutfitGenerator(wardrobe_items, profile, appearance)
            
    res = generator.generate_outfits(limit=10, occasion='Office', weather_data={'temperature': 30, 'condition': 'Clear'})
    print('\nTop 10 Office Outfits:')
    for idx, o in enumerate(res['data']['outfits']):
        print(f"{idx+1}. Score: {o['recommendation_score']} - {o['top']['name']} + {o['bottom']['name'] if o['bottom'] else 'None'} + {o['footwear']['name']}")
