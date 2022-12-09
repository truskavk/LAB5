#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;

enum type {
    SUNNY,
    CLOUDY,
    RAINY,
    FOGGY,
    NONE
};

class Weather {

public:
    int day;
    string city;
    string country;
    float temp;
    int humidity;
    float windspeed;
    type weatherType;

    Weather() {
        day = 000;
        city = "000";
        country = "000";
        temp = 000;
        humidity = 000;
        windspeed = 000;
        weatherType = NONE;
    }

    Weather(int d, string ci, string co, float t, int h, float w, type s) {
        day = d;
        city = ci;
        country = co;
        temp = t;
        humidity = h;
        windspeed = w;
        weatherType = s;
    }

    ~Weather() {

    }
    void Print() {
        cout << "Day: " << day << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Temperature: " << temp << endl;
        cout << "Humidity: " << humidity << endl;
        cout << "Windspeed: " << windspeed << endl;
        cout << "Type: " << weatherType << endl;
    }

    void isLvivWeather() {
        if (humidity >= 80 && weatherType == RAINY) {
            cout << "Typical weather in Lviv" << endl;
        }
        else {
            cout << "You are lucky dude" << endl;
        }
    }
};

class WeatherCalendar {
public:
    Weather WeatherItem;

    vector <Weather> allWeatherDays;

    vector <Weather> addWeatherItem(Weather WeatherItem) {
        allWeatherDays.push_back(WeatherItem);
        return allWeatherDays;
    }


    float findMaxTemprature(int randomDay) {
        float maxTemp = 0;
        int daysFound = 0;

        for (int i = 0; i < allWeatherDays.size(); i++) {

            if (allWeatherDays[i].day == randomDay) {
                daysFound = 1;
                if (allWeatherDays[i].temp > maxTemp) {
                    maxTemp = allWeatherDays[i].temp;
                }
            }

        }
        if (daysFound == 0) {
            cout << "NOT ENOUGH DATA";
        }

        return maxTemp;

    }

    void bubbleSort()
    {
        int i, j;
        for (i = 0; i < allWeatherDays.size() - 1; i++) {

            for (j = 0; j < allWeatherDays.size() - i - 1; j++) {
                if (allWeatherDays[j].day > allWeatherDays[j + 1].day) {
                    swap(allWeatherDays[j], allWeatherDays[j + 1]);
                }
            }
        }
    }
    void PrintVector() {
        for (int i = 0; i < allWeatherDays.size(); i++) {
            cout << allWeatherDays[i].day << endl;
        }
    }


};
