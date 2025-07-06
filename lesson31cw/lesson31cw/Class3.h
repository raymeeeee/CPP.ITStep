#pragma once
#include "Class1.h"

namespace n1 {
	class Class3 : public Class1 {
	public:
		void show()const { cout << "Inside namespace n1 :: Class3" << endl; }
	};
}