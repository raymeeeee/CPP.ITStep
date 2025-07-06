#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
protected:
    bool predator;
public:
    Bird(string name, string kind, string generation, float weight, bool predator) : Animal(name, kind, generation, weight) { this->predator = predator; };

    void setPredator(bool predator) { this->predator = predator; };
    bool getPredator()const { return predator; };

    void showBird()const { this->showAnimal(); cout << "Predator: " << predator << endl; };
};

