#include "MyList.h"
#include "DoubleWayList.h"

int main()
{
	using namespace myList;
	//4 8 2 5
	int a[4] = { 4,8,2,5 };
	//XXXX XXXX XXXX XXXX

	//-----------------------------------//
	//Node<int> first(4); //info = 4; next = nullptr;

	//Node<int> second(8); //info = 8; next = nullptr;
	//first.next = &second;
	//
	//Node<int> third(2); //info = 2; next = nullptr;
	//second.next = &third;

	//Node<int> fourth(5); //info = 2; next = nullptr;
	//third.next = &fourth;

	//
	//MyList<int> b; // head = tail = nullptr
	//b.show();
	//cout << "================================" << endl;
	//b.push_back(4); // head = tail = 4
	//b.show();
	//cout << "================================" << endl;
	//b.push_back(8); // head = 4; tail = 8
	//b.push_back(2); // head = 4; tail = 2
	//b.push_back(5); // head = 4; tail = 5

	//b.show();
	//cout << "================================" << endl;
	//cout << "================================" << endl;
	//b.show();

	DList<int> d;
	d.show();
	cout << "================================" << endl;
	d.push_back(4); // head = tail = 4
	d.show();
	cout << "================================" << endl;
	d.push_back(8); // head = 4; tail = 8
	d.push_back(2); // head = 4; tail = 2
	d.push_back(5); // head = 4; tail = 5
	d.show();
	cout << "================================" << endl;
	cout << "================================" << endl;
	d.showReverse();
	cout << "================================" << endl;
	cout << "================================" << endl;
	d.search(8);
}
