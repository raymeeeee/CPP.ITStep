#pragma once
#include "Car.h"
class Truck :
    public Car
{
protected:
    float m_capacity;
public:
    Truck();
    Truck(string brand, string color, float gasTank, float consumption, float capacity);

    float getDeliveryPrice(float gasPrice=1)const; //1usd per liter

    void setCapacity(float capacity);
    float getCapacity()const;
    void showInfo()const;
};

