//
// Created by haoha on 2018/12/5.
//

#ifndef DUCK_QUACK_H
#define DUCK_QUACK_H


#include "QuackBehavior.h"

class Quack : public QuackBehavior {
public:
    void quack() override;
};


#endif //DUCK_QUACK_H
