#ifndef UNIT03_BEVERAGE_H
#define UNIT03_BEVERAGE_H

#include <string>

using namespace std;

class Beverage {
protected:
    string description = "Unknown Beverage";
    enum SIZE {TALL, GRANDE, VENTI} size;

public:


    virtual SIZE getSize() {
        return this->size;
    }

    virtual void setSize(SIZE s) {
        this->size = s;
    }

    virtual double cost() = 0;

    virtual string getDescription() {
        return description;
    }
};


#endif //UNIT03_BEVERAGE_H
