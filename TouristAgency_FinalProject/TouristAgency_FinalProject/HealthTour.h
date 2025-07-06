#pragma once
#include "Tour.h"
namespace TourCompanyes {
	namespace Tours {
		class HealthTour :
			public Tour
		{
		protected:
			string type; //e.g.: swimming, running, relaxation, hot springs 
			string guide; //fullname
		public:
			HealthTour() : Tour() {
				this->type = "type";
				this->guide = "guide";
			}

			HealthTour(string country, string city, string name, string food, DateTime departure, int daysIn, float price, string type, string guide)
				: Tour(country, city, name, food, departure, daysIn, price) {
				this->type = type;
				this->guide = guide;
			}

			string getType()const { return type; }
			string getGuide()const { return guide; }

			void setType(string type) { this->type = type; }
			void setGuide(string guide) { this->guide = guide; }

			void show()const override {
				Tour::show();
				cout << "----------------------" << endl;
				cout << "Type: " << type << endl;
				if (guide != "") {
					cout << "Guide: " << guide << endl;
				}
				else {
					cout << "Guide: Without guide" << endl;
				}
			}

			void editSelf() override {
				Tour::editSelf();
				cout << "Type: "; cin >> type;
				cout << "Guide: "; cin >> guide;
			}

			void unloadTour(ofstream& file) override {
				Tour::unloadTour(file);
				file << "----------------------" << endl;
				file << "Type: " << type << endl;
				if (guide != "") {
					file << "Guide: " << guide << endl;
				}
				else {
					file << "Guide: Without guide" << endl;
				}

			}
		};



	}

}

