#pragma once
#include "Creature.h"
class Animal :
    public Creature
{
protected:
    string kind;
    string generation;
    float weight;
public:
    Animal(string name, string kind, string generation, float weight) : Creature(name) {
        this->kind = kind; this->generation = generation; this->weight = weight;
    }

    void setKind(string kind) { this->kind = kind; };
    void setGeneration(string generation) { this->generation = generation; };
    void setWeight(float weight) { this->weight = weight; };

    string getKind()const { return kind; };
    string getGeneration()const { return generation; };
    float getWeight()const { return weight; };

    void showAnimal()const { this->showCreature();
    cout << "Kind: " << kind << endl;
    cout << "Generation: " << generation << endl;
    cout << "Weight: " << weight << "kg" << endl;
    };

};

