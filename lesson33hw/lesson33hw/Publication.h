#pragma once
#include <iostream>
#include <string>
#include "PublicationException.h"
using namespace std;


class Publication
{
protected:
	string name;
	string author;
	int year;
public:
	Publication() {
		name = "undefined";
		author = "undefined";
		year = 0;
	}
	Publication(string name, string author, int year) {
		setName(name);
		this->author = author;
		setYear(year);
	}

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);

	string getName()const;
	string getAuthor()const;
	int getYear()const;

	virtual void showInfo()const = 0;
};

