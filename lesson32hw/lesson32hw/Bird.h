#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
protected:
    float flightSpeed;
public:
    Bird() { flightSpeed = 0; };
    Bird(string name, bool predatory, float flightSpeed) : Animal(name, predatory) { this->flightSpeed = flightSpeed; };

    void setFlightSpeed(float flightSpeed) { this->flightSpeed = flightSpeed; };
    float getFlightSpeed()const { return flightSpeed; };

    void showInfo()const override {
        cout << "Name: " << name << endl;
        cout << "Predatory: " << ((predatory) ? "True" : "False") << endl;
        cout << "Flight Speed: " << flightSpeed << "km/h" << endl;
    }
};

