#include "TourCompany.h"
#include "Users.h"
using namespace TourCompanyes;
int Tour::counter = 0;

//#include <iostream>
//using namespace std;

void tourShop(TourCompany& company, Users& users) {

	cout << "Choose option: SIGN UP | SIGN IN" << endl;
	User* user = nullptr;
	do
	{
		string signOption;
		getline(cin, signOption);
		if (signOption == "SIGN UP") {
			user = users.signUp();
		}
		else if (signOption == "SIGN IN") {
			do
			{
				user = users.signIn();
			} while (user == nullptr);
		}
		else {
			cout << "Incorrect option" << endl;
		}
	} while (user == nullptr);
	

	string infoManager =
		"========================================================\n\
Options: SHOW, BUY, ADD, DEL, FIND, EDIT, SORT, HELP, EXIT\n\
========================================================\n\
To enter Personal Account type: ACC\n\
========================================================\n";
	string infoUser =
		"========================================================\n\
Options: SHOW, BUY, FIND, SORT, HELP, EXIT\n\
========================================================\n\
To enter Personal Account type: ACC\n\
========================================================\n";

	string info;
	if (typeid(*user) == typeid(Manager)) {
		info = infoManager;
	}
	else {
		info = infoUser;
	}
	cout << info << endl;

	while (true) {
		string option;
		cin >> option;
		//////////
		if (option == "EXIT") {
			user->unloadTours();
			return;
		}
		else if (option == "HELP") {
			cout << info << endl;
		}
		else if (option == "SHOW") {
			company.showTours();
		}
		else if (option == "ACC") {
			cout << "Options: SHOWACC, TOPUP" << endl;
			cin >> option;
			if (option == "TOPUP") {
				float money;
				cout << "Amount: "; cin >> money;
				
				try {
					user->add(money);
					cout << money << "USD was added to your account" << endl;
				}
				catch (InvalidAmountException* obj) {
					cout << obj->showMessage() << endl; delete obj;
				}
				
			}
			else if (option == "SHOWACC") {
				user->show();
			}
			else {
				cout << "Incorrect option" << endl;
			}
		}
		//////////
		else if (option == "BUY") {
			int number;
			cout << "Enter number of the tour: "; cin >> number;
			Tour* tour = company.getTour(number);
			if (tour != nullptr) {
				try { 
					user->withdraw(tour->getPrice());
					(*user).addTour(tour);
					cout << tour->getPrice() << "USD were taken from your account" << endl;
				}
				catch (InsufficientFundsException* obj) {
					cout << obj->showMessage() << endl; delete obj;
				}
				/*catch (InvalidAmountException* obj) {
					cout << obj->showMessage() << endl; delete obj;
				}*/
				
				//withdraw money
			}
		}
		//////////
		else if (option == "DEL" && typeid(*user) == typeid(Manager)) {

			if (company.isEmpty()) {
				cout << "Company has no tours" << endl;
			}
			else {
				int number;
				cout << "Enter number of the tour: "; cin >> number;
				company.delTour(number);
			}
		}
		//////////
		else if (option == "EDIT" && typeid(*user) == typeid(Manager)) {
			int number;
			cout << "Enter number of the tour: "; cin >> number;
			//cout << string(typeid(*tui.getTour(number)).name()) << endl;

			//cout << typeid(tui.getTour(number)).name() << endl;

			if (company.getTour(number) != nullptr) {
				company.getTour(number)->editSelf();
				cout << "Tour successfully edited" << endl;
			}

		}
		//////////
		else if (option == "FIND") {

			cout << "Find tour by: NUMBER, TYPE, PRICE, COUNTRY, CITY, DAYS" << endl;
			cin >> option;

			if (option == "NUMBER") {
				int number;
				cout << "Enter number of the tour: "; cin >> number;
				company.findTour([number](Tour* a) {
					if (a->getNumber() == number) {
						cout << "=========================================================" << endl;
						a->show();
						cout << "=========================================================" << endl;
						return true; //for find
					}
					else {
						return false;
					}
					});

			}
			else if (option == "TYPE") {

				cout << "Choose type of tour: TOUR, HIKING, HEALTH, CRUISE" << endl;
				cin >> option;
				if (option == "TOUR") {
					company.findTour([](Tour* a) {
						if (typeid(*a) == typeid(Tour)) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else if (option == "HIKING") {
					company.findTour([](Tour* a) {
						if (typeid(*a) == typeid(HikingTour)) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else if (option == "HEALTH") {
					company.findTour([](Tour* a) {
						if (typeid(*a) == typeid(HealthTour)) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else if (option == "CRUISE") {
					company.findTour([](Tour* a) {
						if (typeid(*a) == typeid(Cruise)) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else {
					cout << "Incorrect option" << endl;
				}

			}
			else if (option == "PRICE") {

				cout << "Enter type of find MAX or MIN: " << endl;
				cin >> option;
				if (option == "MAX") {
					int price;
					cout << "Enter MAX price: "; cin >> price;
					company.findTour([price](Tour* a) {
						if (a->getPrice() <= price) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else if (option == "MIN") {
					int price;
					cout << "Enter MIN price: "; cin >> price;
					company.findTour([price](Tour* a) {
						if (a->getPrice() >= price) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else {
					cout << "Incorrect option" << endl;
				}

			}
			else if (option == "COUNTRY") {
				cout << "Enter country: "; cin >> option;
				company.findTour([option](Tour* a) {
					if (a->getCountry() == option) {
						cout << "=========================================================" << endl;
						a->show();
						cout << "=========================================================" << endl;
						return true; //for find
					}
					else {
						return false;
					}
					});
			}
			else if (option == "CITY") {

				cout << "Enter city: ";

				cin.ignore();
				getline(cin, option);

				company.findTour([option](Tour* a) {
					if (a->getCity() == option) {
						cout << "=========================================================" << endl;
						a->show();
						cout << "=========================================================" << endl;
						return true; //for find
					}
					else {
						return false;
					}
					});
			}
			else if (option == "DAYS") {
				cout << "Enter type of find MAX or MIN: " << endl;
				cin >> option;
				if (option == "MAX") {
					int days;
					cout << "Enter MAX days: "; cin >> days;
					company.findTour([days](Tour* a) {
						if (a->getDaysIn() <= days) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else if (option == "MIN") {
					int days;
					cout << "Enter MIN days: "; cin >> days;
					company.findTour([days](Tour* a) {
						if (a->getDaysIn() >= days) {
							cout << "=========================================================" << endl;
							a->show();
							cout << "=========================================================" << endl;
							return true; //for find
						}
						else {
							return false;
						}
						});
				}
				else {
					cout << "Incorrect option" << endl;
				}
			}
			else {
				cout << "Incorrect option" << endl;
			}

		}
		//////////
		else if (option == "SORT") {

			cout << "Sort by: PRICE, TYPE, COUNTRY" << endl;
			cin >> option;
			if (option == "PRICE") {
				company.sortTour([](Tour* a, Tour* b) {return (a->getPrice() < b->getPrice()); });
			}
			else if (option == "TYPE") {
				company.sortTour([](Tour* a, Tour* b) {
					return (string(typeid(*a).name()) < string(typeid(*b).name()));
					});
			}
			else if (option == "COUNTRY") {
				company.sortTour([](Tour* a, Tour* b) {return (a->getCountry() < b->getCountry()); });
			}
			else {
				cout << "Incorrect option" << endl;
			}
		}
		//////////
		else if (option == "ADD" && typeid(*user) == typeid(Manager)) {

			cout << "Choose type of tour: TOUR, HIKING, HEALTH, CRUISE" << endl;
			cin >> option;
			if (option == "TOUR") {
				string country;
				string city;
				string name;
				string food;
				DateTime departure;
				int daysIn;
				float price;
				cout << "country: ";
				cin.ignore();
				getline(cin, country);
				cout << "city: ";

				getline(cin, city);
				cout << "name: "; cin >> name;
				cout << "food: "; cin >> food;
				cout << "departure: "; cin >> departure;
				cout << "daysIn: "; cin >> daysIn;
				cout << "price: "; cin >> price;
				Tour* t = new Tour(country, city, name, food, departure, daysIn, price);

				company.addTour(t);

			}
			else if (option == "HIKING") {
				string country;
				string city;
				string name;
				string food;
				DateTime departure;
				int daysIn;
				float price;
				string type;
				float distance;
				string guide;
				cout << "country: ";
				cin.ignore();
				getline(cin, country);
				cout << "city: ";
				getline(cin, city);
				cout << "name: "; cin >> name;
				cout << "food: "; cin >> food;
				cout << "departure: "; cin >> departure;
				cout << "daysIn: "; cin >> daysIn;
				cout << "price: "; cin >> price;
				cout << "type: "; cin >> type;
				cout << "distance: "; cin >> distance;
				cout << "guide: "; cin >> guide;
				Tour* t = new HikingTour(country, city, name, food, departure, daysIn, price, type, distance, guide);

				company.addTour(t);
			}
			else if (option == "HEALTH") {
				string country;
				string city;
				string name;
				string food;
				DateTime departure;
				int daysIn;
				float price;
				string type;
				string guide;
				cout << "country: ";
				cin.ignore();
				getline(cin, country);
				cout << "city: ";

				getline(cin, city);
				cout << "name: "; cin >> name;
				cout << "food: "; cin >> food;
				cout << "departure: "; cin >> departure;
				cout << "daysIn: "; cin >> daysIn;
				cout << "price: "; cin >> price;
				cout << "type: "; cin >> type;
				cout << "guide: "; cin >> guide;
				Tour* t = new HealthTour(country, city, name, food, departure, daysIn, price, type, guide);

				company.addTour(t);
			}
			else if (option == "CRUISE") {
				string country;
				string city;
				string name;
				string food;
				DateTime departure;
				int daysIn;
				float price;
				int daysStaying;
				cout << "country: ";
				cin.ignore();
				getline(cin, country);
				cout << "city: ";

				getline(cin, city);
				cout << "name: "; cin >> name;
				cout << "food: "; cin >> food;
				cout << "departure: "; cin >> departure;
				cout << "daysIn: "; cin >> daysIn;
				cout << "price: "; cin >> price;
				cout << "days Staying per 1 city: "; cin >> daysStaying;
				Tour* t = new Cruise(country, city, name, food, departure, price, daysStaying);

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
					Cruise* s = dynamic_cast<Cruise*>(t);
					s->addPlace(country, city, hoursToGet);
				}

				company.addTour(t);
			}
			else {
				cout << "Incorrect option" << endl;
			}
		}
		//////////
		else {
			cout << "Incorrect option" << endl;
		}
	}
}



int main()
{

	//HikingTour a("Ukraine", "Karpaty", "Zvilnenya", "AL", DateTime(2025, 8, 23, 12, 30), 14, 1000, "Long-distance", 50, "Zmishchenko O.V.");
	//
	//a.setDaysIn(20);
	//a.setDeparture(DateTime(2025, 7, 23, 17, 30));
	////a.setCountry("United Kingdom");
	//a.setGuide("");
	//a.getCountry();
	//cout << a.getNumber() << endl;
	//a.show();

	/*Cruise b("USA", "New York", "AllBlue", "AL", DateTime(2025, 8, 23, 12, 30), 3000, 3);

	b.setCountry("United Kingdom");
	b.setCity("London");
	b.addPlace("Brazil", "Sao-Louis", 10);
	b.addPlace("Urugway", "Montevideo", 8);
	b.setDaysStaying(2);

	b.show(); */

	/*HealthTour c("Ukraine", "Zakarpatya", "LeisureTour", "AL", DateTime(2025, 8, 12, 12, 30), 14, 1250, "Relaxation", "");

	c.setCountry("Poland");
	c.setCity("Poznan");
	c.show();*/

	/*DateTime date1(2025, 10, 12, 12,30);
	date1 -= float(60*10);
	cout << date1 << endl;*/

	TourCompany tourcompany("tui");
	tourcompany.addTour(new Tour("Ukraine", "Odessa", "LeisureTour", "AL", DateTime(2025, 8, 12, 12, 30), 14, 850));
	
	tourcompany.addTour(new HealthTour("Ukraine", "Zakarpatya", "LeisureTour", "AL", DateTime(2025, 8, 12, 12, 30), 14, 1250, "Relaxation", ""));
	tourcompany.addTour(new HealthTour("Poland", "Poznan", "Ozdorovlenya", "BB", DateTime(2025, 8, 12, 12, 30), 14, 1250, "Relaxation", ""));
	tourcompany.addTour(new HealthTour("Iceland", "Reykyavik", "HOTLEISURE", "AL", DateTime(2025, 8, 12, 12, 30), 14, 1250, "Hot-springs", ""));
	tourcompany.addTour(new Tour("Ukraine", "Donetsk", "LeisureTour", "AL", DateTime(2025, 8, 12, 12, 30), 14, 600));
	tourcompany.addTour(new Cruise("USA", "New York", "AllBlue", "AL", DateTime(2025, 8, 23, 12, 30), 3000, 3));
	tourcompany.addTour(new HikingTour("Ukraine", "Karpaty", "Zvilnenya", "AL", DateTime(2025, 8, 23, 12, 30), 14, 1000, "Long-distance", 50, "Zmishchenko O.V."));

	
	Cruise* s = dynamic_cast<Cruise*>(tourcompany.getTour(6)); //new Cruise("USA", "New York", "AllBlue", "AL", DateTime(2025, 8, 23, 12, 30), 3000, 3)
	s->addPlace("Brazil", "Sao-Louis", 10);
	s->addPlace("Urugway", "Montevideo", 20);
	
	/*if (typeid(*item) == typeid(Tour)) {
		item->show();
	}
	else if (typeid(*item) == typeid(HealthTour)) {
		HealthTour* s = dynamic_cast<HealthTour*>(item);
		item->show();
	}
	else if (typeid(*item) == typeid(HikingTour)) {
		HikingTour* s = dynamic_cast<HikingTour*>(item);
		item->show();
	}
	else if (typeid(*item) == typeid(Cruise)) {
		
	}*/
	/*a.addTour(tui.getTour(1));
	a.addTour(tui.getTour(2));
	a.addTour(tui.getTour(10));
	a.show();*/

	//tui.showTours();

	Users users;
	//users.add(new User("Alex", "123"));
	//users.add(new User("Michael", "321"));
	//users.add(new Manager("rei", "111"));

	tourShop(tourcompany, users);

	/*for (int i = 0; i < users.size(); i++)
	{
		delete users[i];
	}*/

}


