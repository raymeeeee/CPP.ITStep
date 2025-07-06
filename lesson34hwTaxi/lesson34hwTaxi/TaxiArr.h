#pragma once
#include "Taxi.h"
#include <list>
#include <algorithm>

class TaxiArr
{
protected:
	list<Taxi> onTaxi;
public:
	TaxiArr() {};
	~TaxiArr() {
	};

	void push_front(Taxi taxi) {
		onTaxi.push_front(taxi);
	}

	void insert(int taxiNumber, Taxi taxi) {
		auto item = find_if(onTaxi.begin(), onTaxi.end(), [taxiNumber](Taxi a) {return (a.getNumber() == taxiNumber); });

		if (item == onTaxi.end()) {
			cout << "Not found" << endl;
		}
		else {
			//item++; //AFTER
			onTaxi.insert(item, taxi);
		}
	}

	void remove(int taxiNumber) {
		auto item = find_if(onTaxi.begin(), onTaxi.end(), [taxiNumber](Taxi a) {return (a.getNumber() == taxiNumber); });

		if (item == onTaxi.end()) {
			cout << "Not found" << endl;
		}
		else {
			onTaxi.erase(item);
		}
	}

	void showTaxi()const {
		for (auto i : onTaxi) {
			i.showInfo();
			cout << "----------------------------------" << endl;
			
		}
	}

	void showFreeTaxi() {
		for (auto i : onTaxi) {
			if (i.getIsAvailable() == true) {
				i.showInfo();
				cout << "----------------------------------" << endl;
			}
		}
	}

	void showWorkingTaxi() {
		for (auto i : onTaxi) {
			if (i.getIsAvailable() == false) {
				i.showInfo();
				cout << "----------------------------------" << endl;
			}
		}
	}

	void callTaxi(int taxiNumber) {
		auto item = find_if(onTaxi.begin(), onTaxi.end(), [taxiNumber](Taxi a) {return (a.getNumber() == taxiNumber); });

		for (auto &i : onTaxi) { //to return values &i outside the for
			if (i.getNumber() == taxiNumber && i.getIsAvailable() == true) {
				i.setIsAvailable(false);
				cout << "Taxi#" << i.getNumber() << " WORKING" << endl;
				return;
			}
		}
		cout << "Not available" << endl;
	}

	void returnTaxi(int taxiNumber) {
		auto item = find_if(onTaxi.begin(), onTaxi.end(), [taxiNumber](Taxi a) {return (a.getNumber() == taxiNumber); });

		for (auto& i : onTaxi) { //to return values &i outside the for
			if (i.getNumber() == taxiNumber) {
				i.setIsAvailable(true);
				cout << "Taxi#" << i.getNumber() << " FREE" << endl;
				return;
			}
		}
		cout << "Not found" << endl;
	}
			
};

