#pragma once
#include <iostream>
#include <string>
using namespace std;

class Overcoat
{
protected:
	string type;
	int size; //XS, S, M, L, XL, XXL, XXXL...
	float price;
public:
	Overcoat(string type, int size, float price) { this->type = type; this->size = size;
	this->price = price;
	}

	void setType(string type) { this->type = type; };
	void setSize(int size) { this->size = size; };
	void setPrice(float price) { this->price = price; };

	string getType()const { return type; };
	string getSize()const {
		switch (size) //XS, S, M, L, XL, XXL, XXXL...
		{
		case 1: return "XS"; break;
		case 2: return "S"; break;
		case 3:  return "M"; break;
		case 4:  return "L"; break;
		case 5:  return "XL"; break;
		case 6:  return "XXL"; break;
		case 7:  return "XXXL"; break;
		}
	};
	float getPrice()const { return price; };

	void addSize(int i=1);
	void substractSize(int i=1);

	bool operator == (const Overcoat& obj)const&;
	bool operator != (const Overcoat& obj)const&;
	bool operator > (const Overcoat& obj)const&;
	bool operator < (const Overcoat& obj)const&;
	bool operator >= (const Overcoat& obj)const&;
	bool operator <= (const Overcoat& obj)const&;

	Overcoat& operator --();
	Overcoat operator --(int);
	Overcoat& operator ++ ();
	Overcoat operator ++ (int);

	friend ostream& operator << (ostream& os, const Overcoat& t);
	friend istream& operator >> (istream& is, Overcoat& t);

	void showOvercoat()const { 
	cout << "Type: " << type << endl;
	cout << "Size: " << this->getSize() << endl;
	cout << "Price: " << price << "usd" << endl;
	};
};

