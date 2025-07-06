#pragma once
#include "AirTicket.h"
#include <algorithm>
#include <set>

class TicketList
{
protected:
	set<AirTicket> list;
public:
	TicketList() {};

	void addTicket(AirTicket ticket) {
		list.insert(ticket);
	}

	void findTicketByPlace(string place) {
		set<AirTicket>::iterator p = list.begin();
		while (p != list.end()) {
			if (p->getPlace() == place) {
				p->show();
			}
			p++;
		}
	}

	int findTicketsBetweenDatesAndPlace(Date d1, Date d2, string place) {
		set<AirTicket>::iterator p = list.begin();
		int count = 0;
		while (p != list.end()) {
			if (p->getPlace() == place && p->getDate() > d1 && p->getDate() < d2) {
				//p->show();
				count++;
			}
			p++;
		}
		return count;
	}

	void delTicket(int number) {
		auto item = find_if(list.begin(), list.end(), [number](const AirTicket a) {
			return (a.getNumber() == number);
			});
		if (item == list.end()) {
			cout << "No such ticket" << endl;
			return;
		}
		else {
			list.erase(item);
		}
	}

	void show()const {
		set<AirTicket>::iterator p = list.begin();
		while (p != list.end()) {
			p->show();
			p++;
		}
	}
};

