#pragma once
#include "Overcoat.h"
#include <vector>
#include <algorithm>
class Shop
{
protected:
	vector<Overcoat> range;
public:
	Shop() { this->range; };
	Shop(vector<Overcoat> range) { this->range = range; };

	void shopPushBack(Overcoat obj) { range.push_back(obj); };
	void shopErase(int index) { if (index >= 0 && index < range.size())range.erase(range.begin() + index); };

	void shopAddSizeEl(int i=0) { range[i-1]++; };
	void shopSubstractSizeEl(int i=0) { range[i-1]--; };

	void shopFindType(string type) {
		auto item = for_each(range.begin(), range.end(), [type](Overcoat a) { if (a.getType() == type) {
			a.showOvercoat();
			cout << endl;
		}; });
	};

	void shopSort() { sort(range.begin(), range.end(), [](Overcoat a, Overcoat b) {return a > b; }); };

	void showShop()const {
		for (auto i : range) {
			i.showOvercoat();
			cout << endl;
		}
	};
};

