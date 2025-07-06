#include "Visa.h"

Visa::Visa()
{
    Date now;
    m_country = "";
    m_open = now;
    m_close = now + 5.0; //5 years
}

Visa::Visa(string country)
{
    Date now;
    m_country = country;
    m_open = now;
    m_close = now + 5.0;
}

void Visa::setCountry(string country)
{
    m_country = country;
}

string Visa::getCountry() const
{
    return m_country;
}

Date Visa::getOpen() const
{
    return m_open;
}

Date Visa::getClose() const
{
    return m_close;
}

void Visa::showVisa() const
{
    cout << "Country: " << m_country << endl;
    cout << "Open date: " << m_open << endl;
    cout << "Close date: " << m_close << endl;
}
