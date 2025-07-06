#include "ForeignPassport.h"

int main()
{
    Date b;
    b = "27.02.2008";
    //cout << b << endl;
    vector<Visa> visas;
    Visa Geramny("Germany");
    Visa UnitedKingdom("United Kingdom");
    Visa Poland("Poland");
    visas.push_back(Geramny);
    visas.push_back(UnitedKingdom);
    visas.push_back(Poland);
    ForeignPassport a("Valeriovich", "Poluektov", "Danylo", b, "Odessa", "Bob Polson", "St. Stankova 38/62", visas);
    Visa visa_tmp = a.getVisa(3);
    a.delVisa(3);
    
    a.showForeignPassport();
    cout << "=============================" << endl << endl;
    visa_tmp.showVisa();
}
