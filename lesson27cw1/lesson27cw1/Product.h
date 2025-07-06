#pragma once
#include <string>
#include <iostream>
using namespace std;
class Product
{
	string m_name;
	float m_price;
	float m_weight;
public:
	Product();
	Product(string name, float price, float weight);

	void setName(string name);
	void setPrice(float price);
	void setWeight(float weight);

	string getName()const;
	float getPrice()const;
	float getWeight()const;

	void showProduct()const;
};

