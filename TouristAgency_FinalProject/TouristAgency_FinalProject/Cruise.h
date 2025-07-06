#pragma once
#include "Tour.h"
#include <vector>
#include <map>
#include <algorithm>

namespace TourCompanyes {
	namespace Tours {
		class Cruise :
			public Tour
		{
		protected:
			vector<map<string, int>> places; //vector of COUNTRY+CITY + TIME TO GET TO
			int daysStaying;
			int hoursSwimming;

			DateTime calcArrival() override {
				DateTime arrival = departure;

				arrival += int(daysStaying * (places.size() - 2));

				//for (auto it = places.begin(); it != places.end(); it++) { //vector
				//	for (auto itIN = it->begin(); itIN != it->end(); itIN++) {
				//		arrival += float(itIN->second) * 60; //swimming hours
				//	}
				//}

				arrival += float(hoursSwimming * 60);

				return arrival;
			}

			int calcDaysIn() {

				if (places.size() > 1) {
					daysIn = int(daysStaying * (places.size() - 2)) + int(hoursSwimming / 24);
				}
				else {
					daysIn = 0;
				}

				return daysIn;
			}

		public:
			Cruise() : Tour() {
				this->daysStaying = 0;
				this->hoursSwimming = 0;
			}

			Cruise(string country, string city, string name, string food, DateTime departure, float price, int daysStaying)
				: Tour(country, city, name, food, departure, 0, price) {
				this->daysStaying = daysStaying;
				this->hoursSwimming = 0;

				map<string, int> place;
				place[country + ":" + city] = 0; //hours to get
				places.push_back(place);

				//daysIn = 0
			}

			~Cruise() {
			}

			void addPlace(string country, string city, int hoursToGet) {
				this->hoursSwimming += hoursToGet;
				map<string, int> place;
				place[country + ":" + city] = hoursToGet; //hours to get
				places.push_back(place);
				arrival = calcArrival();
				daysIn = calcDaysIn();
			}

			void delPlace(string countryCity) { //country + ":" + city
				for (auto it = places.begin(); it != places.end(); it++) { //vector
					for (auto itIN = it->begin(); itIN != it->end(); it++) { //map
						if (itIN->first == countryCity) {
							places.erase(it);
							return;
						}
					}
				}
				arrival = calcArrival();
				daysIn = calcDaysIn();

			}

			//void editPlace(string countryCity) {
			//	auto it = find_if(places.begin(), places.end(), [countryCity](map<string, int> a) {
			//		auto name = a.begin();
			//		return (countryCity == name->first);
			//		});
			//	for (auto itIN = it->begin(); itIN != it->end(); itIN++) { //map
			//		cout << "==================================" << endl;
			//		itIN->first = countryCity;
			//		cout << "==================================" << endl << endl;
			//	}
			//}

			int getDaysStaying()const { return daysStaying; }

			void setDaysStaying(int daysStaying) {
				this->daysStaying = daysStaying;
				arrival = calcArrival();
				daysIn = calcDaysIn();
			}

			void show()const override {
				Tour::show();
				cout << "----------------------" << endl;
				cout << "Days staying at one place: " << daysStaying << endl;
				cout << "Hours swimming on cruise ship: " << hoursSwimming << endl;
				cout << endl;
				DateTime tmp = departure;
				for (auto it = places.begin(); it != places.end(); it++) { //vector
					for (auto itIN = it->begin(); itIN != it->end(); itIN++) { //map

						tmp += float(itIN->second) * 60; //hours to get : ARRIVAL
						if (it == places.begin()) {
							cout << "==================================" << endl;
							cout << "Starting Point" << endl;
							cout << "==================================" << endl;
							cout << itIN->first << " | hours to get to - " << itIN->second << endl;
							cout << "Departure: " << tmp << endl;
							cout << "==================================" << endl << endl;
						}
						else if (it == --places.end()) {
							cout << "==================================" << endl;
							cout << "End Point" << endl;
							cout << "==================================" << endl;
							cout << "Arrival: " << tmp << endl;
							cout << itIN->first << " | hours to get to - " << itIN->second << endl;
							cout << "==================================" << endl << endl;
						}
						else {
							cout << "==================================" << endl;
							cout << "Arrival: " << tmp << endl;
							cout << itIN->first << " | hours to get to - " << itIN->second << endl;
							tmp += daysStaying;
							cout << "Departure: " << tmp << endl;
							cout << "==================================" << endl << endl;
						}

					}
				}
			}

			void editSelf() override {
				Tour::editSelf();
				cout << "Days staying per 1 city: "; cin >> daysStaying;

				int places;
				cout << "Number of places: "; cin >> places;
				for (int i = 0; i < places; i++)
				{
					string country;
					string city;
					int hoursToGet;
					cout << "country: "; cin >> country;
					cout << "city: "; cin >> city;
					cout << "hours To Get: "; cin >> hoursToGet;
					addPlace(country, city, hoursToGet);
				}
			}

			void unloadTour(ofstream& file) override {
				Tour::unloadTour(file);
				file << "----------------------" << endl;
				file << "Days staying at one place: " << daysStaying << endl;
				file << "Hours swimming on cruise ship: " << hoursSwimming << endl;
				file << endl;
				DateTime tmp = departure;
				for (auto it = places.begin(); it != places.end(); it++) { //vector
					for (auto itIN = it->begin(); itIN != it->end(); itIN++) { //map

						tmp += float(itIN->second) * 60; //hours to get : ARRIVAL
						if (it == places.begin()) {
							file << "==================================" << endl;
							file << "Starting Point" << endl;
							file << "==================================" << endl;
							file << itIN->first << " | hours to get to - " << itIN->second << endl;
							file << "Departure: " << tmp << endl;
							file << "==================================" << endl << endl;
						}
						else if (it == --places.end()) {
							file << "==================================" << endl;
							file << "End Point" << endl;
							file << "==================================" << endl;
							file << "Arrival: " << tmp << endl;
							file << itIN->first << " | hours to get to - " << itIN->second << endl;
							file << "==================================" << endl << endl;
						}
						else {
							file << "==================================" << endl;
							file << "Arrival: " << tmp << endl;
							file << itIN->first << " | hours to get to - " << itIN->second << endl;
							tmp += daysStaying;
							file << "Departure: " << tmp << endl;
							file << "==================================" << endl << endl;
						}

					}
				}

			}
		};

	}

}

