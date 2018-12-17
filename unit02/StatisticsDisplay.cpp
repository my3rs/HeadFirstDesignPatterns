#include <iostream>
#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(Subject* weatherData) {
	maxTemp = 0.0f;
	minTemp = 200;
	tempSum = 0.0f;
	numReadings = 0;
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure) {
	tempSum += temperature;
	numReadings++;
	
	if (temperature > maxTemp) {
		maxTemp = temperature;
	}

	if (temperature < minTemp) {
		minTemp = temperature;
	}

	display();
}

void StatisticsDisplay::display() {
	std::cout << "Avg/Max/Min temperature = "
		<< tempSum / numReadings
		<< "/" << maxTemp
		<< "/" << minTemp
		<< std::endl;
}