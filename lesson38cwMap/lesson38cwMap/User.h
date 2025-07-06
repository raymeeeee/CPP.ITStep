#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class User
{
private:
	string password;
protected:
	string username;
public:
	bool logged;
	User(string username, string password) {
		this->username = username;
		this->password = password;
		logged = true;
	}
	void show()const {
		cout << "Username: " << username << endl;
		//cout << "Password: " << password << endl;
	}
};

