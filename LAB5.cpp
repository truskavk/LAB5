#include "Header1.h"
#include <iostream>
#include <string>
#include <vector>
#include <optional>
using namespace std;

int main() {
    Weather a(14, "London", "England", 18.2, 70, 6, SUNNY);
    Weather b(14, "Kyiv", "Ukraine", 20.6, 100, 4, RAINY);
    Weather c(14, "Kyiv", "Ukraine", 34.2, 50, 2, FOGGY);
    Weather e(15, "Kyiv", "Ukraine", 134, 90, 3, RAINY);
    Weather d(15, "Kyiv", "Ukraine", 23, 40, 3, CLOUDY);
    Weather f(15, "Kyiv", "Ukraine", 3, 40, 3, SUNNY);
    Weather g(3, "Lviv", "Ukraine", 0, 80, 15, RAINY);
    Weather h(3, "Lviv", "Ukraine", -23, 80, 15, RAINY);

    WeatherCalendar Calendar;
    Calendar.addWeatherItem(d);
    Calendar.addWeatherItem(a);
    Calendar.addWeatherItem(b);
    Calendar.addWeatherItem(e);
    Calendar.addWeatherItem(c);
    Calendar.addWeatherItem(f);
    Calendar.addWeatherItem(g);
    Calendar.addWeatherItem(h);
    e.Print();
    e.isLvivWeather();
    Calendar.bubbleSort();
    Calendar.PrintVector();
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(15) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(14) << endl;
    cout << "\nThe highest temperature " << Calendar.findMaxTemprature(3) << endl;





}


