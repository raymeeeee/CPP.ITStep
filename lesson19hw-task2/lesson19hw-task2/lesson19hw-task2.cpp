#include "Airport.h"
#include <ctime>

int main()
{
    srand(time(0));
	Airport* airport = nullptr;
	airport = new Airport("Kiev", "Varshava");

	cout << "Flight number: " << airport->getFlightNumber() << endl;
	cout << "From: " << airport->getFrom() << endl;
	cout << "To: " << airport->getTo() << endl;
	cout << "Plane: " << airport->getPlane() << endl;
	cout << "Overall seats: " << airport->getOverallSeats() << endl;
	cout << "Occupied seats: " << airport->getOccupiedSeats() << endl;
	cout << endl;

	char tmp[50];
	cout << "From:" << endl;
	cin >> tmp;
	airport->setFrom(tmp);
	cout << "To:" << endl;
	cin >> tmp;
	airport->setTo(tmp);

	airport->showInfo();

	int tmp2;
	cout << "Tickets:" << endl;
	cin >> tmp2;
	airport->buyTickets(tmp2);

	airport->showInfo();

	cout << "Return tickets" << endl;
	airport->returnTickets();

	airport->showInfo();

	airport->~Airport();
}
