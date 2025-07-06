#pragma once
#include "Passport.h"
#include <vector>
#include "Visa.h"
class ForeignPassport :
    public Passport
{
private:
    vector<Visa> m_visas;
public:
    ForeignPassport();
    ForeignPassport(string surname, string lastname, string name, Date birthdate, string birthplace, string receiptPerson, string registration, vector<Visa> Visas);

    void addVisa(Visa visa);
    void delVisa(int index);

    Visa getVisa(int index);

    void showForeignPassport()const;
};

