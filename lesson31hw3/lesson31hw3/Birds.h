#pragma once
#include "Animal.h"

namespace Animals {
    namespace Birds {
        //
        class Bird :
            public Animal
        {
        public:
            Bird() {};

            virtual void makeSound() = 0;
        };

        namespace Domestic {
            //
            class Chicken :
                public Animal
            {
            public:
                Chicken() {};

                void makeSound() { cout << "Buck buck buck bugawk!" << endl; };
            };

            //
            class Duck :
                public Animal
            {
            public:
                Duck() {};

                void makeSound() { cout << "Quack quack quack!" << endl; };
            };

            //
            class Eagle :
                public Animal
            {
            public:
                Eagle() {};

                void makeSound() { cout << "SCREEEEE!" << endl; };
            };
        }

    }
}