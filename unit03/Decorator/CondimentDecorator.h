//
// Created by haoha on 2019/1/9.
//

#ifndef UNIT03_CONDIMENTDECORATOR_H
#define UNIT03_CONDIMENTDECORATOR_H

#include <string>
#include "../Beverage.h"

using namespace std;

class CondimentDecorator : public Beverage {
public:
    virtual string getDescription() = 0;
};


#endif //UNIT03_CONDIMENTDECORATOR_H
