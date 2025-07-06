#pragma once
#include "User.h"
class Manager :
    public User
{
protected:
	float discount; //10-20
public: 
    Manager() : User() {
		discount = 15;
	};

    Manager(string username, string password) : User(username, password) {
		discount = 15;
    }

	float getTotal()const override { //for manager discount 15%
		float total = 0;
		for (int i = 0; i < orderedTours.size(); i++) {
			total += orderedTours[i]->getPrice() - (orderedTours[i]->getPrice()*(discount/100));
		}
		return total;
	}

	void unload(ofstream& file) override{
		file << "Manager";
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

