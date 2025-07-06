#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	bool predatory;
public:
	Animal() { name = "undefined"; predatory = 0; };
	Animal(string name, bool predatory) { this->name = name; this->predatory = predatory; };

	void setName(string name) { this->name = name; };
	void setPredatory(bool predatory) { this->predatory = predatory; };
	
	string getName()const { return name; };
	bool getPredatory()const { return predatory; };

	virtual void showInfo()const = 0;

};

