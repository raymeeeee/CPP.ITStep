#pragma once
#include "Class1.h"

namespace n1 {
	class Class2 : public Class1 {
	public:
		void show()const { cout << "Inside namespace n1 :: Class2" << endl; }
	};
}