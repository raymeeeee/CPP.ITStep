#pragma once
#include <iostream>
#include <cstring>
using namespace std;

#include <iomanip>
struct Country {
	char name[50] = "";
	char part[20] = "";
	int square = 0;
	int population = 0;
		
	void showInfo() {
		cout << "Country: " << name << endl;
		cout << "Part: " << part << endl;
		cout << "Square: " << square << endl;
		cout << "Population: " << population << endl;
		cout << endl;
	}

	void showTable() {
		cout << "|" << setw(12) << name
			<< "|" << setw(12) << part
			<< "|" << setw(8) << square
			<< "|" << setw(12) << population << "|" << endl;
	}
};