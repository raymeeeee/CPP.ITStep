#pragma once
#include "B1.h"
class D1 : public B1
{
    int d1;
public:
    D1(int x, int y) : B1(x) { d1 = y; };
    void showD1()const { cout << "D1: " << d1 << endl; showB1(); };
};

