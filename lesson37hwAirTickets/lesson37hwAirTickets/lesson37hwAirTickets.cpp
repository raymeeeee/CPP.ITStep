#include "TicketList.h"
int AirTicket::numberGlobal = 0;
int main()
{
    TicketList a;
    a.addTicket(AirTicket("Italy", "V.O", "Harlamov", Date(2025, 5, 12)));
    a.addTicket(AirTicket("Italy", "V.O", "Harlamov", Date(2025, 6, 11)));
    a.addTicket(AirTicket("Italy", "V.O", "Harlamov", Date(2025, 7, 13)));
    a.addTicket(AirTicket("France", "V.O", "Harlamov", Date(2025, 5, 10)));
    a.addTicket(AirTicket("Germany", "V.O", "Harlamov", Date(2025, 5, 9)));
    a.addTicket(AirTicket("Germany", "V.O", "Harlamov", Date(2025, 5, 19)));
    a.addTicket(AirTicket("Poland", "V.O", "Harlamov", Date(2025, 6, 1)));
    a.addTicket(AirTicket("Poland", "V.O", "Harlamov", Date(2025, 6, 7)));

    a.show();
    cout << "============================" << endl;
    a.delTicket(5);
    a.show();
    cout << "============================" << endl;
    a.findTicketByPlace("Italy");
    cout << "============================" << endl;
    cout << a.findTicketsBetweenDatesAndPlace(Date(2025, 5, 8), Date(2025, 6, 13), "Italy") << endl;
}
