#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include "Time.h"

class BusSchedule
{
    vector<string> m_stations;
    Time m_start;
    Time m_end;
    int m_duration;
    int m_relax;

public:
    BusSchedule(vector<string> stations, Time start, Time end, int duration, int relax=10);

    void addStation(int number, string name);
    void delStation(int number);

    Time getStart()const;
    Time getEnd()const;
    int getDuration()const;
    int getRelax()const;

    void setStart(Time start);
    void setEnd(Time end);
    void setDuration(int duration);
    void setRelax(int relax);

    void showInfo()const;
    void printShedule()const;

};

