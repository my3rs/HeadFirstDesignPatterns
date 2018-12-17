#ifndef SUBJECT_H
#define SUBJECT_H


#include "Observer.h"

class Subject {
public:
	virtual ~Subject() {}
	virtual void registerObserver(Observer*) = 0;
	virtual void removeObserver(Observer*) = 0;
	virtual void notifyObservers() = 0;
};

#endif 