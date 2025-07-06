#include "TouristAgency.h"

TouristAgency::TouristAgency()
{
	strcpy_s(m_name, 50, "Undefined");
	m_sizeTours = 0;
	m_arrTours = nullptr;
}

TouristAgency::TouristAgency(const char* name)
{
	strcpy_s(m_name, 50, name);
	m_sizeTours = 0;
	m_arrTours = nullptr;
}

TouristAgency::~TouristAgency()
{
	if (m_arrTours != nullptr) {
		delete[] m_arrTours;
	}
}

void TouristAgency::setName(const char* name)
{
	if (strlen(name) >= 2) {
		strcpy_s(m_name, 50, name);
	}
}

const char* TouristAgency::getName() const
{
    return m_name;
}

void TouristAgency::addTour(Tour obj)
{
	addItemBack(m_arrTours, m_sizeTours, obj);
}

void TouristAgency::showInfo() const
{
	cout << "Name: " << m_name << endl << endl;
	if (m_sizeTours == 0) {
		cout << "Tourist Agency has no tours" << endl;
	}
	else {
		for (int i = 0; i < m_sizeTours; i++)
		{
			cout << "\tTour" << "#" << i + 1 << endl;
			m_arrTours[i].showInfo();
		}
	}
}

void TouristAgency::findTour_country(const char* country)
{
	for (int i = 0; i < m_sizeTours; i++)
	{
		if (strcmp(country, m_arrTours[i].getCountry()) == 0) {
			m_arrTours[i].showInfo();
			return;
		}
	}
	cout << "Not found" << endl << endl;
}

void TouristAgency::sort_country()
{
	sort_if<Tour>(m_arrTours, m_sizeTours,
		[](Tour left, Tour right) {return strcmp(left.getCountry(), right.getCountry()) > 0; }); //from a-z
}

void TouristAgency::sort_passage_price()
{
	sort_if<Tour>(m_arrTours, m_sizeTours,
		[](Tour left, Tour right) {return left.getPassagePrice() < right.getPassagePrice(); });
}

void TouristAgency::delete_title(const char* title)
{
	Tour* tmp = new Tour[m_sizeTours - 1];

	for (int i = 0, j = 0; i < m_sizeTours; i++)
	{
		if (strcmp(title, m_arrTours[i].getTitle()) != 0) {
			tmp[j] = m_arrTours[i];
			j++;
		}
		else {
			m_arrTours[i].showInfo();
		}
	}

	if (m_arrTours != nullptr) delete[] m_arrTours;

	m_arrTours = tmp;
	m_sizeTours--;
}
