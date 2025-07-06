#include "Publication.h"

void Publication::setName(string name)
{
	if (name.empty()) throw new NameException(this->name, name);
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}

void Publication::setYear(int year)
{
	if (year < 0) throw new EditionYearException(this->name, year);
	this->year = year;
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuthor() const
{
	return author;
}

int Publication::getYear() const
{
	return year;
}
