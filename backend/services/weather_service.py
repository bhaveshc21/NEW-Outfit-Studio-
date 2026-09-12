import requests
import traceback

class WeatherService:
    def __init__(self):
        # Open-Meteo API doesn't require an API key
        self.geocoding_url = "https://geocoding-api.open-meteo.com/v1/search"
        self.weather_url = "https://api.open-meteo.com/v1/forecast"

    def get_weather(self, location="Pune"):
        """
        Fetches current weather for a given location using Open-Meteo.
        If location is not found, defaults to a fallback location or handles the error.
        """
        try:
            # 1. Geocode the location to get lat/lon
            geo_params = {
                "name": location,
                "count": 1,
                "language": "en",
                "format": "json"
            }
            geo_response = requests.get(self.geocoding_url, params=geo_params, timeout=5)
            geo_response.raise_for_status()
            geo_data = geo_response.json()
            
            if not geo_data.get("results"):
                # Return None if location not found, we can handle this gracefully
                return None
                
            lat = geo_data["results"][0]["latitude"]
            lon = geo_data["results"][0]["longitude"]
            city_name = geo_data["results"][0]["name"]
            
            # 2. Get the weather using lat/lon
            weather_params = {
                "latitude": lat,
                "longitude": lon,
                "current": ["temperature_2m", "weather_code"]
            }
            weather_response = requests.get(self.weather_url, params=weather_params, timeout=5)
            weather_response.raise_for_status()
            weather_data = weather_response.json()
            
            if "current" not in weather_data:
                return None
                
            temp = weather_data["current"]["temperature_2m"]
            code = weather_data["current"]["weather_code"]
            
            condition = self._get_condition_from_code(code)
            
            return {
                "temperature": round(temp),
                "condition": condition,
                "location": city_name
            }
            
        except requests.RequestException as e:
            print(f"Weather API error: {e}")
            return None
        except Exception as e:
            traceback.print_exc()
            return None
            
    def _get_condition_from_code(self, code):
        """Maps WMO weather codes to simple string conditions"""
        if code == 0:
            return "Clear"
        elif code in [1, 2, 3]:
            return "Cloudy"
        elif code in [45, 48]:
            return "Fog"
        elif code in [51, 53, 55, 56, 57, 61, 63, 65, 66, 67, 80, 81, 82]:
            return "Rain"
        elif code in [71, 73, 75, 77, 85, 86]:
            return "Snow"
        elif code in [95, 96, 99]:
            return "Thunderstorm"
        else:
            return "Clear" # Default fallback
