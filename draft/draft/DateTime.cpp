#include "DateTime.h"

bool DateTime::isLeapYear()
{
    if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
        return true;
    else
        return false;
}

int DateTime::monthDays()
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 2)
        return isLeapYear() ? 29 : 28;
    else if
        (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return -1;
}

void DateTime::nextDate()
{
    if (day == 31 && month == 12) {
        day = 1;
        month = 1;
        year++;
    }
    else if (day == monthDays()) {
        day = 1;
        month++;
    }
    else
        day++;
}

void DateTime::prevDate()
{
    if (day == 1 && month == 1) {
        day = 31;
        month = 12;
        year--;
    }
    else if (day == 1) {
        month--;
        day = monthDays();
    }
    else
        day--;
}

DateTime::DateTime()
{
    tm* obj = new tm;
    time_t now = time(NULL);
    localtime_s(obj, &now);
    this->day = obj->tm_mday;
    this->month = obj->tm_mon + 1;
    this->year = obj->tm_year + 1900;

    struct tm* tim = new tm;
    time_t tt = time(NULL);
    localtime_s(tim, &tt);
    strcpy_s(this->format, "utc");
    this->hour = tim->tm_hour;
    this->minutes = tim->tm_min;
    this->seconds = tim->tm_sec;
}

DateTime::DateTime(int year, int month, int day, int hour, int minutes, int seconds, const char* format)
{
    this->year = year;
    this->month = month;
    this->day = day;
    strcpy_s(this->format, format);
    this->hour = hour;
    this->minutes = minutes;
    this->seconds = seconds;
    if (!valid())
    {
        this->year = 1900;
        this->month = 1;
        this->day = 1;
        this->hour = 0;
        this->minutes = 0;
        this->seconds = 0;
    }

}

DateTime::DateTime(const DateTime& obj)
{
    this->day = obj.day;
    this->month = obj.month;
    this->year = obj.year;

    this->hour = obj.hour;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    strcpy_s(this->format, obj.format);
}

DateTime::~DateTime()
{
}

void DateTime::setHour(int hour)
{
    if (strcmp(format, "utc") == 0) {
        if (hour > 0 && hour < 24) this->hour = hour;
    }
    else {
        if (hour < 12) {
            this->hour = hour;
            strcpy_s(this->format, "am");
        }
        else {
            this->hour = hour - 12;
            strcpy_s(this->format, "pm");
        }
    }
}

int DateTime::getHour()
{
    return this->hour;
}

void DateTime::setMinutes(int minutes)
{
    if (minutes >= 0 && minutes < 60) this->minutes = minutes;
}

int DateTime::getMinutes()
{
    return this->minutes;
}

void DateTime::setSeconds(int seconds)
{
    if (seconds >= 0 && seconds < 60) this->seconds = seconds;
}

int DateTime::getSeconds()
{
    return this->seconds;
}

void DateTime::setFormat(const char* format)
{
    if (strcmp(format, "utc") == 0) {
        if (strcmp(this->format, "pm") == 0) this->hour += 12;
        strcpy_s(this->format, format);
    }
    else if (strcmp(format, "am") == 0 || strcmp(format, "pm") == 0) {
        strcpy_s(this->format, format);
        if (this->hour > 12) this->hour -= 12;
    }
}

const char* DateTime::getFormat()
{
    return this->format;
}

void DateTime::showDate()
{
    cout << this->year << "-" << this->month / 10 << this->month % 10
        << "-" << this->day / 10 << this->day % 10 << endl;
}

void DateTime::setYear(int year)
{
    this->year = year;
}

int DateTime::getYear() const&
{
    return year;
}

void DateTime::setMonth(int month)
{
    if (month >= 1 && month <= 12)
        this->month = month;
}

int DateTime::getMonth() const&
{
    return this->month;
}

void DateTime::setDay(int day)
{
    if (day >= 1 && day <= monthDays())
        this->day = day;
}

int DateTime::getDay() const&
{
    return this->day;
}

bool DateTime::valid()
{
    if (year > 1900 && year < 9999 && month >= 1 && month <= 12 && day >= 1 && day <= monthDays()) {
        if (strcmp(this->format, "utc") == 0) {
            if (this->hour > 0 && this->hour < 24 && this->minutes >= 0 && this->minutes < 60 && this->seconds >= 0 && this->seconds < 60) return true;
        }
        else if (strcmp(this->format, "am") == 0 || strcmp(this->format, "pm") == 0) {
            if (this->hour > 0 && this->hour < 12 && this->minutes >= 0 && this->minutes < 60 && this->seconds >= 0 && this->seconds < 60) return true;
        }
        else {
            return false;
        }
    }
    else { 
        return false;
    }
}

void DateTime::tickTime()
{
    this->seconds++;
    if (this->seconds >= 60) {
        this->minutes++;
        this->seconds = 0;
    }
    if (this->minutes >= 60) {
        this->hour++;
        this->minutes = 0;
    }
    if (this->hour > 24 && strcmp(this->format, "utc") == 0) this->hour = 1;
    else if (this->hour > 12 && strcmp(this->format, "am") == 0 || this->hour >= 12 && strcmp(this->format, "pm") == 0) this->hour = 1;
}

void DateTime::backTime()
{
    this->seconds--;
    if (this->seconds < 0) {
        minutes--;
        seconds = 59;
    }
    else if (this->minutes < 0) {
        hour--;
        minutes = 59;
    }
    else if (this->hour < 1 && strcmp(this->format, "utc") == 0) {
        this->hour = 24;
    }
    else {
        this->hour = 12;
    }
}

void DateTime::showTime()
{
    if (strcmp(this->format, "utc") == 0) cout << this->hour / 10 << this->hour % 10 << ":" << this->minutes / 10 << this->minutes % 10 << endl;
    else if (strcmp(this->format, "am") == 0) cout << this->hour / 10 << this->hour % 10 << " AM " << this->minutes / 10 << this->minutes % 10 << endl;
    else if (strcmp(this->format, "pm") == 0) cout << this->hour / 10 << this->hour % 10 << " PM " << this->minutes / 10 << this->minutes % 10 << endl;
    cout << "Seconds: " << this->seconds / 10 << this->seconds % 10 << endl; //I printed it also for myselve
}

bool DateTime::operator==(const DateTime& obj) const&
{
    if (this->year == obj.year && this->month == obj.month && this->day == obj.day) {
        if (this->hour == obj.hour && this->minutes == obj.minutes && this->seconds == obj.seconds && strcmp(this->format, obj.format) == 0) return true;
        else if (strcmp(this->format, "utc") == 0 && strcmp(obj.format, "pm") == 0) {
            if (this->hour == obj.hour + 12 && this->minutes == obj.minutes && this->seconds == obj.seconds) return true;
        }
        else if (strcmp(this->format, "pm") == 0 && strcmp(obj.format, "utc") == 0) {
            if (this->hour + 12 == obj.hour && this->minutes == obj.minutes && this->seconds == obj.seconds) return true;
        }
        else {
            return false;
        }
    }
    return false;
}

bool DateTime::operator!=(const DateTime& obj) const&
{
    return !(*this == obj);
}

bool DateTime::operator>(const DateTime& obj) const&
{
    if (this->year == obj.year && this->month == obj.month && this->day == obj.day) {
        if (strcmp(this->format, obj.format) == 0 && strcmp(this->format, "utc") == 0) {
            if (this->hour > obj.hour) return true;
            else if (this->hour == obj.hour && this->minutes > obj.minutes) return true;
            else if (this->hour == obj.hour && this->minutes == obj.minutes && this->seconds > obj.seconds) return true;
            else return false;
        }
        else if (strcmp(this->format, "am") == 0 && strcmp(obj.format, "pm") == 0) return false;
        else if (strcmp(this->format, "pm") == 0 && strcmp(obj.format, "am") == 0) return true;
        else if (strcmp(this->format, "utc") == 0 && strcmp(obj.format, "pm") == 0) {
            if (this->hour > obj.hour + 12) return true;
            else if (this->hour == obj.hour + 12 && this->minutes > obj.minutes) return true;
            else if (this->hour == obj.hour + 12 && this->minutes == obj.minutes && this->seconds > obj.seconds) return true;
            else return false;
        }
        else if (strcmp(this->format, "pm") == 0 && strcmp(obj.format, "utc") == 0) {
            if (this->hour + 12 > obj.hour) return true;
            else if (this->hour + 12 == obj.hour && this->minutes > obj.minutes) return true;
            else if (this->hour + 12 == obj.hour && this->minutes == obj.minutes && this->seconds > obj.seconds) return true;
            else return false;
        }
    }

    if (this->year > obj.year)
        return true;
    else if (this->year == obj.year && this->month > obj.month)
        return true;
    else if (this->year == obj.year && this->month == obj.month && this->day > obj.day)
        return true;
    else
        return false;

    
}

bool DateTime::operator<(const DateTime& obj) const&
{
    return !(*this > obj) && *this != obj;
}

bool DateTime::operator>=(const DateTime& obj) const&
{
    return *this > obj || *this == obj;
}

bool DateTime::operator<=(const DateTime& obj) const&
{
    return *this < obj || *this == obj;
}

DateTime& DateTime::operator=(const DateTime& obj)
{
    this->year = obj.year;
    this->month = obj.month;
    this->day = obj.day;
    this->hour = obj.hour;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    strcpy_s(this->format, obj.format);
    return *this;
}

DateTime& DateTime::operator+=(int n)
{
    for (int i = 0; i < n; i++)
        this->nextDate();
    return *this;
}

DateTime& DateTime::operator-=(int n)
{
    for (int i = 0; i < n; i++)
        this->nextDate();
    return *this;
}

DateTime& DateTime::operator+=(float n)
{
    for (int i = 0; i < int(n)*60; i++)
    {
        tickTime();
    }
    return *this;
}

DateTime& DateTime::operator-=(float n)
{
    for (int i = 0; i < int(n) * 60; i++)
    {
        backTime();
    }
    return *this;
}

DateTime DateTime::operator+(int n) const
{
    DateTime tmp(*this);
    for (int i = 0; i < n; i++)
        tmp.nextDate();
    return tmp;
}

DateTime DateTime::operator-(int n) const
{
    DateTime tmp(*this);
    for (int i = 0; i < n; i++)
        tmp.prevDate();
    return tmp;
}

DateTime DateTime::operator+(float n) const
{
    DateTime tmp = *this;
    for (int i = 0; i < int(n)*60; i++)
    {
        tmp.tickTime();
    }
    return tmp;
}

DateTime DateTime::operator-(float n) const
{
    DateTime tmp = *this;
    for (int i = 0; i < int(n) * 60; i++)
    {
        tmp.backTime();
    }
    return tmp;
}

DateTime& DateTime::operator--()
{
    this->prevDate();
    return *this;
}

DateTime& DateTime::operator--(int n)
{
    DateTime tmp = *this;
    this->prevDate();
    return tmp;
}

DateTime& DateTime::operator++()
{
    this->nextDate();
    return *this;
}

DateTime& DateTime::operator++(int n)
{
    DateTime tmp = *this;
    this->nextDate();
    return tmp;
}

ostream& operator<<(ostream& os, const DateTime& t)
{
    os << t.year << "." << t.month / 10 << t.month % 10 << "." << t.day / 10 << t.day % 10 << " ";
    if (strcmp(t.format, "utc") == 0) os << t.hour / 10 << t.hour % 10 << ":" << t.minutes / 10 << t.minutes % 10;
    else if (strcmp(t.format, "am") == 0) os << t.hour / 10 << t.hour % 10 << " AM " << t.minutes / 10 << t.minutes % 10;
    else if (strcmp(t.format, "pm") == 0) os << t.hour / 10 << t.hour % 10 << " PM " << t.minutes / 10 << t.minutes % 10;
    os << ":" << t.seconds / 10 << t.seconds % 10;
    return os;
}

istream& operator>>(istream& is, DateTime& t)
{
    do {
        cout << "YYYY MM DD HOURS MINUTES: ";
        is >> t.year >> t.month >> t.day >> t.hour >> t.minutes;
        t.seconds = 0;
    } while (!t.valid());
    return is;
}
