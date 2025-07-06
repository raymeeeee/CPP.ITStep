#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Vehicle
{
protected:
	float price;
	int year;
	float maxSpeed; // km/h
public:
	Vehicle() { price = 0; year = 0; maxSpeed = 0; };
	Vehicle(float price, int year, float maxSpeed) 
	{ this->price = price; this->year = year; this->maxSpeed = maxSpeed; };

	virtual ~Vehicle() = 0 {};

	void setPrice(float price) { this->price = price; };
	void setYear(float year) { this->year = year; };
	void setMaxSpeed(float maxSpeed) { this->maxSpeed = maxSpeed; };

	float getPrice()const { return price; };
	float getYear()const { return year; };
	float getMaxSpeed()const { return maxSpeed; };

	virtual void showInfo()const = 0;
	virtual float ride(float distance) = 0; //  distance/maxSpeed = time
	virtual void load(ifstream& file) = 0;
};

