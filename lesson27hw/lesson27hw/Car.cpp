#include "Car.h"

Car::Car()
{
    m_brand="";
    m_color = "";
    m_gasTank=0;
    m_consumption=0;
}

Car::Car(string brand, string color, float gasTank, float consumption)
{
    m_brand = brand;
    m_color = color;
    m_gasTank = gasTank;
    m_consumption = consumption;
}

void Car::setBrand(string brand)
{
    m_brand = brand;
}

void Car::setColor(string color)
{
    m_color = color;
}

void Car::setGastank(float gasTank)
{
    m_gasTank = gasTank;
}

void Car::setConsumption(float consumption)
{
    m_consumption = consumption;
}

float Car::getMaxDistance()const
{
    return (m_gasTank/m_consumption)*100;
}

string Car::getBrand() const
{
    return m_brand;
}

string Car::getColor() const
{
    return m_color;
}

float Car::getGastank() const
{
    return m_gasTank;
}

float Car::getConsumption() const
{
    return m_consumption;
}

void Car::showInfo() const
{
    cout << "Brand: " << m_brand << endl;
    cout << "Color: " << m_color << endl;
    cout << "Volume of gas tank: " << m_gasTank << "l" << endl;
    cout << "Consumption of gas per 100km: " << m_consumption << "l" << endl;
    cout << "Max distance: " << this->getMaxDistance() << "km" << endl;
}
