#pragma once
#include "Class1.h"

class OutsideClass : public n1::Class1 {
public:
	void show()const { cout << "Outside namespace n1 :: OutsideClass" << endl; }
};

