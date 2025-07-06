#pragma once
#include "Animal.h"
class Fish :
    public Animal
{
protected:
    bool deepsea;
public:
    Fish() { deepsea = 0; };
    Fish(string name, bool predatory, bool deepsea) : Animal(name, predatory) { this->deepsea = deepsea; };

    void setDeepsea(bool deepsea) { this->deepsea = deepsea; };
    float getDeepsea()const { return deepsea; };

    void showInfo()const override {
        cout << "Name: " << name << endl;
        cout << "Predatory: " << ((predatory) ? "True" : "False") << endl;
        cout << "Deep-sea: " << ((deepsea) ? "True" : "False") << endl;
    }
};

