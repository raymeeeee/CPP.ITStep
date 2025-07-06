#include "Buy.h"

Buy::Buy()
{
    m_amount = 0;
}

Buy::Buy(Product p, int amount) : Product(p)
{
    m_amount = amount;
}

int Buy::getAmount() const
{
    return m_amount;
}

void Buy::setAmount(int amount)
{
    m_amount = amount;
}

float Buy::calcTotalCost() const
{
    return m_amount*this->getPrice();
}

float Buy::calcTotalWeight() const
{
    return m_amount * this->getWeight();
}

void Buy::printBuy() const
{
    this->showProduct();
    cout << "Amount: " << m_amount << endl;
    cout << "Total cost: " << calcTotalCost() << endl;
    cout << "Total weight: " << calcTotalWeight() << endl;

}
