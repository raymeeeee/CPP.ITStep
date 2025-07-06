#pragma once
#include "ArrayTemplate 4.h"
#include "Tour.h"


class TouristAgency
{
	char m_name[50];
	int m_sizeTours;
	Tour* m_arrTours;

public:

	TouristAgency();
	TouristAgency(const char* name);
	~TouristAgency();

	void setName(const char* name);

	const char* getName()const;

	void addTour(Tour obj);

	void showInfo()const;

	void findTour_country(const char* country);
	void sort_country();
	void sort_passage_price();
	void delete_title(const char* title);

};

