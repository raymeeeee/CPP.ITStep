#pragma once
#include <iostream>
#include <string>
using namespace std;
class Creature
{
protected:
	string name;
public:
	Creature(string name) { this->name = name; };

	void setName(string name) { this->name = name; };
	string getName() { return name; };

	void showCreature()const { cout << "Name: " << name << endl; }
};

