#pragma once
#include <iostream>
#include <string>
using namespace std;

class Taxi
{
protected:
	int number;
	string model;
	string fullname;
	bool isAvailable;
public:
	Taxi(int number, string model, string fullname) {
		this->number = number;
		this->model = model;
		this->fullname = fullname;
		isAvailable = true;
	}

	void setNumber(int number) { this->number = number; }
	void setModel(string model) { this->model = model; }
	void setFullName(string fullname) { this->fullname = fullname; }
	void setIsAvailable(bool isAvailable) { this->isAvailable = isAvailable; }

	int getNumber()const { return number; }
	string getModel()const { return model; }
	string getFullName()const { return fullname; }
	bool getIsAvailable()const { return isAvailable; }

	void showInfo()const {
		cout << "Number: " << number << endl;
		cout << "Model: " << model << endl;
		cout << "Driver`s full name: " << fullname << endl;
		cout << "Is Available: " << ((isAvailable) ? "True" : "False") << endl;
	}

	
};

