#include "TouristAgency.h"

int main()
{
    Tour a;
    Tour b("ParisRoad", 1200.50, "01/02/24", "France", 7, true, 600.80);

    TouristAgency agency{"SomeAgency"};

    Tour e = b;

    e.setTitle("EnglandRoad");
    
    a.setTitle("ItalyRoad");

    agency.addTour(a);
    agency.addTour(b);
    agency.addTour(e);
    agency.showInfo();
    cout << "++++++++++++++++++++++++++++++++++++++++" << endl << endl;
    agency.findTour_country("France");
    agency.findTour_country("Poland");
    cout << "++++++++++++++++++++++++++++++++++++++++" << endl << endl;
    agency.sort_passage_price();
    agency.delete_title("ItalyRoad");
    agency.delete_title("EnglandRoad");
    agency.showInfo();
}
