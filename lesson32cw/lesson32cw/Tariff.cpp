#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    //if (name.empty()) throw new NameException("Name is empty", name);
    //if (name.find("XXX") != -1) throw new NameException("Name is blocked", name);
    setName(name);
}

void Tariff::setName(std::string name)
{
    if (name.empty()) throw new NameException("Name is empty", name);
    if (name.find("XXX") != -1) throw new NameException("Name is blocked", name);
    this->name = name;
}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}
