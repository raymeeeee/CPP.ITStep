#include "Time.h"	
#include <ctime>

Time::Time()
{
	struct tm* timeLocal = new tm;
	time_t tt = time(NULL);

	localtime_s(timeLocal, &tt);
	m_hours = timeLocal->tm_hour;
	m_minutes = timeLocal->tm_min;
	m_seconds = timeLocal->tm_sec;
	m_format = true; //default utc
}

Time::Time(int hours, int minutes, int seconds, bool format)
{

	m_hours = hours;
	m_minutes = minutes;
	m_seconds = seconds;
	m_format = format;

}

void Time::setHours(int hours)
{
	if (hours >= 0 && hours <= 23) {
		m_hours = hours;
	}
	
}

void Time::setMinutes(int minutes)
{
	if (minutes >= 0 && minutes <= 59) {
		m_hours = minutes;
	}
}

void Time::setSeconds(int seconds)
{
	if (seconds >= 0 && seconds <= 59) {
		m_hours = seconds;
	}
}

void Time::setFormat(bool format)
{
	m_format = format;
}

int Time::getHours() const
{
	return m_hours;
}

int Time::getMinutes() const
{
	return m_minutes;
}

int Time::getSeconds() const
{
	return m_seconds;
}

bool Time::getFormat() const
{
	return m_format;
}

bool Time::valid() const
{
	return m_hours >= 0 && m_hours <= 23 && m_minutes >= 0 && m_minutes <= 59 && m_seconds >= 0 && m_seconds <= 59; // 59? or 60?
}

void Time::tickTime()
{
	if (m_seconds < 59) {
		m_seconds++;
	}
	else if (m_seconds == 59) {
		m_seconds = 0;
		if (m_minutes < 59) {
			m_minutes++;
		}
		else if (m_minutes == 59) {
			m_hours++;
			m_minutes = 0;
			if (m_hours == 24) {
				m_hours = 0;
			}
		}
	}
}

void Time::untickTime()
{
	if (m_seconds > 0) {
		m_seconds--;
	}
	else if (m_seconds == 0) {
		m_seconds = 59;
		if (m_minutes > 0) {
			m_minutes--;
		}
		else if (m_minutes == 0) {
			m_minutes = 59;
			if (m_hours > 0) {
				m_hours--;;
			}
			else if (m_hours == 0) {
				m_hours = 23;
			}
		}
	}
}

void Time::showTime() const
{
	if (m_format == true) { //utc
		cout << m_hours << ":" << m_minutes << ":" << m_seconds << " UTC";
	}
	else { //am/pm
		cout << (m_hours <= 12 ? m_hours : m_hours-12) << ":" << m_minutes << ":" << m_seconds << (m_hours <= 12 ? " AM" : " PM");
	}
}

Time& Time::operator--()
{
	this->untickTime();
	return *this;
}

Time Time::operator--(int)
{
	Time tmp = *this;
	this->untickTime();
	return tmp;
}

Time& Time::operator++()
{
	this->tickTime();
	return *this;
}

Time Time::operator++(int)
{
	Time tmp = *this;
	this->tickTime();
	return tmp;
}

bool Time::operator==(const Time& obj) const&
{
	return this->m_hours == obj.m_hours && this->m_minutes == obj.m_minutes && this->m_seconds == obj.m_seconds;
}

bool Time::operator!=(const Time& obj) const&
{
	return !(*this == obj);
}

bool Time::operator>(const Time& obj) const&
{
	if (this->m_hours > obj.m_hours) return true;
	else if (this->m_hours == obj.m_hours && this->m_minutes > obj.m_minutes) return true;
	else if (this->m_hours == obj.m_hours && this->m_minutes == obj.m_minutes && this->m_seconds > obj.m_seconds) return true;
	else return false;
}

bool Time::operator<(const Time& obj) const&
{
	return !(*this > obj) && (*this != obj);
}

bool Time::operator>=(const Time& obj) const&
{
	return *this > obj || *this == obj;
}

bool Time::operator<=(const Time& obj) const&
{
	return *this < obj || *this == obj;
}

Time& Time::operator+=(int s)
{
	for (int i = 0; i < s; i++)
	{
		(*this)++;
	}return *this;
}

Time& Time::operator-=(int s)
{
	for (int i = 0; i < s; i++)
	{
		(*this)--;
	}return *this;
}

Time& Time::operator+=(float m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			(*this)++;
		}
	}return *this;
}

Time& Time::operator-=(float m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			(*this)--;
		}
	}return *this;
}

Time& Time::operator+=(double h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int n = 0; n < 60; n++)
			{
				(*this)++;
			}
		}
	}return *this;
}

Time& Time::operator-=(double h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int n = 0; n < 60; n++)
			{
				(*this)--;
			}
		}
	}return *this;
}

Time Time::operator+(int s) const&
{
	return s + *this;
}

Time Time::operator-(int s) const&
{
	return s - *this;
}

Time Time::operator+(float m) const&
{
	return m + *this;
}

Time Time::operator-(float m) const&
{
	return m - *this;
}

Time Time::operator+(double h) const&
{
	return h + *this;
}

Time Time::operator-(double h) const&
{
	return h - *this;
}

Time operator+(int s, const Time& a)
{
	Time tmp = a;
	tmp += s;
	return tmp;
}

Time operator-(int s, const Time& a)
{
	Time tmp = a;
	tmp -= s;
	return tmp;
}

Time operator+(float m, const Time& a)
{
	Time tmp = a;
	tmp += m;
	return tmp;
}

Time operator-(float m, const Time& a)
{
	Time tmp = a;
	tmp -= m;
	return tmp;
}

Time operator+(double h, const Time& a)
{
	Time tmp = a;
	tmp += h;
	return tmp;
}

Time operator-(double h, const Time& a)
{
	Time tmp = a;
	tmp -= h;
	return tmp;
}

ostream& operator<<(ostream& os, const Time& t)
{

	if (t.m_format == true) { //utc
		os << t.m_hours << ":" << t.m_minutes << ":" << t.m_seconds << " UTC";
	}
	else { //am/pm
		os << (t.m_hours <= 12 ? t.m_hours : t.m_hours - 12) << ":" << t.m_minutes << ":" << t.m_seconds << (t.m_hours <= 12 ? " AM" : " PM");
	};
	return os;
}

istream& operator>>(istream& is, Time& t)
{
	do {
		cout << "hh mm ss:\n";
		is >> t.m_hours >> t.m_minutes >> t.m_seconds;
	} while (!t.valid());

	return is;
}
