//
// Created by haoha on 2018/12/5.
//

#ifndef DUCK_DUCK_H
#define DUCK_DUCK_H


#include "../Behavior/FlyBehavior.h"
#include "../Behavior/QuackBehavior.h"

class Duck {
protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;

public:
    Duck();
    virtual void performFly();
    virtual void performQuack();
    void swim();
    virtual void display() {};
    void setFlyBehavior(FlyBehavior*);
    void setQuackBehavior(QuackBehavior*);
};


#endif //DUCK_DUCK_H
