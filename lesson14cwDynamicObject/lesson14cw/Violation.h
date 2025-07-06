#pragma once
#include "Date.h"
#include <ctime>
using namespace std;

struct Violation {
	Date date;				//0 0 0 
	char info[100] = "";	
	float fine = 0;

	void showInfo() {
		cout << "\tDate: " << date.toString("%d.%m.%y") << endl;
		cout << "\tInfo: " << info << endl;
		cout << "\tFine: " << fine << "UAH.\n" << endl;
	}

	void fillViolation() {
		cout << "Input date (dd mm yyyy):\n";
		cin >> date.day >> date.month >> date.year;
		/*date.fillDate();*/

		cout << "Input info:\n";
		cin.ignore();
		cin.getline(info, 100);

		cout << "Input fine:\n";
		cin >> fine;
	}

};