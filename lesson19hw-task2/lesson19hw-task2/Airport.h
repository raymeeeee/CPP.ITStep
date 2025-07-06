#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Airport{
	int m_flight_number; //
	char m_from[50]; 
	char m_to[50];
	char m_plane[50]; //
	int m_overall_seats; //
	int m_occupied_seats; //
	int m_tickets;

public:

	Airport();
	Airport(const char* from, const char* to);
	~Airport();

	int getFlightNumber();
	const char* getFrom();
	const char* getTo();
	const char* getPlane();
	int getOverallSeats();
	int getOccupiedSeats();

	void setFrom(const char* from);
	void setTo(const char* to);

	void buyTickets(int amount);
	void returnTickets();

	void showInfo();

};


