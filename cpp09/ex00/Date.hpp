#include <iostream>

class Date
{
    public :
        Date();
        Date(const Date& other);
        Date(std::string string);
        int& operator[](int i);
        const int& Date::operator[](int i) const;
        ~Date();
        bool operator<(const Date& other);
        Date& operator=(const Date& other);
    private :
        int _day;
        int _month;
        int _year;
        bool _isValid;
        int _scalar;
} ;

std::ostream& operator<<(std::ostream& os, const Date& ui);
