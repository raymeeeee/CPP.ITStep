#include "Garage.h"


int main()
{
	Car delorian(30000, 2047, 179, 48, 24);
	/*delorian.showInfo();
	int distance = 500;
	cout << delorian.ride(distance) << "h" << endl;
	cout << delorian.gasDistance(distance) << "l" << endl;*/

	Truck Man(100000, 2020, 99, 125, 30, 400);
	/*Man.showInfo();
	int distance = 1280;
	cout << Man.ride(distance) << "h" << endl;
	cout << Man.gasDistance(distance) << "l" << endl;*/

	Bicycle c(700, 2016, 30, 7);
	/*c.showInfo();
	int distance = 78;
	cout << c.ride(distance) << "h" << endl;
	cout << c.getGearSpeed(6) << "km/h" << endl;*/

	Garage garage;
	garage.pushBack(new Car(30000, 2047, 179, 48, 24));
	garage.pushBack(new Truck(100000, 2020, 99, 125, 30, 400));
	garage.pushBack(new Bicycle(700, 2016, 30, 7));

	garage.delVehicle(2); //Truck from file
	garage.showInfo();

	garage.findVehicle("INDEX"); // TYPE | INDEX | TYPESPEED
	garage.editVehicle(2);
	garage.sortSpeed(); //from BIGGEST to LOWEST
	cout << "================================" << endl;
	garage.showInfo();
}
