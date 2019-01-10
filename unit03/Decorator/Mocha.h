#ifndef UNIT03_MOCHA_H
#define UNIT03_MOCHA_H

#include <string>

#include "../Beverage.h"
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
private:
    Beverage *beverage;

public:
    Mocha(Beverage* beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() override {
        return beverage->getDescription() + ", Mocha";
    }

    Beverage::SIZE getSize() {
        return beverage->getSize();
    }

    double cost() {
        double totalCost = beverage->cost();
        if (getSize() == Beverage::TALL) {
            totalCost += .15;
        } else if (getSize() == Beverage::GRANDE) {
            totalCost += .20;
        } else if (getSize() == Beverage::VENTI) {
            totalCost += .25;
        }

        return totalCost;
    }
};


#endif //UNIT03_MOCHA_H
