//
// Created by Cyril on 2019/1/23.
// E-mail: me@seahi.me
//

#ifndef DESIGNPATTERNS_PIZZASTORE_H
#define DESIGNPATTERNS_PIZZASTORE_H

#include <string>
#include <assert.h>
#include "Pizza.h"

class PizzaStore {
private:
    virtual Pizza* createPizza(std::string type) = 0;

public:
    Pizza* orderPizza(std::string type) {
        Pizza* pizza = createPizza(std::move(type));

        assert(pizza != nullptr);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};

class NYStylePizzaStore : public PizzaStore{
private:
    Pizza* createPizza(std::string type) override {
        if (type == "cheese") {
                return new NYStyleCheesePizza();
        } else if (type == "veggie") {
                return new NYStyleVeggiePizza();
        } else {
                return nullptr;
        }
    }
};

class ChicagoStylePizzaStore : public PizzaStore {
private:
    Pizza* createPizza(std::string type) override {
        if (type == "cheese") {
            return new ChicagoStyleCheesePizza();
        } else {
            return nullptr;
        }
    }
};

#endif //DESIGNPATTERNS_PIZZASTORE_H
