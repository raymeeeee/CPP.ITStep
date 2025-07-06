#include "Wild.h"
#include "Birds.h"
#include <vector>
#include <typeinfo>

int main()
{
    ////Animals::Animal a;
    //Animals::Wild::Wolf a;
    //a.makeSound();
    //Animals::Wild::Lion b;
    //b.makeSound();
    //Animals::Wild::Dog c;
    //c.makeSound();

    ////Animals::Birds::Bird d;
    //Animals::Birds::Domestic::Chicken d;
    //d.makeSound();
    //Animals::Birds::Domestic::Duck e;
    //e.makeSound();
    //Animals::Birds::Domestic::Eagle f;
    //f.makeSound();

    vector<Animals::Animal*> zoo;
    zoo.push_back(new Animals::Wild::Wolf());
    zoo.push_back(new Animals::Wild::Lion());
    zoo.push_back(new Animals::Wild::Dog());
    zoo.push_back(new Animals::Birds::Domestic::Chicken());
    zoo.push_back(new Animals::Birds::Domestic::Duck());
    zoo.push_back(new Animals::Birds::Domestic::Eagle());

    for (int i = 0; i < zoo.size(); i++)
    {
        if (typeid(*zoo[i]) == typeid(Animals::Wild::Wolf)) {
            cout << "Wolf: "; zoo[i]->makeSound();
        }
        else if (typeid(*zoo[i]) == typeid(Animals::Wild::Lion)) {
            cout << "Lion: "; zoo[i]->makeSound();
        }
        else if (typeid(*zoo[i]) == typeid(Animals::Wild::Dog)) {
            cout << "Dog: "; zoo[i]->makeSound();
        }
        else if (typeid(*zoo[i]) == typeid(Animals::Birds::Domestic::Chicken)) {
            cout << "Chicken: "; zoo[i]->makeSound();
        }
        else if (typeid(*zoo[i]) == typeid(Animals::Birds::Domestic::Duck)) {
            cout << "Duck: "; zoo[i]->makeSound();
        }
        else if (typeid(*zoo[i]) == typeid(Animals::Birds::Domestic::Eagle)) {
            cout << "Eagle: "; zoo[i]->makeSound();
        }
        
    }
}

