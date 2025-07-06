#pragma once
#include "Animal.h"

namespace Animals {
    namespace Wild {
        //
        class Wolf :
            public Animal
        {
        public:
            Wolf() {};

            void makeSound() override { cout << "Woof woof!" << endl; }
        };

        //
        class Dog :
            public Animal
        {
        public:
            Dog() {};

            void makeSound() override { cout << "Waf waf!" << endl; }
        };

        //
        class Lion :
            public Animal
        {
        public:
            Lion() {};

            void makeSound() override { cout << "RRrrrrrrr!" << endl; }
        };
    }
}



