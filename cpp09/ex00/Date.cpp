#include "Date.hpp"

Date::Date()
{
    _day = 0;
    _month = 0;
    _year = 0;
    _isValid = false;
}
Date::Date(const Date& other)
{
        _day = other._day;
        _month = other._month;
        _year = other._year;
        _isValid = other._isValid;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int year, int month, int day) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }
    static const int daysInMonth[] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    int maxDays = daysInMonth[month];
    if (month == 2 && isLeapYear(year)) {
        maxDays = 29;
    }
    return day <= maxDays;
}

Date::Date(std::string string)
{
    _year = atoi(string.c_str());
    _month = atoi(&string.c_str()[5]);
    _day = atoi(&string.c_str()[7]);

    if (isValidDate(_year, _month, _day) && string.c_str()[4] == '-' && string.c_str()[6] == '-' )
    {
        _isValid = true;
    }
    else
        _isValid = false;
}
Date::~Date()
{

}

int& Date::operator[](int i)
{
    if (i == 0)
        return (this->_year);
    else if (i == 1)
        return (this->_month);
    else
        return (this->_day);
}

const int& Date::operator[](int i) const
{
    if (i == 0)
        return (this->_year);
    else if (i == 1)
        return (this->_month);
    else if (i == 2)
        return (this->_day);
    else
        return (this->_isValid);
}

Date& Date::operator=(const Date& other)
{
    if (this != &other)
    {
        _day = other._day;
        _month = other._month;
        _year = other._year;
        _isValid = other._isValid;
    }
}
std::ostream& operator<<(std::ostream& os, const Date& ui)
{
    if (!ui[3])
        throw("invalid date");
    if (ui[1] < 10 && ui[2] < 10)
        os << ui[0] << "-0" << ui[1] << "-0" << ui[2];
    else if (ui[1] < 10)
        os << ui[0] << "-0" << ui[1] << "-" << ui[2];
    else if (ui[2] < 10)
        os << ui[0] << "-" << ui[1] << "-0" << ui[2];
    else
        os << ui[0] << "-" << ui[1] << "-" << ui[2];
    return (os);
}