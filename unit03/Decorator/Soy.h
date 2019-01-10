//
// Created by haoha on 2019/1/9.
//

#ifndef UNIT03_SOY_H
#define UNIT03_SOY_H


#include "CondimentDecorator.h"

class Soy : public CondimentDecorator{
private:
    Beverage *beverage;

public:
    Soy(Beverage* b) {
        this->beverage = b;
    }

    std::string getDescription() override {
        return beverage->getDescription() + ", Soy";
    }

    Beverage::SIZE getSize() {
        return beverage->getSize();
    }


    double cost() {
        double totalCost = beverage->cost();
        if (getSize() == Beverage::TALL) {
            totalCost += .10;
        } else if (getSize() == Beverage::GRANDE) {
            totalCost += .15;
        } else if (getSize() == Beverage::VENTI) {
            totalCost += .20;
        }

        return totalCost;
    }
};


#endif //UNIT03_SOY_H
