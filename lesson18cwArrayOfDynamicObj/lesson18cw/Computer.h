#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Computer {
	char name[50] = "";
	float frequency = 0;
	int RAM = 0;
	bool DVDROM = false;
	float price = 0;

	void showComputer(){
		cout << "Name:\t\t" << name << endl
			<< "Frequency:\t" << frequency << "GHz" << endl
			<< "RAM:\t\t" << RAM << "Gb" << endl
			<< "DVDROM:\t\t" << (DVDROM ? "Yes" : "No") << endl
			<< "Price:\t\t" << price << "UAH" << endl << endl;
	}
};