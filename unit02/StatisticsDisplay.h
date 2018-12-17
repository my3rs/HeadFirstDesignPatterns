#ifndef _STATISTICS_DISPLAY_H
#define _STATISTICS_DISPLAY_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

class StatisticsDisplay : public Observer, public DisplayElement {
private:
	float maxTemp;
	float minTemp;
	float tempSum;
	int numReadings;
	Subject* weatherData;

public:
	StatisticsDisplay(Subject* weatherData);
	void update(float temperature, float humidity, float pressure) override;
	void display() override;
};

#endif