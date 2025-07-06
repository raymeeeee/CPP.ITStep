#include "TouristAgency.h"

Tour::Tour()
{
	m_title = new char[10] {"undefined"};
	m_price_per_day = 0;
	m_date_in = new char[9] {"01/01/24"};
	m_country = new char[10] {"undefined"};
	m_days = 0;
	m_food = 0;
	m_passage_price = 0;
	
}

Tour::Tour(const char* title, float price_per_day, const char* date_in, const char* country, int days, bool food, float passage_price)
{
	int sizeTitle = strlen(title) + 1; //size
	m_title = new char[sizeTitle]; //выделение памяти
	strcpy_s(m_title, sizeTitle, title);

	m_price_per_day = price_per_day;

	int sizeDateIn = strlen(date_in) + 1; //size
	m_date_in = new char[sizeDateIn]; //выделение памяти
	strcpy_s(m_date_in, sizeDateIn, date_in);

	int sizeCountry = strlen(country) + 1; //size
	m_country = new char[sizeCountry]; //выделение памяти
	strcpy_s(m_country, sizeCountry, country);

	m_days = days;
	m_food = food;
	m_passage_price = passage_price;
}


Tour::Tour(const Tour& obj)
{
	int sizeT = strlen(obj.m_title) + 1;
	this->m_title = new char[sizeT];
	strcpy_s(this->m_title, sizeT, obj.m_title);

	this->m_price_per_day = obj.m_price_per_day;

	int sizeDI = strlen(obj.m_date_in) + 1;
	this->m_date_in = new char[sizeDI];
	strcpy_s(this->m_date_in, sizeDI, obj.m_date_in);

	int sizeC = strlen(obj.m_country) + 1;
	this->m_country = new char[sizeC];
	strcpy_s(this->m_country, sizeC, obj.m_country);

	this->m_days = obj.m_days;
	this->m_food = obj.m_food;
	this->m_passage_price = obj.m_passage_price;

}

Tour& Tour::operator=(const Tour& obj)
{
	this->~Tour(); //!

	int sizeT = strlen(obj.m_title) + 1;
	this->m_title = new char[sizeT];
	strcpy_s(this->m_title, sizeT, obj.m_title);

	this->m_price_per_day = obj.m_price_per_day;

	int sizeDI = strlen(obj.m_date_in) + 1;
	this->m_date_in = new char[sizeDI];
	strcpy_s(this->m_date_in, sizeDI, obj.m_date_in);

	int sizeC = strlen(obj.m_country) + 1;
	this->m_country = new char[sizeC];
	strcpy_s(this->m_country, sizeC, obj.m_country);

	this->m_days = obj.m_days;
	this->m_food = obj.m_food;
	this->m_passage_price = obj.m_passage_price;

	return *this;
}

Tour::~Tour()
{
	delete[] m_title;
	delete[] m_date_in;
	delete[] m_country;
}

void Tour::setTitle(const char* title)
{
	if (strlen(title) >= 2) {
		delete[] m_title; //delete old title

		int sizeTitle = strlen(title) + 1; //size
		m_title = new char[sizeTitle]; //выделение памяти
		strcpy_s(m_title, sizeTitle, title);
	}
}

void Tour::setPricePerDay(float price_per_day)
{
	if (price_per_day > 0) {
		m_price_per_day = price_per_day;
	}
}

void Tour::setCountry(const char* country)
{
	if (strlen(country) >= 2) {
		delete[] m_country; //delete old title

		int sizeC = strlen(country) + 1; //size
		m_country = new char[sizeC]; //выделение памяти
		strcpy_s(m_country, sizeC, country);
	}
}

void Tour::setDays(int days)
{
	if (days > 0){
		m_days = days;
	}
}

void Tour::setFood(bool food)
{
	m_food = food;
}

void Tour::setPassagePrice(float passage_price)
{
	if (passage_price > 0) {
		m_passage_price = passage_price;
	}
}

const char* Tour::getTitle() const{return m_title;}

float Tour::getPricePerDay() const{return m_price_per_day;}

const char* Tour::getDateIn() const{return m_date_in;}

const char* Tour::getCountry() const { return m_country; }

int Tour::getDays() const{return m_days;}

float Tour::getPassagePrice() const{return m_passage_price;}

void Tour::showInfo() const
{
	cout << "Name:\t\t\t" << m_title << endl;
	cout << "Price per day:\t\t" << m_price_per_day << endl;
	cout << "Date in:\t\t" << m_date_in << endl;
	cout << "Country:\t\t" << m_country << endl;
	cout << "Days:\t\t\t" << m_days << endl;
	cout << "Food:\t\t\t" << ((m_food) ? "Yes" : "No") << endl;
	cout << "Passage price:\t\t" << m_passage_price << endl;
	cout << endl;
}
