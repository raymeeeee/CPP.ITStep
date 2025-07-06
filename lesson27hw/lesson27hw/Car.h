#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car
{
protected:
	string m_brand;
	string m_color;
	float m_gasTank;
	float m_consumption;
public:
	Car();
	Car(string brand, string color, float gasTank, float consumption);

	void setBrand(string brand);
	void setColor(string color);
	void setGastank(float gasTank);
	void setConsumption(float consumption);

	float getMaxDistance()const;

	string getBrand()const;
	string getColor()const;
	float getGastank()const;
	float getConsumption()const;
	void showInfo()const;
};

