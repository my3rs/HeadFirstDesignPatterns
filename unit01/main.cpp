#include <iostream>
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

int main() {
    std::cout << "test 1\n";
    Duck *d = new MallardDuck();
    d->display();
    d->performFly();
    d->performQuack();
    d->swim();

    std::cout<<"\n";
    std::cout << "test 2\n";

    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
    return 0;
}