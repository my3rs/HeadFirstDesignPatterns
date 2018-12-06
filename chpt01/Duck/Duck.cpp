//
// Created by haoha on 2018/12/5.
//

#include <iostream>
#include "Duck.h"

Duck::Duck() {

}


void Duck::swim() {
    std::cout << "All ducks float, even decoys!\n";
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb) {
    quackBehavior = qb;
}

void Duck::performFly() {
    flyBehavior->fly();
}

void Duck::performQuack() {
    quackBehavior->quack();
}