#include "BusSchedule.h"

using namespace std;

int main()
{
	/*Time time1(20,0,0);
	Time time2(20, 0, 0);

	time1 = time1 - 5.0f;
	cin >> time2;
	cout << time1 << time2;*/

	BusSchedule b1({ "Saltivka", "Istorychnyi Musei", "Pivdennyi Voksal", "Heroiv Praci", "Zavod im. Malisheva", "Sportivna", "Maidan Konstituciyi", "Holodna Gora", "Universitet", "Kiyvska"}, Time(6, 0), Time(11, 0), 30, 10);

	/*b1.showInfo();
	b1.printShedule();*/

	b1.addStation(2, "Industrialna");
	b1.delStation(2);
	b1.printShedule();
	//b1.showInfo();
	
}

