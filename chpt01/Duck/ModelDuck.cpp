//
// Created by haoha on 2018/12/6.
//

#include <iostream>
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"


void ModelDuck::display() {
    std::cout << "I am a model duck!\n";
}

ModelDuck::ModelDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new Quack();
}