#pragma once 
#include<iostream>
#include<ctime>
#include <time.h>
#include <iostream>
using namespace std;

class DateTime {
private:
	//time
	int hour;
	int minutes;
	int seconds;
	char format[4]; //am/pm and utc

	//date
	int year;
	int month;
	int day;

	bool isLeapYear();
	int monthDays();
	void nextDate();
	void prevDate();

public:
	DateTime(); //current time
	DateTime(int year, int month, int day, int hour, int minutes, int seconds=0, const char* format = "utc");
	DateTime(const DateTime& obj);
	~DateTime();

	//----------------------------------------------------------------------

	void setHour(int hour);
	int getHour();
	void setMinutes(int minutes);
	int getMinutes();
	void setSeconds(int seconds);
	int getSeconds();
	void setFormat(const char* format); // !!! to update time by the new format: utc
	const char* getFormat(); //utc/am/pm

	//-----------------------------------------------------------------------

	void showDate();
	void setYear(int year);
	int getYear() const&;
	void setMonth(int month);
	int getMonth() const&;
	void setDay(int day);
	int getDay() const&;

	bool valid(); //time check
	void tickTime(); //every tick add one second
	void backTime();
	void showTime(); //show time by the format

	//--------- Comparison operators ---------
	bool operator == (const DateTime& obj)const&;
	bool operator != (const DateTime& obj)const&;
	bool operator > (const DateTime& obj)const&;
	bool operator < (const DateTime& obj)const&;
	bool operator >= (const DateTime& obj)const&;
	bool operator <= (const DateTime& obj)const&;

	//--------- Assignment operators ---------
	DateTime& operator = (const DateTime& obj);

	DateTime& operator += (int n); //days
	DateTime& operator -= (int n);
	DateTime& operator += (float n); //minutes
	DateTime& operator -= (float n);

	//--------- Arithmetic operators ---------
	DateTime operator + (int n)const;
	DateTime operator - (int n)const;

	DateTime operator + (float n)const;
	DateTime operator - (float n)const;

	DateTime& operator -- ();
	DateTime& operator -- (int n);
	DateTime& operator ++ ();
	DateTime& operator ++ (int n);

	friend ostream& operator << (ostream& os, const DateTime& t);
	friend istream& operator >> (istream& is, DateTime& t);



};
