#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Book
{
protected:
	map<Date, vector<string>> book;
public:
	Book() {
		book[Date()].push_back("C++");
		book[Date()].push_back("Cinema");
		book[Date(2025,1,1)].push_back("New Year");
		book[Date(2024, 12, 24)].push_back("Christmas");
		book[Date(2024, 12, 16)].push_back("C++");	
	};
	void addEvent(Date d, string event) {
		book[d].push_back(event);
	}
	void findByDate(Date d) {
		auto item = book.find(d);
		if (item == book.end()) {
			cout << endl;
			cout << "No such date" << endl;
			cout << endl;
			return;
		}
		for (auto i : book[d]) {
			cout << endl;
			cout << "-----------------------" << endl;
			cout << item->first << endl;
			cout << "-----------------------" << endl;
			for (auto i : item->second) {
				cout << i << endl;
			}
			cout << "-----------------------" << endl;
			cout << endl;
			return;
		}
	}
	void findByEvent(string event) {
		int count = -1;
		for (auto it = book.begin(); it != book.end(); it++) {
			auto item = find(it->second.begin(), it->second.end(), event);
			
			if (item != it->second.end()) {
				cout << endl;
				cout << "-----------------------" << endl;
				cout << it->first << endl;
				cout << "-----------------------" << endl;
				for (auto i : it->second) {
					cout << i << endl;
				}
				cout << "-----------------------" << endl;
				cout << endl;
				
				count++;
			}
		}
		if (count == -1) {
			cout << endl;
			cout << "No such event" << endl;
			cout << endl;
			return;
		}
	}

	void delEvent(Date d, string event) {
		auto item = book.find(d);
		if (item != book.end()) {
			auto itEvent = find(item->second.begin(), item->second.end(), event);
			if (itEvent != item->second.end()) {
				item->second.erase(itEvent);
				cout << endl;
				cout << item->first << " " << event << endl; //date event
				cout << "ERASED" << endl;
				cout << endl;
				if (item->second.empty()) {
					cout << endl;
					cout << "\t" << item->first << endl; //date event
					cout << "\tERASED" << endl;
					cout << endl;
					book.erase(item);
				}
				return;
			}
		}
		cout << endl;
		cout << "No such Date or Event" << endl;
		cout << endl;
		return;
	}

	void showBook()const {
		for (auto node : book) {
			cout << endl;
			cout << "-----------------------" << endl;
			cout << node.first << endl;
			cout << "-----------------------" << endl;
			for (auto i : node.second) {
				cout << i << endl;
			}
			cout << "-----------------------" << endl;
			cout << endl;
		}
	}
};

