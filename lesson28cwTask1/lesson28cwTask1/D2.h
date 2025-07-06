#pragma once
#include "D1.h"
#include "B2.h"
class D2 :
    private D1, private B2
{
protected:
    int d2;
public:
    D2(int x, int y, int z, int q) : D1(x, y), B2(z) { d2 = q; };
    void showD2()const { cout << "D2: " << d2 << endl; showD1(); showB2(); };
};

