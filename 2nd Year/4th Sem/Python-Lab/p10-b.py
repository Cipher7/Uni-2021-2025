# Write a python program to fetch current weather data from the JSON file

import json

with open('weather_data.json') as f:
    weather_data = json.load(f)

current_temp = weather_data['main']['temp']
humidity = weather_data ['main']['humidity']
weather_desc = weather_data ['weather'][0]['description']

print(f"Current temperature: {current_temp}°C")
print(f"Humidity: {humidity}%")
print(f"Weather description: {weather_desc}")
