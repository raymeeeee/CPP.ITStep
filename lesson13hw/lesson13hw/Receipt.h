#pragma once
#include "Films.h"

struct Receipt {
	char name[50] = "";
	char surname[50] = "";
	int tickets = 0;

	char theater[6][40] = { "TheRajMandir", "Cine de Chef", "The Castro Theatre", 
							"Uplink X", "Secret Cinema", "Alamo Drafthouse"};

	int ticketsFilmsAmount = 0;
	int* ticketsFilms = nullptr;

	int filmsAmount = 0;
	char** filmsReceipt = nullptr;

	int payment = 0;
	void fillReceipt() {
		cout << "\tYour name:\t\t";
		cin >> name;
		cout << "\tYour surname:\t\t";
		cin >> surname;
		cout << endl;
		cout << "\tTickets:\t\t" << tickets << endl;
		cout << "\tTo payment:\t\t" << payment << endl << endl;
	}
	void printReceipt(FILE*& file) {
		fopen_s(&file, "ticket.txt", "w");
		char* tmp = nullptr;
		if (file == nullptr) {
			cout << "Error" << endl;
		}
		else {
			tmp = new char[9] {"Name:\t\t"};
			fprintf_s(file, "%s%s\n", tmp, name);
			tmp = new char[10] {"Surname:\t"};
			fprintf_s(file, "%s%s\n", tmp, surname);

			fprintf_s(file, "\n");

			cout << "\tChoose theater:\n\t\t\t";
			for (int i = 0; i < 6; i++) {
				cout << i + 1 << ". " << theater[i] << "\n\t\t\t";
			}

			cout << "\n\tIndex:\t\t";
			int theaterChoice = 0;
			cin >> theaterChoice;
			cout << endl;
			if (theaterChoice < 7 && theaterChoice > 0) {
				tmp = new char[10] {"Theater:\t"};
				fprintf_s(file, "%s%s", tmp, theater[theaterChoice - 1]);
			}
			else {
				cout << "Wrong index of theater" << endl << endl;
				fclose(file);
				return;
			}



			fprintf_s(file, "\n" );
			tmp = new char[10] {"Films:\t\t"};
			fprintf_s(file, "%s", tmp);

			for (int i = 0; i < filmsAmount; i++) {
				fprintf_s(file, "%s(%d tickets)\n\t\t", filmsReceipt[i], ticketsFilms[i]);
			}
			fprintf_s(file, "\n");

			tmp = new char[10] {"Tickets:\t"};
			fprintf_s(file, "%s%d\n", tmp, tickets);
			tmp = new char[10] {"Payment:\t"};
			fprintf_s(file, "%s%d UAH\n", tmp, payment);
			fclose(file);
			cout << "Film printed successfully" << endl << endl;
		}
	}
};