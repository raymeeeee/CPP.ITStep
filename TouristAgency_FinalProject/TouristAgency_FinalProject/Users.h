#pragma once
#include "Manager.h"

//#include <fstream>

class Users
{
protected:
	vector<User*> users;
public:
	Users() {
		ifstream file("info-users.txt");
		if (file.is_open()) {
			string type;
			while (!file.eof()) {
				
				getline(file, type);
				if (type == "User") {
					User* obj = new User();
					obj->load(file);
					
					users.push_back(obj);
					cout << "User added successfully" << endl;
				}
				else if (type == "Manager") {
					User* obj = new Manager();
					obj->load(file); 
					
					users.push_back(obj);
					cout << "Manager added successfully" << endl;

				}
				
			}
			file.close();
		}
	}

	~Users() {

		ofstream file("info-users.txt");
		for (int i = 0; i < users.size(); i++)
		{
			users[i]->unload(file);
		}
		file.close();



		for (int i = 0; i < users.size(); i++)
		{
			delete users[i];
		}

	}

	void add(User* user) {
		if (user != nullptr) {
			users.push_back(user);
		}
		
	}

	User* signUp() {
		string username;
		string password;
		cout << "Create your account" << endl;

		int uniqueUsername = 1;
		do
		{
			uniqueUsername = 1;
			cout << "Username: "; cin >> username;
			for (int i = 0; i < users.size(); i++)
			{
				if (username == users[i]->getUsername()) {
					uniqueUsername = 0;
					cout << "Already existing user" << endl;
					break;
				}
			}
		} while (uniqueUsername == 0);
		
		cout << "Password: "; cin >> password;
		add(new User(username, password));
		cout << "New user " << username << " have signed up" << endl;
		return users[users.size() - 1];
	}

	User* signIn() {
		string username;
		cout << "Register into your account" << endl;
		cout << "Username: "; cin >> username;

		for (int i = 0; i < users.size(); i++)
		{
			if (username == users[i]->getUsername()) {
				string password;
				cout << "Password: "; cin >> password;
				if (password == users[i]->getPassword()) {
					cout << "User " << username << " have signed in" << endl;
					return users[i];
				}
				cout << "Incorrect password" << endl;
				return nullptr;
			}
		}

		cout << "Incorrect username" << endl;
		return nullptr;
	}

};

