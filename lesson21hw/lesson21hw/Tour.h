#pragma once
#include <iostream>
using namespace std;

class Tour
{
	char* m_title; 
	float m_price_per_day;
	char* m_date_in;		//01.12.24
	char* m_country;
	int m_days;
	bool m_food;
	float m_passage_price;

public:

	Tour();
	Tour(const char* title, float price_per_day, const char* date_in, const char* country, int days, bool food, float passage_price);
	Tour(const Tour& obj); //!! copy constructor
	Tour& operator = (const Tour& obj); //!! operator= присвоювання
	~Tour();

	void setTitle(const char* title);
	void setPricePerDay(float price_per_day);
	void setCountry(const char* country);
	void setDays(int days);
	void setFood(bool food);
	void setPassagePrice(float passage_price);

	const char* getTitle()const; //!! константный метод
	float getPricePerDay()const;
	const char* getDateIn()const;
	const char* getCountry()const;
	int getDays()const;
	float getPassagePrice()const;

	void showInfo()const;
};

