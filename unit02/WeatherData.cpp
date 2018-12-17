#include <algorithm>
#include "WeatherData.h"

float WeatherData::getTemperature() {
	return temperature;
}

float WeatherData::getHumidity() {
	return humidity;
}

float WeatherData::getPressure() {
	return pressure;
}



void WeatherData::registerObserver(Observer* o) {
	this->observers.insert(o);
}

void WeatherData::removeObserver(Observer* o) {
	std::set<Observer*>::iterator it;
	if ((it = observers.find(o)) != observers.end()) {
		observers.erase(o);
	}
}

void WeatherData::notifyObservers() {
	for (std::set<Observer*>::iterator it = observers.begin(); it != observers.end(); it ++ ) {
		(*it)->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged() {
	notifyObservers();
}

void WeatherData::setMeasureMents(float temperature, float humidity, float pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}