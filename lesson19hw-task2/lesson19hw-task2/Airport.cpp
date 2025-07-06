#include "Airport.h"

//размер самолета = 100

Airport::Airport()
{
	m_flight_number = rand() % 10000; //0000-9999
	strcpy_s(m_from, 50, "none");
	strcpy_s(m_to, 50, "none");
	strcpy_s(m_plane, 50, "Boing747");
	m_overall_seats = 100;
	m_occupied_seats = rand() % 100; //max - 99 from 100 seats
	m_tickets = 0;

	cout << "Flight created: " << m_flight_number << endl;
	showInfo();
}

Airport::Airport(const char* from, const char* to)
{
	m_flight_number = rand() % 10000; //0000-9999
	strcpy_s(m_from, 50, from);
	strcpy_s(m_to, 50, to);
	strcpy_s(m_plane, 50, "Boing747");
	m_overall_seats = 100;
	m_occupied_seats = rand() % 100; //max - 99 from 100 seats
	m_tickets = 0;

	cout << "Flight created: " << m_flight_number << endl;
	showInfo();
}

Airport::~Airport()
{
	cout << "Flight canceled: " << m_flight_number << endl;
}



int Airport::getFlightNumber()
{
	return m_flight_number;
}

const char* Airport::getFrom()
{
	return m_from;
}

const char* Airport::getTo()
{
	return m_to;
}

const char* Airport::getPlane()
{
	return m_plane;
}

int Airport::getOverallSeats()
{
	return m_overall_seats;
}

int Airport::getOccupiedSeats()
{
	return m_occupied_seats;
}



void Airport::setFrom(const char* from)
{
	if (strcmp(from, m_from) == 0 || strcmp(from, m_to) == 0) {
		cout << "Same location" << endl;
	}
	else {
		strcpy_s(m_from, 50, from);
	}
}

void Airport::setTo(const char* to)
{
	if (strcmp(to, m_to) == 0 || strcmp(to, m_from) == 0) {
		cout << "Error: same location" << endl;
	}
	else {
		strcpy_s(m_to, 50, to);
	}
}

void Airport::buyTickets(int amount)
{
	if (m_occupied_seats + amount > 100) {
		cout << "Error: too much tickets" << endl;
	}
	else {
		m_tickets += amount;
		m_occupied_seats += amount;
	}

}

void Airport::returnTickets()
{
	m_occupied_seats -= m_tickets;
	m_tickets = 0;
}



void Airport::showInfo()
{
	cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "| Flight number: " << m_flight_number << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "| From: " << m_from << endl;
	cout << "| To: " << m_to << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "| Plane: " << m_plane << endl;
	cout << "| Seats: " << m_occupied_seats << "/" << m_overall_seats << endl;
	cout << "| Tickets: " << m_tickets << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++" << endl << endl;
}