#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person
{
protected:
	string fullname;
	bool veteran;
	bool disabled;
	bool pregnant;
public:
	Person(){
		fullname = "";
		veteran = false;
		disabled = false;
		pregnant = false;
	}
	Person(string fullname, bool veteran, bool disabled, bool pregnant) {
		this->fullname = fullname;
		this->veteran = veteran;
		this->disabled = disabled;
		this->pregnant = pregnant;
	}

	int getPriority()const {
		return veteran + disabled + pregnant;
	}

	void show()const {
		cout << "Full Name: " << fullname << endl;
		/*cout << "Veteran: " << (veteran ? "True" : "False") << endl;
		cout << "Disabled: " << (disabled ? "True" : "False") << endl;
		cout << "Pregnant: " << (pregnant ? "True" : "False") << endl;*/
		if (veteran) cout << "Veteran" << endl;
		if (disabled) cout << "Disabled" << endl;
		if (pregnant) cout << "Pregnant" << endl;
	}

	bool operator<(const Person& personRight)const { //not changed = use const
		//return this->getPriority() < personRight.getPriority();

		return (veteran + disabled + pregnant) <= (personRight.veteran + personRight.disabled + personRight.pregnant);
	}
};

