#pragma once
#include "Violation.h"

struct Driver {
	char name[50] = "";
	char carNumber[20] = "";
	int sizeViolation = 0;
	Violation* arr = nullptr;

	void showDriver() {
		cout << "\tName: " << name << endl;
		cout << "\tCar#: " << carNumber << endl;
		if (sizeViolation == 0) {
			cout << name << " has no violations\n";
		}
		else {
			for (int i = 0; i < sizeViolation; i++) {
				cout << "\t#" << i + 1 << endl;
				arr[i].showInfo();
			}
		}
	}

	void fillDriver() {
		cout << "Input name:\n";
		cin.getline(name, 50);
		cout << "Input number of the car:\n";
		cin >> carNumber;

		sizeViolation = 1;
		arr = new Violation[1];	
		arr[0].fillViolation();
	}
};