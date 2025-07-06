#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Computer {
	string m_name;
	float m_frequency;
	int m_RAM;
	bool m_DVDROM;
	float m_price;

public:
	Computer();
	Computer(string name, float frequency, int RAM, bool DVDROM, float price);

	string getName()const;
	float getFrequency()const;
	int getRAM()const;
	bool getDVDROM()const;
	float getPrice()const;

	void setPrice(float price);

	void showInfo()const;

};

