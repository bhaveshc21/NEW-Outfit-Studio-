import sys
import os

sys.path.append(os.path.abspath('backend'))
from backend.app import create_app
import mysql.connector

app = create_app()
with app.app_context():
    from backend.services.planner_service import PlannerService
    
    connection = mysql.connector.connect(
        host=app.config['DATABASE_HOST'],
        port=app.config['DATABASE_PORT'],
        database=app.config['DATABASE_NAME'],
        user=app.config['DATABASE_USER'],
        password=app.config['DATABASE_PASSWORD']
    )
    
    service = PlannerService()
    print(service.generate_weekly_plan(connection, 1, '2026-10-02', 'Pune'))
