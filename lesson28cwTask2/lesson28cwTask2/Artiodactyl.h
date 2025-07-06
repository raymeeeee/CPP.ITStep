#pragma once
#include "Animal.h"
class Artiodactyl :
    public Animal
{
protected:
    string habitat;
public:
    Artiodactyl(string name, string kind, string generation, float weight, string habitat) : Animal(name, kind, generation, weight) { this->habitat = habitat; };

    void setHabitat(string habitat) { this->habitat = habitat; };
    string setHabitat() { return habitat; };
    
    void showArtiodactyl()const { this->showAnimal(); cout << "Habitat: " << habitat << endl; };
};

