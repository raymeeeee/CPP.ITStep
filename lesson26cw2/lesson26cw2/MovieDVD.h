#pragma once
#include "MusicCD.h"
class MovieDVD :
    public MusicCD
{
protected:
    string m_genre;
public:
    MovieDVD();
    MovieDVD(string name, string author, int year, float price, float duration, string genre);

    void setGenre(string genre);
    float getPrice()const;
    string getGenre()const;

    void showMovieDVD()const;
};

