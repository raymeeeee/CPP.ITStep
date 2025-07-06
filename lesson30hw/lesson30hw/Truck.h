#pragma once
#include "Car.h"
class Truck :
    public Car
{
protected:
    float carrying;
public:
    Truck() { carrying = 0; };
    Truck(float price, int year, float maxSpeed, float gasTank, float consumption, float carrying) : Car(price, year, maxSpeed, gasTank, consumption) { this->carrying = carrying; };

    void setCarrying(float carrying) { this->carrying = carrying; };
    float getCarrying()const { return carrying; };

    void showInfo()const override {
        Car::showInfo();
        cout << "Carrying capacity: " << carrying << "t" << endl;
    }

    virtual void load(ifstream& file) {
        Car::load(file);
        file >> carrying;
    };
};

