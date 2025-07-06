#pragma once

#include <string>
using namespace std;
class PublicationException
{
protected:
	string namePublication;
public:
	PublicationException(string namePublication) {
		this->namePublication = namePublication;
	;}

	virtual string message() const = 0;
};

class NameException : public PublicationException {
protected:
	string name;
public:
	NameException(string namePublication, string name) : PublicationException(namePublication) {
		this->name = name;
	}

	string message()const override {
		return "Publication name: " + namePublication + ". Incorrect name: " + name + ".";
	};

};

class EditionYearException : public PublicationException {
protected:
	int year;
public:
	EditionYearException(string namePublication, int year) : PublicationException(namePublication) {
		this->year = year;
	}

	string message()const override {
		return "Publication name: " + namePublication + ". Incorrect year: " + to_string(year) + ".";
	};

};