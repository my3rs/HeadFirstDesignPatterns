#pragma once

#include <set>
#include "Subject.h"
#include "Observer.h"

class WeatherData : public Subject {
private:
	std::set<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;


public:
	float getTemperature();
	float getHumidity();
	float getPressure();
	void measurementsChanged();
	void setMeasureMents(float temperature, float humidity, float pressure);

	void registerObserver(Observer*) override;
	void removeObserver(Observer*) override;
	void notifyObservers() override;
};