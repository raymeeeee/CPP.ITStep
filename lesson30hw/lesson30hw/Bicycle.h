#pragma once
#include "Vehicle.h"
class Bicycle :
    public Vehicle
{
protected:
    int gears; //количество передач + задаётся максимальная передача
public:
    Bicycle() { gears = 0; };
    Bicycle(float price, int year, float maxSpeed, int gears) : Vehicle(price, year, maxSpeed)
    { this->gears = gears; };

    void setGears(int gears) { this->gears = gears; };
    int getGears()const { return gears; };

    void showInfo()const override {
        cout << "Price: " << price << "usd" << endl;
        cout << "Year: " << year << endl;
        cout << "Max speed: " << maxSpeed << "km/h" << endl;
        cout << "Gears: " << gears << endl;
    }

    float ride(float distance) override {
        return distance / maxSpeed;
    }

    float getGearSpeed(int gear) { //virtual?
        return (maxSpeed / gears) * gear;
    }

    virtual void load(ifstream& file) override{
        file >> price;
        file >> year;
        file >> maxSpeed;
        file >> gears;
    };
};

