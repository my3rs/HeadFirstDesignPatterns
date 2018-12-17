#include <iostream>
#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(Subject* weatherData) {
	currentPressure = 29.2f;
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure) {
	lastPressure = currentPressure;
	currentPressure = pressure;

	display();
}

void ForecastDisplay::display() {
	std::cout << "Forecast: ";
	if (currentPressure > lastPressure) {
		std::cout << "Improving weather on the day!\n";
	}
	else if (currentPressure == lastPressure) {
		std::cout << "More of the same\n";
	}
	else {
		std::cout << "Watch out for cooler, rainy weather\n";
	}
}