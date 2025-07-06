#pragma once
#include "HikingTour.h"
#include "Cruise.h"
#include "HealthTour.h"
//#include <vector>
//#include <map>
//#include <algorithm>

//#include <functional>

namespace TourCompanyes {
	using namespace Tours;
	class TourCompany
	{
	protected:
		string name;
		vector<Tour*> tours;
	public:
		TourCompany() {
			this->name = "name";
		}
		TourCompany(string name) {
			this->name = name;
		}
		~TourCompany() {
			/*for (int i = 0; i < tours.size(); i++)
			{
				delete tours[i];
			}*/
		}

		bool isEmpty()const {
			return tours.empty();
		}

		void addTour(Tour* tour) {
			if (tour != nullptr) {
				tours.push_back(tour);
				cout << "Tour successfully added" << endl;
			}
		}

		void delTour(int number) {
			auto it = find_if(tours.begin(), tours.end(),
				[number](Tour* a) {return (number == a->getNumber()); });

			if (it != tours.end()) {
				tours.erase(it);
				cout << "Tour successfully deleted" << endl;
			}
			else {
				cout << "No such tour" << endl;
			}

		}

		Tour* getTour(int number) {
			for (int i = 0; i < tours.size(); i++)
			{
				if (tours[i]->getNumber() == number) {
					/*if (typeid(*tours[i]) == typeid(Tour)) {
						return tours[i];
					}
					else if (typeid(*tours[i]) == typeid(HealthTour)) {
						HealthTour* s = dynamic_cast<HealthTour*>(tours[i]);
						return s;
					}
					else if (typeid(*tours[i]) == typeid(HikingTour)) {
						HikingTour* s = dynamic_cast<HikingTour*>(tours[i]);
						return s;
					}
					else if (typeid(*tours[i]) == typeid(Cruise)) {
						Cruise* s = dynamic_cast<Cruise*>(tours[i]);
						return s;
					}*/

					return tours[i];
				}
			}
			cout << "No such tour" << endl;
			return nullptr;
		}

		template <typename T>
		void findTour(T func) {
			bool find = false;
			for (int i = 0; i < tours.size(); i++)
			{
				if (func(tours[i])) { find = true; }

			}

			if (find == false) {
				cout << "No such tour" << endl;
			}
		}

		//void findTourByNumber(int number) {
		//	for (int i = 0; i < tours.size(); i++)
		//	{
		//		if (tours[i]->getNumber() == number) {
		//			if (typeid(*tours[i]) == typeid(Tour)) {
		//				cout << "------Tour------" << endl;
		//				tours[i]->show();
		//				return; //unique number so no reason to continue
		//			}
		//			else if (typeid(*tours[i]) == typeid(HealthTour)) {
		//				cout << "------HealthTour------" << endl;
		//				tours[i]->show();
		//				return;
		//			}
		//			else if (typeid(*tours[i]) == typeid(HikingTour)) {
		//				cout << "------HikingTour------" << endl;
		//				tours[i]->show();
		//				return;
		//			}
		//			else if (typeid(*tours[i]) == typeid(Cruise)) {
		//				cout << "------Cruise------" << endl;
		//				tours[i]->show();
		//				return;
		//			}

		//		}
		//	}
		//	cout << "No such tour" << endl;
		//}

		template <typename Func>
		void sortTour(Func func) {

			sort(tours.begin(), tours.end(), func);
			cout << "Tours successfully sorted" << endl;
		}

		void showTours()const {
			cout << "Company name: " << name << endl;
			for (int i = 0; i < tours.size(); i++)
			{
				cout << "=========================================================" << endl;
				if (typeid(*tours[i]) == typeid(Tour)) {
					cout << "------Tour------" << endl;
				}
				else if (typeid(*tours[i]) == typeid(HealthTour)) {
					cout << "------HealthTour------" << endl;
				}
				else if (typeid(*tours[i]) == typeid(HikingTour)) {
					cout << "------HikingTour------" << endl;
				}
				else if (typeid(*tours[i]) == typeid(Cruise)) {
					cout << "------Cruise------" << endl;
				}
				tours[i]->show();

			}
			cout << "=========================================================" << endl;
		}
	};

}

