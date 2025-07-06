#pragma once
#include <iostream>
#include <string>
#include <time.h>
//#include "Date.h"
//Time_.h + Date.h
#include "DateTime.h"
#include <fstream>
using namespace std;

namespace TourCompanyes {
	namespace Tours {
		class Tour
		{
		protected:

			static int counter;
			int number;
			string countryID; //3 first letters of country: e.g. Ukraine - Ukr
			string ID; // # + counter + countryID

			string country;
			string city;
			string name;
			string food; // NO - no food, BB - breakfast, HB - breakfast & supper, FB - breakfast & dinner & supper, AL - all inclusive
			DateTime departure;
			DateTime arrival;
			int daysIn;

			float price;

			//initial functions
			string calcID() {
				ID = "#";
				int length = to_string(counter).length();
				if (length < 4) {
					int zeros = 4 - length;
					for (int i = 0; i < zeros; i++)
					{
						ID += "0";
					}
				}
				ID += to_string(counter);
				ID += countryID;

				return ID;
			}

			virtual DateTime calcArrival() {
				DateTime arrival = departure + daysIn;
				return arrival;
			}

			string calcCountryID() {
				countryID = "";
				for (int i = 0; i < 3; i++)
				{
					countryID += country[i];
				}
				return countryID;
			}

		public:
			//constructors & desctructors
			Tour() {
				counter++;
				this->number = counter;
				this->country = "country";
				this->city = "city";
				this->countryID = calcCountryID();
				this->name = "name";
				this->food = "NO";
				//this->departure;
				this->daysIn = 0;

				ID = calcID();
				arrival = calcArrival();

				this->price = 0;
			}

			Tour(string country, string city, string name, string food, DateTime departure, int daysIn, float price) {
				counter++;
				this->number = counter;
				this->country = country;
				this->city = city;
				this->countryID = calcCountryID();
				this->name = name;
				this->food = food;
				this->departure = departure;
				this->daysIn = daysIn;

				ID = calcID();
				arrival = calcArrival();

				this->price = price;
			}

			virtual ~Tour() {};

			//getters
			int getNumber() { return number; }
			string getID()const { return ID; }
			string getCountry()const { return country; }
			string getCity()const { return city; }
			string getCountryID()const { return countryID; }
			string getName()const { return name; }
			string getFood()const { return food; }
			DateTime getDeparture()const { return departure; }
			int getDaysIn()const { return daysIn; }
			DateTime getArrival()const { return arrival; }
			float getPrice()const { return price; }

			//setters
			void setCountry(string country) {
				this->country = country;
				countryID = calcCountryID();
				ID = calcID();
			}
			void setCity(string city) {
				this->city = city;
			}
			void setName(string name) {
				this->name = name;
			}
			void setFood(string food) {
				this->food = food;
			}
			void setDeparture(DateTime departure) {
				this->departure = departure;
				arrival = calcArrival();
			}
			void setDaysIn(int daysIn) {
				this->daysIn = daysIn;
				arrival = calcArrival();
			}
			void setPrice(float price) { //exception incorrect value
				this->price = price;
			}

			//functions
			virtual void show()const {
				cout << "----------------------" << endl;
				cout << "ID: " << ID << endl;
				cout << "----------------------" << endl;
				cout << "Country: " << country << endl;
				cout << "City: " << city << endl;
				cout << "Name: " << name << endl;
				cout << "Food: " << food << endl;
				cout << "Departure: " << departure << endl;
				cout << "Days in: " << daysIn << endl;
				cout << "Arrival: " << arrival << endl;
				cout << "Price: " << price << " USD" << endl;
			}

			virtual void editSelf() {
				cout << "Country: "; cin >> country;
				cout << "City: "; cin >> city;
				cout << "Name: "; cin >> name;
				cout << "Food: "; cin >> food;
				cout << "Departure: "; cin >> departure;
				cout << "Days in: "; cin >> daysIn;
				cout << "Price: "; cin >> price;
			}

			virtual void unloadTour(ofstream& file) {
				file << "----------------------" << endl;
				file << "ID: " << ID << endl;
				file << "----------------------" << endl;
				file << "Country: " << country << endl;
				file << "City: " << city << endl;
				file << "Name: " << name << endl;
				file << "Food: " << food << endl;
				file << "Departure: " << departure << endl;
				file << "Days in: " << daysIn << endl;
				file << "Arrival: " << arrival << endl;
				file << "Price: " << price << " USD" << endl;
			}

		};
	}

}
