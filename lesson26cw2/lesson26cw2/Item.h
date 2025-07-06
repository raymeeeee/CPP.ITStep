#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
protected:
	string m_name;
	string m_author;
	int m_year;
	float m_price;
public:
	Item();
	Item(string name, string author, int year, float price);

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);
	void setPrice(float price);

	string getName()const;
	string getAuthor()const;
	int getYear()const;
	float getPrice()const;

	void showItem()const;
};

