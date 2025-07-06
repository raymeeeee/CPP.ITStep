#pragma once
#include "Violation.h"
#include <vector>
#include <map>

class ViolationDatabase
{
protected:
	map<string, vector<Violation>> database; //carNumber + violations
public:
	ViolationDatabase() {};

	void addViolation(string number, Violation violation) {
		database[number].push_back(violation);
	}

	void findCarViolations(string number) {
		for (auto node : database) {
			if (node.first == number) {
				cout << "==============================" << endl;
				cout << "Car number: " << node.first << endl;
				cout << "------------------------------" << endl;
				for (auto i : node.second) {
					i.show();
				}
				cout << "==============================" << endl;
				return;
			}
		}
		cout << "No such car" << endl;
	}

	float findTotalPaymentOfCar(string number) {
		float total = 0;
		for (auto node : database) {
			if (node.first == number) {
				for (auto i : node.second) {
					total += i.getPayment();
				}
				return total;
			}
		}
		cout << "No such car" << endl;
		return -1;
	}

	void findBetweenTimestamps(Time_ t1, Time_ t2) {
		for (auto node : database) {
			for (auto i : node.second) {
				if (i.getTime() > t1 && i.getTime() < t2) {
					cout << "==============================" << endl;
					cout << "Car number: " << node.first << endl;
					cout << "------------------------------" << endl;
					i.show();
					cout << "==============================" << endl;
				}
			}
		}
	}

	float payViolation(string number, float& money) {
		for (auto& node : database) {
			if (node.first == number) {
				//не уверен стоит ли удалять правонарушения из базы данных, сделал потому что это сложнее
				int countZero = 0;
				//оплата
				for (auto i = node.second.begin(); i != node.second.end(); i++) {
					if (money - i->getPayment() >= 0) {
						money -= i->getPayment();
						i->setPayment(0);
					}
					else {
						i->setPayment(i->getPayment()-money);
						money = 0;
					}

					if (i->getPayment() == 0) {
						countZero++;
					}
				}
				//удаление оплаченных
				while (countZero != 0) {
					node.second.erase(find_if(node.second.begin(), node.second.end(), [](Violation a) {return (a.getPayment() == 0); }));
					countZero--;
				}
				//удаление машины если всё оплачено
				if (node.second.empty()) {
					database.erase(node.first);
				}

				return money;
			}
			
		}
	}

	void show()const {
		for (auto node : database) {
			cout << "==============================" << endl;
			cout << "Car number: " << node.first << endl;
			cout << "------------------------------" << endl;
			for (auto i : node.second) {
				i.show();
			}
			cout << "==============================" << endl;
		}
	}
};

