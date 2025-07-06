#pragma once
#include <iostream>
using namespace std;

namespace Animals {
	class Animal
	{
	public:
		Animal() {};
		virtual ~Animal() {};

		virtual void makeSound() = 0;
	};
}

