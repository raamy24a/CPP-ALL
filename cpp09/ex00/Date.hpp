#include <iostream>
#include <cstdlib>

class Date
{
    public :
        Date();
        Date(const Date& other);
        Date(std::string string);
        ~Date();
        int& operator[](int i);
        const int& operator[](int i) const;
        bool operator<(const Date& other) const;
        bool isValid() const;
        Date& operator=(const Date& other);
    private :
        int _day;
        int _month;
        int _year;
        bool _isValid;
        int _scalar;
} ;

std::ostream& operator<<(std::ostream& os, const Date& ui);
