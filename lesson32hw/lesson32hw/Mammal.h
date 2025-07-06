#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
protected:
    string habitat;
public:
    Mammal() { habitat = "undefined"; };
    Mammal(string name, bool predatory, string habitat) : Animal(name, predatory) { this->habitat = habitat; };

    void setHabitat(float flightSpeed) { this->habitat = habitat; };
    string getHabitat()const { return habitat; };

    void showInfo()const override {
        cout << "Name: " << name << endl;
        cout << "Predatory: " << predatory << endl;
        cout << "Habitat: " << habitat << endl;
    }
};

