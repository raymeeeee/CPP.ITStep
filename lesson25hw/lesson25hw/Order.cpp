#include "order.h"

Order::Order() {

    ms_orderID++;

    Date dateCurr;
    Time timeCurr;
    m_orderDate = to_string(dateCurr.getDay()) + "." + to_string(dateCurr.getMonth()) + "." + to_string(dateCurr.getYear()); //string example: 12.02.2024
    m_orderTime = to_string(timeCurr.getHours()) + ":" + to_string(timeCurr.getMinutes()) + ":" + to_string(timeCurr.getSeconds());

    m_cookingTime = 15; //default
    m_orderDescription = "Burger Menu"; //default
    m_orderPrice = 199; //default
    m_orderNumber = ms_orderID;
}

Order::Order(int cookingTime, string orderDescription, float orderPrice) {

    ms_orderID++;

    Date dateCurr;
    Time timeCurr;
    m_orderDate = to_string(dateCurr.getDay()) + "." + to_string(dateCurr.getMonth()) + "." + to_string(dateCurr.getYear()); //string example: 12.02.2024
    m_orderTime = to_string(timeCurr.getHours()) + ":" + to_string(timeCurr.getMinutes()) + ":" + to_string(timeCurr.getSeconds());

    m_cookingTime = cookingTime;
    m_orderDescription = orderDescription;
    m_orderPrice = orderPrice;

    m_orderNumber = ms_orderID;
}

void Order::setCookingTime(int time)
{
    m_cookingTime = time;
}

void Order::setOrderDescription(string desc)
{
    m_orderDescription = desc;
}

void Order::setOrderPrice(float price)
{
    m_orderPrice = price;
}

int Order::getOrderID()
{
    return ms_orderID;
}

string Order::getOrderDate() const
{
    return m_orderDate;
}

string Order::getOrderTime() const
{
    return m_orderTime;
}

int Order::getCookingTime() const
{
    return m_cookingTime;
}

string Order::getOrderDescription() const
{
    return m_orderDescription;
}

float Order::getOrderPrice() const
{
    return m_orderPrice;
}

int Order::getOrderNumber() const
{
    return m_orderNumber;
}

void Order::showOrder() const
{
    cout << m_orderDate << "\n"
        << m_orderTime << "\n"
        << m_cookingTime << "\n"
        << m_orderDescription << "\n"
        << m_orderPrice << "\n"
        << m_orderNumber << "\n";
}

