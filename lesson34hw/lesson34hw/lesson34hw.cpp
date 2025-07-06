#include "DNode.h"

using namespace myList;
int main()
{
    DList<int> d;
	d.push_back(4); // head = tail = 4
	d.push_back(8); // head = 4; tail = 8
	d.push_back(2); // head = 4; tail = 2
	d.push_back(5);

	d.show();
	cout << "================================" << endl;
	d.push_front(10);
	d.show();
	cout << "================================" << endl;
	d.search(8);
	cout << "================================" << endl;
	d.insertBefore(8, 20);
	d.show();
	cout << "================================" << endl;
	d.insertAfter(8, 50);
	d.show();
	cout << "================================" << endl;
	d.erase(50);
	d.show();
	cout << "================================" << endl;
}

