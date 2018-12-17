#include "CurrentConditionsDisplay.h"
#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weather) {
	this->weatherData = weather;
	weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display() {
	std::cout << "Current conditions: " 
		<< temperature 
		<< " F degrees and " 
		<< humidity 
		<< "% humidity\n";
}