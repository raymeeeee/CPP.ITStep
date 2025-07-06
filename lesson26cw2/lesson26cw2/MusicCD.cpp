#include "MusicCD.h"

MusicCD::MusicCD()
{
    m_duration = 0;
}

MusicCD::MusicCD(string name, string author, int year, float price, float duration)
    : Item(name, author, year, price)
{
    m_duration = duration;
}

void MusicCD::setDuration(float duration)
{
    m_duration = duration;
}

float MusicCD::getDuration() const
{
    return m_duration;
}

void MusicCD::showMusicCD() const
{
    showItem();
    cout << "Duration: " << m_duration << endl;
}
