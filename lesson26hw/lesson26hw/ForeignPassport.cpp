#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
   
}

ForeignPassport::ForeignPassport(string surname, string lastname, string name, Date birthdate, string birthplace, string receiptPerson, string registration, vector<Visa> Visas) : Passport(surname, lastname,  name, birthdate, birthplace, receiptPerson, registration)
{
    m_visas = Visas;
}

void ForeignPassport::addVisa(Visa visa)
{
    m_visas.push_back(visa);
}

void ForeignPassport::delVisa(int index)
{
    if (index >= 0 || index < m_visas.size()) {
        m_visas.erase(m_visas.begin() + index-1);
    }
}

Visa ForeignPassport::getVisa(int index)
{
    if (index >= 0 || index < m_visas.size()) {
        return m_visas[index - 1];
    }
}

void ForeignPassport::showForeignPassport() const
{
    this->showPassport();
    cout << endl << "\tVisas: " << endl;
    for (int i = 0; i < m_visas.size(); i++)
    {
        m_visas[i].showVisa();
        cout << endl;
    }
}
