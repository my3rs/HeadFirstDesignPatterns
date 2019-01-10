//
// Created by Cyril on 2019/1/9.
// E-mail: me@seahi.me
//

#ifndef UNIT03_DARKROAST_H
#define UNIT03_DARKROAST_H


#include "../Beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast() {
        description = "Dark Roast Coffee";
    }

    double cost() override {
        return 2.12;
    }



};


#endif //UNIT03_DARKROAST_H
