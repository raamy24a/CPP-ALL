#include <iostream>

class Date
{
    public :
        Date();
        Date(const Date& other);
        Date(std::string string);
        ~Date();
        Date& operator=(const Date& other);
    private :
        int _day;
        int _month;
        int _year;
        bool _isValid;
}