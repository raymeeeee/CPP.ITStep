#pragma once
#include <iostream>
using namespace std;
class B2
{
protected:
	int b2;
public:
	B2(int x) { b2 = x; };
	void showB2()const { cout << "B2: " << b2 << endl; };
};

