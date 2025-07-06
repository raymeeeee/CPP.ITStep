#include "Computer.h"
 
Computer::Computer()
{
    m_name = "undefined";
    m_frequency = 0;
    m_RAM = 0;
    m_DVDROM = false;
    m_price = 0;

}

Computer::Computer(string name, float frequency, int RAM, bool DVDROM, float price)
{
    m_name = name;
    m_frequency = frequency;
    m_RAM = RAM;
    m_DVDROM = DVDROM;
    m_price = price;
}

string Computer::getName() const
{
    return m_name;
}

float Computer::getFrequency() const
{
    return m_frequency;
}

int Computer::getRAM() const
{
    return m_RAM;
}

bool Computer::getDVDROM() const
{
    return m_DVDROM;
}

float Computer::getPrice() const
{
    return m_price;
}

void Computer::setPrice(float price)
{
    if (price >= 0) {
        m_price = price;
    }
}

void Computer::showInfo() const
{
    cout << "Name:\t\t" << m_name << endl
        << "Frequency:\t" << m_frequency << "GHz" << endl
        << "RAM:\t\t" << m_RAM << "Gb" << endl
        << "DVDROM:\t\t" << (m_DVDROM ? "Yes" : "No") << endl
        << "Price:\t\t" << m_price << "UAH" << endl << endl;
}


