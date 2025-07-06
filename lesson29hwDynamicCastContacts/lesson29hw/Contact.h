#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact
{
protected:
	string name;
	string number;
public:
	Contact()
	{
		name = "anonymous";  number = "+___ ____ ______";
	};
	Contact(string name, string number)
	{ this->name = name;  this->number = number;};

	void setName(string name) { this->name = name; };
	void setNumber(string number) { this->number = number; };

	string getName()const { return name; };
	string getNumber()const { return number; };

	virtual void showInfo()const {
		cout << "Name: " << name << endl;
		cout << "Number: " << number << endl;
	}
};

