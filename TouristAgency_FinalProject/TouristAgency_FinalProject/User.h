#pragma once

#include <vector>
#include <fstream>
#include "HikingTour.h"
#include "Cruise.h"
#include "HealthTour.h"
#include "UserExceptions.h"

using namespace TourCompanyes::Tours;

class User
{
protected:

	string username;
	string password;
	vector<Tour*> orderedTours;
	float balance;

public:
	User() {
		balance = 0;
		username = "username";
		password = "password";
	}

	User(string username, string password) { // +Passport p
		this->balance = 0;
		this->username = username;
		this->password = password;
	}

	~User() {
		for (int i = 0; i < orderedTours.size(); i++)
		{
			delete orderedTours[i];
		}
	}



	string getUsername()const { return username; }
	string getPassword()const { return password; }

	void addTour(Tour* tour) {
		if (tour != nullptr) {
			orderedTours.push_back(tour);
			cout << "Tour successfully added" << endl;
			return;
		}
	}

	void delTour(int number) {
		auto it = find_if(orderedTours.begin(), orderedTours.end(),
			[number](TourCompanyes::Tours::Tour* a) {return (number == a->getNumber()); });

		if (it != orderedTours.end()) {
			orderedTours.erase(it);
			cout << "Tour successfully deleted" << endl;
		}
		else {
			cout << "No such tour" << endl;
		}

	}

	float getBalance()const { return balance; }
	void add(float money) { //exception for money
		if (money <= 0) throw new InvalidAmountException("Incorrect value", money);
		balance += money;
	}
	void withdraw(float money) { //exception for money?

		if (balance < money) throw new InsufficientFundsException("Insufficient funds", balance);
		if (money <= 0) throw new InvalidAmountException("Incorrect value", money);
		balance -= money;
	}

	virtual float getTotal()const { //for manager discount
		float total = 0;
		for (int i = 0; i < orderedTours.size(); i++) {
			total += orderedTours[i]->getPrice();
		}
		return total;
	}

	void showTours()const {
		for (int i = 0; i < orderedTours.size(); i++)
		{
			cout << "=========================================================" << endl;
			if (typeid(*orderedTours[i]) == typeid(Tour)) {
				cout << "------Tour------" << endl;
			}
			else if (typeid(*orderedTours[i]) == typeid(HealthTour)) {
				cout << "------HealthTour------" << endl;
			}
			else if (typeid(*orderedTours[i]) == typeid(HikingTour)) {
				cout << "------HikingTour------" << endl;
			}
			else if (typeid(*orderedTours[i]) == typeid(Cruise)) {
				cout << "------Cruise------" << endl;
			}
			orderedTours[i]->show();

		}
		cout << "=========================================================" << endl;
	}

	void getPaymnet()const {

		//p.show();

		showTours();
		cout << "TO PAYMENT: " << getTotal() << "USD" << endl;
	}
	void show()const {

		//p.show();
		cout << "Username: " << username << endl;
		cout << "Balance: " << balance << "USD" << endl;
	}

	virtual void load(ifstream& file) {
		getline(file, username);
		getline(file, password);
		
		file >> balance;
		
		//ordered tours empty
	}

	virtual void unloadTours() {
		ofstream file("boughted-tours.txt");
		for (int i = 0; i < orderedTours.size(); i++)
		{
			orderedTours[i]->unloadTour(file);
		}

		
	}

	virtual void unload(ofstream& file) {
		file << "User";
		file << "\n";
		file << username;
		file << "\n";
		file << password;
		file << "\n";
		file << balance;
		file << "\n\n";

		//ordered tours empty
	}
	
};

