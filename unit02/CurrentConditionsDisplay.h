#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
	float temperature;
	float humidity;
	Subject* weatherData;

public:
	CurrentConditionsDisplay(Subject* weatherData);
	void update(float temperature, float humidity, float pressure) override;
	void display() override;
};