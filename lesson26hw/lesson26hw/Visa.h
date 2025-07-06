#pragma once
#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

class Visa
{
protected:
	string m_country;
	Date m_open;
	Date m_close;
public:
	Visa();
	Visa(string country);

	void setCountry(string country);

	string getCountry()const;
	Date getOpen()const;
	Date getClose()const;
	void showVisa()const;
};

