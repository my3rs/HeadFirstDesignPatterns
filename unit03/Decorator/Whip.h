#ifndef UNIT03_WHIP_H
#define UNIT03_WHIP_H


#include "CondimentDecorator.h"

class Whip : public CondimentDecorator{
private:
    Beverage* beverage;

public:
    Whip(Beverage*  b) {
        this->beverage = b;
    }

    std::string getDescription() override {
        return beverage->getDescription() + ", Whip";
    }

    Beverage::SIZE getSize() {
        return beverage->getSize();
    }


    double cost() {
        double totalCost = beverage->cost();
        if (getSize() == Beverage::TALL) {
            totalCost += .13;
        } else if (getSize() == Beverage::GRANDE) {
            totalCost += .16;
        } else if (getSize() == Beverage::VENTI) {
            totalCost += .23;
        }

        return totalCost;
    }
};


#endif //UNIT03_WHIP_H
