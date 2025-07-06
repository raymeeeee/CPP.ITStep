#include "Overcoat.h"

void Overcoat::addSize(int i)
{
    for (int y = 0; y < i; y++)
    {
        if (size < 7) {
            this->size++;
            this->price += 0.5;
        }
    }
}

void Overcoat::substractSize(int i)
{
    for (int y = 0; y < i; y++)
    {
        if (size > 1) {
            this->size--;
            if (price > 1) {
                this->price -= 0.5;
            }
            
        }
    }
}

bool Overcoat::operator==(const Overcoat& obj) const&
{
    return this->type == obj.type;
}

bool Overcoat::operator!=(const Overcoat& obj) const&
{
    return !(*this == obj);
}

bool Overcoat::operator>(const Overcoat& obj) const&
{

    return this->price > obj.price;
    
}

bool Overcoat::operator<(const Overcoat& obj) const&
{
    return !(*this > obj);
}

bool Overcoat::operator>=(const Overcoat& obj) const&
{
    return (*this > obj) && (*this == obj);
}

bool Overcoat::operator<=(const Overcoat& obj) const&
{
    return (*this < obj) && (*this == obj);
}

Overcoat& Overcoat::operator--()
{
    this->substractSize();
    return *this;
}

Overcoat Overcoat::operator--(int)
{
    Overcoat tmp = *this;
    this->substractSize();
    return tmp;
}

Overcoat& Overcoat::operator++()
{
    this->addSize();
    return *this;
}

Overcoat Overcoat::operator++(int)
{
    Overcoat tmp = *this;
    this->addSize();
    return tmp;
}

ostream& operator<<(ostream& os, const Overcoat& t)
{
    os << "Type: " << t.type << endl;
    os << "Size: " << t.getSize() << endl;
    os << "Price: " << t.price << "usd" << endl;
    return os;
}


istream& operator>>(istream& is, Overcoat& t)
{
    int tmp = 0;
    cout << "Type: "; is >> t.type;
    do
    {
        cout << "Size 1-7: "; cin >> tmp;
    } while (tmp > 7 || tmp < 1);
    t.size = tmp;
    cout << "Price USD: "; is >> t.price;
    return is;
}
