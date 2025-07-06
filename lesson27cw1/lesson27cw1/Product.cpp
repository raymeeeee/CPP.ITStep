#include "Product.h"

Product::Product()
{
    m_name = "";
    m_price = 0;
    m_weight = 0;
}

Product::Product(string name, float price, float weight)
{
    m_name = name;
    m_price = price;
    m_weight = weight;
}

void Product::setName(string name)
{
    m_name = name;
}

void Product::setPrice(float price)
{
    m_price = price;
}

void Product::setWeight(float weight)
{
    m_weight = weight;
}

string Product::getName() const
{
    return m_name;
}

float Product::getPrice() const
{
    return m_price;
}

float Product::getWeight() const
{
    return m_weight;
}

void Product::showProduct() const
{
    cout << "Name:" << m_name << endl;
    cout << "Price:" << m_price << endl;
    cout << "Weight:" << m_weight << endl;
}
