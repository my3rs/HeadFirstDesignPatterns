//
// Created by haoha on 2018/12/5.
//

#include <iostream>
#include "MallardDuck.h"
#include "../Behavior/FlyWithWings.h"
#include "../Behavior/Quack.h"

MallardDuck::MallardDuck() {
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
    std::cout<<"I am a real mallard duck!\n";
}

