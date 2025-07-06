#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
	int m_hours;
	int m_minutes;
	int m_seconds;
	bool m_format;// true = utc (24-hours),    false = am/pm (12-hours), 

public:
	Time(); // Current local time
	Time(int hours, int minutes, int seconds = 0, bool format = true);
	//Time(const Time& obj); //??
	//Time& operator = (const Time& obj); //??
	//~Time(); //??

	void setHours(int hours);
	int getHours()const;
	void setMinutes(int minutes);
	int getMinutes()const;
	void setSeconds(int seconds);
	int getSeconds()const;
	void setFormat(bool format);
	bool getFormat()const;

	bool valid()const; //time check
	void tickTime(); //every tick add one second
	void untickTime(); //every tick remove one second
	void showTime()const; //show time by the format

	Time& operator --(); //previous minute
	Time operator --(int); //previous minute
	Time& operator ++(); //next minute
	Time operator ++(int); //next minute

	//--------- Comparison operators ---------
	bool operator == (const Time& obj)const&;
	bool operator != (const Time& obj)const&;
	bool operator > (const Time& obj)const&;
	bool operator < (const Time& obj)const&;
	bool operator >= (const Time& obj)const&;
	bool operator <= (const Time& obj)const&;

	//--------- Assignment operators ---------	
	Time& operator += (int s);		// add seconds
	Time& operator -= (int s);
	Time& operator += (float m);	// add minutes
	Time& operator -= (float m);
	Time& operator += (double h);	// add hours
	Time& operator -= (double h);

	//--------- Arithmetic operators ---------
	Time operator + (int s)const&;	// add seconds
	Time operator - (int s)const&;
	friend Time operator + (int s, const Time& a);
	friend Time operator - (int s, const Time& a);

	Time operator + (float m)const&; // add minutes
	Time operator - (float m)const&;
	friend Time operator + (float m, const Time& a);
	friend Time operator - (float m, const Time& a);

	Time operator + (double h)const&; // add hours
	Time operator - (double h)const&;
	friend Time operator + (double h, const Time& a);
	friend Time operator - (double h, const Time& a);


	//--------- Iostream operators ---------
	friend ostream& operator << (ostream& os, const Time& t);
	friend istream& operator >> (istream& is, Time& t);
};


