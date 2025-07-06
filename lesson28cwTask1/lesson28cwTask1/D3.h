#pragma once
#include "D2.h"
class D3 :
    public D2
{
protected:
    int d3;
public:
    D3(int x, int y, int z, int q, int p) : D2(x, y, z, q) { d3 = p; };
    void showD3()const { cout << "D3: " << d3 << endl; showD2(); }; //no connection to B2
};

