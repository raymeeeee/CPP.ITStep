#pragma once
#include "Truck.h"
#include "Bicycle.h"
#include <vector>
#include <algorithm>
#include <typeinfo>

class Garage
{
	vector<Vehicle*> garage;
public:
	Garage() {
		ifstream file("info-garage.txt");
		if (file.is_open()) {
			string type;
			while (!file.eof()) {
				getline(file, type);
				if (type == "Bicycle") {
					Vehicle* obj = new Bicycle();
					obj->load(file); //name+company
					garage.push_back(obj);
				}
				else if (type == "Car") {
					Vehicle* obj = new Car();
					obj->load(file); //name+company+install+days
					garage.push_back(obj);
				}
				else if (type == "Truck") {
					Vehicle* obj = new Truck();
					obj->load(file); //name+company+install+days+price
					garage.push_back(obj);
				}
			}
			file.close();
		}
	};

	~Garage() {
		for (int i = 0; i < garage.size(); i++)
		{
			delete garage[i];
		}
	}

	void pushBack(Vehicle* vehicle) { 
		if (vehicle != nullptr) garage.push_back(vehicle);
	};
	void delVehicle(int index) { 
		if (index > 0 && index <= garage.size()){
			delete garage[index-1];
			garage.erase(garage.begin() + index-1);
		}
	};

	void sortSpeed() {
		sort(garage.begin(), garage.end(), [](Vehicle* a, Vehicle* b)
			{return a->getMaxSpeed() > b->getMaxSpeed(); });
	}

	void editVehicle(int index) {
		index--;
		if (typeid(*garage[index]) == typeid(Bicycle)) { //можно добавить выбор что именно эдитить
			Bicycle* b = dynamic_cast<Bicycle*>(garage[index]); //dynamic_cast employee, manager to teacher = NULLPTR
			float tmp1;
			cout << "Price: "; cin >> tmp1;
			b->setPrice(tmp1);
			cout << "Year: "; cin >> tmp1;
			b->setYear(tmp1);
			cout << "Max speed: "; cin >> tmp1;
			b->setMaxSpeed(tmp1);
			cout << "Gears: "; cin >> tmp1;
			b->setGears(tmp1);
		}
		else if (typeid(*garage[index]) == typeid(Car)) {
			Car* c = dynamic_cast<Car*>(garage[index]);
			float tmp1;
			cout << "Price: "; cin >> tmp1;
			c->setPrice(tmp1);
			cout << "Year: "; cin >> tmp1;
			c->setYear(tmp1);
			cout << "Max speed: "; cin >> tmp1;
			c->setMaxSpeed(tmp1);
			cout << "Gas tank: "; cin >> tmp1;
			c->setGasTank(tmp1);
			cout << "Consumption of gas per 100 km: "; cin >> tmp1;
			c->setConsumption(tmp1);
		}
		else if (typeid(*garage[index]) == typeid(Truck)) {
			Truck* t = dynamic_cast<Truck*>(garage[index]);
			float tmp1;
			cout << "Price: "; cin >> tmp1;
			t->setPrice(tmp1);
			cout << "Year: "; cin >> tmp1;
			t->setYear(tmp1);
			cout << "Max speed: "; cin >> tmp1;
			t->setMaxSpeed(tmp1);
			cout << "Gas tank: "; cin >> tmp1;
			t->setGasTank(tmp1);
			cout << "Consumption of gas per 100 km: "; cin >> tmp1;
			t->setConsumption(tmp1);
			cout << "Carrying capacity: "; cin >> tmp1;
			t->setCarrying(tmp1);
		}
	}

	void findVehicle(string typefind) {
		if (typefind == "TYPE") {
			string tmp;
			cout << "What type of vehicle do you want to find: ";
			cin >> tmp;
			string typeClass = "class " + tmp;
			for (int i = 0; i < garage.size(); i++)
			{
				
				if (string(typeid(*garage[i]).name()) == typeClass) {
					cout << "\t#" << i + 1 << endl;
					garage[i]->showInfo();
					cout << endl;
				}
			}
		}
		else if (typefind == "INDEX") {
			int tmp;
			cout << "Type index of vehicle that you want to find: ";
			cin >> tmp;
			if (tmp > 0 && tmp <= garage.size()) {
				cout << "\t#" << tmp << endl;
				tmp--;
				if (typeid(*garage[tmp]) == typeid(Bicycle)) {
					cout << "------Bicycle------" << endl;
				}
				else if (typeid(*garage[tmp]) == typeid(Car)) {
					cout << "------Car------" << endl;
				}
				else if (typeid(*garage[tmp]) == typeid(Truck)) {
					cout << "------Truck------" << endl;
				}
				garage[tmp]->showInfo();
				cout << endl;
			}
		}
		else if (typefind == "TYPESPEED") {
			string tmp1;
			cout << "What type of vehicle do you want to find: ";
			cin >> tmp1;
			float tmp2;
			cout << "> Max speed: ";
			cin >> tmp2;
			string typeClass = "class " + tmp1;
			for (int i = 0; i < garage.size(); i++)
			{
				if (string(typeid(*garage[i]).name()) == typeClass && garage[i]->getMaxSpeed() > tmp2) {
					cout << "\t#" << i + 1 << endl;
					garage[i]->showInfo();
					cout << endl;
				}
			}
		}
	}

	void showInfo()const {
		for (int i = 0; i < garage.size(); i++) //7
		{
			if (typeid(*garage[i]) == typeid(Bicycle)) {
				cout << "------Bicycle------" << endl;
			}
			else if (typeid(*garage[i]) == typeid(Car)) {
				cout << "------Car------" << endl;
			}
			else if (typeid(*garage[i]) == typeid(Truck)) {
				cout << "------Truck------" << endl;
			}
			cout << "\t#" << i + 1 << endl;
			garage[i]->showInfo(); //same name of func required to make dynamic polymorphism
			cout << endl;
		}
	}
};

