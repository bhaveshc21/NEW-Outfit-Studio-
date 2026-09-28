from app import app, get_db_connection
from services.planner_service import PlannerService

with app.app_context():
    db = get_db_connection()
    res = PlannerService().generate_weekly_plan(db, 3, '2026-09-28', 'Pune', requested_occasion='Party')
    print(res)
