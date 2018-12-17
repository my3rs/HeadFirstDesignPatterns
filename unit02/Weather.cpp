// Weather.cpp : Defines the entry point for the application.
//

#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"

using namespace std;

int main()
{
	WeatherData* weatherData = new WeatherData();

	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);
	StatisticsDisplay* statisticDisplay = new StatisticsDisplay(weatherData);
	ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);
	

	weatherData->setMeasureMents(80, 65, 30.4f);
	weatherData->setMeasureMents(82, 70, 29.2f);
	weatherData->setMeasureMents(78, 90, 29.2f);
	
	system("pause");
	return 0;
}
