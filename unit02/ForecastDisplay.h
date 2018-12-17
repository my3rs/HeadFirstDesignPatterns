#ifndef _FORECAST_DISPLAY_H
#define _FORECAST_DISPLAY_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

class ForecastDisplay : public Observer, public DisplayElement {
private:
	float currentPressure;
	float lastPressure;
	Subject* weatherData;

public:
	ForecastDisplay(Subject* weatherData);
	void update(float temp, float humidity, float pressure) override;
	void display() override;
};

#endif