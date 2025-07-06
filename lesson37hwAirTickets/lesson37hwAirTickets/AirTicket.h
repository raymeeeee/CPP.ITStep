#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class AirTicket
{
protected:
	static int numberGlobal;
	int number;
	string place;
	string initials;
	string surname;
	Date departure;
public:
	AirTicket(string place, string initials, string surname, Date departure) {
		this->place = place;
		this->initials = initials;
		this->surname = surname;
		this->departure = departure;
		number = ++numberGlobal;

	}

	int getNumber()const { return number; }
	string getPlace()const { return place; }
	Date getDate()const { return departure; }

	//sorted by name AND departure
	bool operator<(const AirTicket& obj)const {
		if (this->place < obj.place) {
			return true;
		}
		else if (this->place == obj.place) {
			if (this->departure < obj.departure) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	void show()const {
		cout << "-#" << number << endl;
		cout << "Place: " << place << endl;
		cout << "Full name: " << initials << " " << surname << endl;
		cout << "Departure date: " << departure << endl;
		cout << endl;
	}
};

