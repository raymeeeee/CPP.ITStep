#pragma once
#include "Buy.h"
#include <fstream>
class Bill :
    public Buy
{
public:
    Bill();
    Bill(Buy b);
    void printBill(string fileName);
};

