#include "Item.h"

Item::Item()
{
    m_name = "undefined";
    m_author = "undefined";
    m_year = 1900;
    m_price = 0;
}

Item::Item(string name, string author, int year, float price)
{
    m_name = name;
    m_author = author;
    m_year = year;
    m_price = price;
}

void Item::setName(string name)
{
    m_name = name;
}

void Item::setAuthor(string author)
{
    m_author = author;
}

void Item::setYear(int year)
{
    m_year = year;
}

void Item::setPrice(float price)
{
    m_price = price;
}

string Item::getName() const
{
    return m_name;
}

string Item::getAuthor() const
{
    return m_author;
}

int Item::getYear() const
{
    return m_year;
}

float Item::getPrice() const
{
    return m_price;
}

void Item::showItem() const
{
    cout << "Title: " << m_name << endl;
    cout << "Creator: " << m_author << endl;
    cout << "Year: " << m_year << endl;
    cout << "Price: " << m_price << endl;
}
