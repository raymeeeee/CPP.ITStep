#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

class Order
{
    static int ms_orderID;

    string m_orderDate;
    string m_orderTime;
    int m_cookingTime;
    string m_orderDescription;
    float m_orderPrice;
    int m_orderNumber; //orderID

public:
    Order();
    Order(int cookingTime, string orderDescription, float orderPrice);


    //static void setOrderID(int id);
    void setCookingTime(int time);
    void setOrderDescription(string desc);
    void setOrderPrice(float price);

    static int getOrderID();
    string getOrderDate()const;
    string getOrderTime()const;
    int getCookingTime()const;
    string getOrderDescription()const;
    float getOrderPrice()const;
    int getOrderNumber()const;

    void showOrder()const;

};

