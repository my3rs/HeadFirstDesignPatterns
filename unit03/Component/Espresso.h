//
// Created by haoha on 2019/1/9.
//

#ifndef UNIT03_ESPRESSO_H
#define UNIT03_ESPRESSO_H


#include "../Beverage.h"

class Espresso : public Beverage {
public:
    Espresso() {
        description = "Espresso";
    };
    double cost() override {
        return 1.99;
    }
};


#endif //UNIT03_ESPRESSO_H
