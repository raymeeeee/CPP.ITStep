// lesson27hw1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "AudioBook.h"

int main()
{
    srand(time(0));
    Date b;
    b = "12.20.1980";
    AudioBook a("Bob", "OOP", b, "Tyler", 7657, b);
    a.showAudioBook();
}

