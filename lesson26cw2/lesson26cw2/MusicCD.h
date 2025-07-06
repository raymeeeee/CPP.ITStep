#pragma once
#include "Item.h"
class MusicCD :
    public Item
{
protected:
    float m_duration;
public:
    MusicCD();
    MusicCD(string name, string author, int year, float price, float duration);

    void setDuration(float duration);
    float getDuration()const;

    void showMusicCD()const;
};

