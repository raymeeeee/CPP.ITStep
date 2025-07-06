#include "MovieDVD.h"

MovieDVD::MovieDVD()
{
    m_genre = "undefined";
}

MovieDVD::MovieDVD(string name, string author, int year, float price, float duration, string genre)
    : MusicCD(name, author, year, price, duration)
{
    m_genre = genre;
}

void MovieDVD::setGenre(string genre)
{
    m_genre = genre;
}

float MovieDVD::getPrice() const
{
    if (m_genre == "Comedy") {
        return m_price * 0.9;
    }
    else if (m_genre == "Drama") {
        return m_price * 0.85;
    }
    else if (m_genre == "Serial") {
        return m_price * 0.80;
    }
    else {
        return m_price;
    }
}

string MovieDVD::getGenre() const
{
    return m_genre;
}

void MovieDVD::showMovieDVD() const
{
    showMusicCD();
    cout << "Genre: " << m_genre << endl;
}
