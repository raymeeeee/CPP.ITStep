#pragma once
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Client {
	char name[100] = "";
	//unsigned long long number = 0;
	char number[17] = "";
	double cash = 0;

	void fillClient() {
		cout << "Name:\t\t";
		cin.getline(name, 100);
		sprintf_s(number, 17, "%d%d%d%d", rand() % 10000 + 1000,
			rand() % 10000 + 1000, rand() % 10000 + 1000, rand() % 10000 + 1000);
		cash = 50;
		cout << endl;
	}
	void showClient() {
		cout << "Client:\t\t" << name << endl
			<< "Card:\t\t" << number << endl
			<< "Cash:\t\t" << cash << " UAH" << endl << endl;

	}

	void saveText(FILE* file) {
		fprintf(file, "\n%s\n%s\n%0.2lf", name, number, cash);
	}
	void printFile(FILE* file) {
		//"Bob Polson",
		//"0000000000000000",
		//2500

		fscanf_s(file, "\n");
		fgets(name, 100, file);
		name[strlen(name)-1] = '\0';
		fscanf_s(file, "\n%s", number, 17);
		fscanf_s(file, "\n%lf", &cash);

	}
};