#pragma once
#include "Product.h"
class Buy :
    public Product
{
    int m_amount;
public:
    Buy();
    Buy(Product p, int amount);

    int getAmount()const;
    void setAmount(int amount);

    float calcTotalCost()const;
    float calcTotalWeight()const;

    void printBuy()const;
};

