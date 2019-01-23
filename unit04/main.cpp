//
// Created by Cyril on 2019/1/23.
// E-mail: me@seahi.me
//

#include "PizzaStore.h"

int main() {
    PizzaStore* nyStore = new NYStylePizzaStore();
    PizzaStore *chicagoStore = new ChicagoStylePizzaStore();


    nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a NY Style Sauce and Cheese Pizza\n\n";

    chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a Chicago Style Deep Dish Cheese Pizza";

}