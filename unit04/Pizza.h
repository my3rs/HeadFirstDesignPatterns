//
// Created by Cyril on 2019/1/23.
// E-mail: me@seahi.me
//

#ifndef DESIGNPATTERNS_PIZZA_H
#define DESIGNPATTERNS_PIZZA_H

#include <iostream>
#include <string>
#include <vector>

class Pizza {
protected:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    void prepare() {
        std::cout << "Preparing " << name <<"\n";
        std::cout << "Tossing dough...\n";
        std::cout << "Adding sauce...\n";
        std::cout << "Adding toppings:\n";
        for (auto& item : toppings) {
            std::cout << "\t" << item << "\n";
        }
    }

    void bake() {
        std::cout << "Bake for 25 minutes at 350\n";
    }

    virtual void cut() {
        std::cout << "Curring the pizza into diagonal slices\n";
    }

    void box() {
        std::cout << "Place pizza in official PizzaStore box\n";
    }

    std::string getName() {
        return name;
    }
};

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.emplace_back("Grated Reggiano Cheese");
    }
};

class NYStyleVeggiePizza : public  Pizza {
public:
    NYStyleVeggiePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.emplace_back("Shredded Mozzarella Cheese");

    }

    void cut() override {
        std::cout << "Curring the pizza into square sliaces\n";
    }
};

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";

        toppings.emplace_back("Shredded  Mozzarella Cheese");
    }
};

#endif //DESIGNPATTERNS_PIZZA_H
