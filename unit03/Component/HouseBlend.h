//
// Created by haoha on 2019/1/9.
//

#ifndef UNIT03_HOUSEBLEND_H
#define UNIT03_HOUSEBLEND_H


#include "../Beverage.h"

class HouseBlend : public Beverage {
public:
    HouseBlend() {
        description = "House Blend Coffee";
    }

    double cost () override {
        return .98;
    }
};


#endif //UNIT03_HOUSEBLEND_H
