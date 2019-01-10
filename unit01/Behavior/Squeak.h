//
// Created by haoha on 2018/12/5.
//

#ifndef DUCK_SQUEAK_H
#define DUCK_SQUEAK_H


#include "QuackBehavior.h"

class Squeak : public QuackBehavior {
public:
    void quack() override;
};


#endif //DUCK_SQUEAK_H
