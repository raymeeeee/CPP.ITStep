#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Student {
	char name[50] = "";
	int phys = 0;
	int math = 0;
	int info = 0;

	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "Phys: " << phys << endl;
		cout << "Math: " << math << endl;
		cout << "Info: " << info << endl;
		cout << endl;
	}
};