#include "Truck.h"

Truck::Truck()
{
    m_capacity = 0;
}

Truck::Truck(string brand, string color, float gasTank, float consumption, float capacity) : Car(brand, color, gasTank, consumption)
{
    m_capacity = capacity;
}

float Truck::getDeliveryPrice(float gasPrice) const
{
    return ((m_consumption/100)* gasPrice)/m_capacity;
}

void Truck::setCapacity(float capacity)
{
    m_capacity = capacity;
}

float Truck::getCapacity() const
{
    return m_capacity;
}

void Truck::showInfo() const
{
    Car::showInfo();
    cout << "Capacity: " << m_capacity << "t" << endl;
    cout << "Delivery price: " << this->getDeliveryPrice() << "usd" << "per km" << endl;
}
