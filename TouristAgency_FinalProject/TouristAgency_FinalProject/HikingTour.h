#pragma once
#include "Tour.h"

namespace TourCompanyes {
	namespace Tours {
		class HikingTour :
			public Tour
		{
		protected:
			string type; //e.g.: long-distance, survival, photography
			float distance;
			string guide; //full name
		public:
			HikingTour() : Tour() {
				this->type = "type";
				this->distance = 0;
				this->guide = "guide";
			}

			HikingTour(string country, string city, string name, string food, DateTime departure, int daysIn, float price, string type, float distance, string guide)
				: Tour(country, city, name, food, departure, daysIn, price) {
				this->type = type;
				this->distance = distance;
				this->guide = guide;
			}

			string getType()const { return type; }
			float getDistance()const { return distance; }
			string getGuide()const { return guide; }

			void setType(string type) { this->type = type; }
			void setDistance(float distance) { this->distance = distance; }
			void setGuide(string guide) { this->guide = guide; }

			void show()const override {
				Tour::show();
				cout << "----------------------" << endl;
				cout << "Type: " << type << endl;
				cout << "Distance: " << distance << "km" << endl;
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
				cout << "Distance: "; cin >> distance;
				cout << "Guide: "; cin >> guide;
			}

			void unloadTour(ofstream& file) override {
				Tour::unloadTour(file);
				file << "----------------------" << endl;
				file << "Type: " << type << endl;
				file << "Distance: " << distance << "km" << endl;
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

