#include "Date.h"
#include <ctime>

Date::Date()
{
    time_t now = time(0);
    tm* info = new tm;

    localtime_s(info, &now);

    year = 1900 + info->tm_year;
    month = 1 + info->tm_mon;
    day = info->tm_mday;

    delete info;
}

Date::Date(int year, int month=1, int day=1)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

bool Date::isLeapYear() const
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int Date::monthDays() const
{
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 2)
        return isLeapYear() ? 29 : 28;
    return 30;
}

void Date::nextDate() {
    if (month == 12 && day == 31) {
        month = 1;
        day = 1;
        year++;
    }
    else if (day == monthDays())
    {
        day = 1;
        month++;
    }
    else {
        day++;
    }
}

void Date::prevDate() {
    if (month == 1 && day == 1) {
        day = 31;
        month = 12;
        year--;
    }
    else if (day == 1)
    {
        month--;
        day = monthDays();
    }
    else {
        day--;
    }
}

void Date::showDate() const
{
    cout << "Day:   " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year:  " << year << endl;
}

bool Date::valid() const
{
    return month >= 1 && month <= 12 && day >= 1 && day <= monthDays() && year > 1900;
}

void Date::setYear(int year) {
    this->year = year;
}

int Date::getYear() const {
    return year;
}

void Date::setMonth(int month) {
    if (month >= 1 && month <= 12)
        this->month = month;
}

int Date::getMonth() const {
    return month;
}

void Date::setDay(int day) {
    if (day >= 1 && day <= monthDays())
        this->day = day;
}

int Date::getDay() const {
    return day;
}

Date& Date::operator--() {
    this->prevDate();
    return *this;
}

Date Date::operator--(int) {
    Date tmp = *this;
    this->prevDate();
    return tmp;
}

Date& Date::operator++() {
    this->nextDate();
    return *this;
}

Date Date::operator++(int) {
    Date tmp = *this;
    this->nextDate();
    return tmp;
}

bool Date::operator==(const Date& obj) const&
{
    return this->day == obj.day && this->month == obj.month && this->year == obj.year;
}

bool Date::operator!=(const Date& obj) const&
{
    return !(*this == obj);
}

bool Date::operator>(const Date& obj) const&
{
    if (this->year > obj.year) return true;
    else if (this->year == obj.year && this->month == obj.month) return true;
    else if (this->year == obj.year && this->month == obj.month && this->day == obj.day) return true;
    else return false;
}

bool Date::operator<(const Date& obj) const&
{
    return !(*this > obj) && (*this != obj);
}

bool Date::operator>=(const Date& obj) const&
{
    return *this > obj || *this == obj;
}

bool Date::operator<=(const Date& obj) const&
{
    return *this < obj || *this == obj;
}

Date& Date::operator+=(int days)
{
    for (int i = 0; i < days; i++)
    {
        (*this)++;
    }return *this;  
}

Date& Date::operator-=(int days)
{
    for (int i = 0; i < days; i++)
    {
        (*this)--;
    }return *this;
}

Date& Date::operator+=(double years)
{
    this->year += years;
    return *this;
}

Date& Date::operator-=(double years)
{
    this->year -= years;
    return *this;
}

Date Date::operator+(int days) const&
{
    return days + *this;
}

Date Date::operator-(int days) const&
{
    return days - *this;
}

Date Date::operator+(double years) const&
{
    return years + *this;
}

Date Date::operator-(double years) const&
{
    return years - *this;
}

ostream& operator<<(ostream& os, const Date& t)
{
    os << t.day / 10 << t.day % 10 << "."
        << t.month / 10 << t.month % 10 << "."
        << t.year;
    return os;
}

istream& operator>>(istream& is, Date& t)
{
    do {
        cout << "dd mm yyyy:\n";
        is >> t.day >> t.month >> t.year;
    } while (!t.valid());

    return is;
}

Date operator+(int days, const Date& a)
{
    Date tmp = a;
    tmp += days;
    return tmp;
}

Date operator-(int days, const Date& a)
{
    Date tmp = a;
    tmp -= days;
    return tmp;
}

Date operator+(double years, const Date& a)
{
    Date tmp = a;
    tmp += years;
    return tmp;
}

Date operator-(double years, const Date& a)
{
    Date tmp = a;
    tmp -= years;
    return tmp;
}

