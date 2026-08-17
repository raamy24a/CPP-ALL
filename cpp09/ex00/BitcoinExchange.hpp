#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include "Date.hpp"
#include <cstring>

class BitcoinExchange
{
    public :
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();
        std::map<Date, float> csvToMap(std::string fileName);

    private :
        std::map<Date, float> _db;
        std::map<Date, float> _secondDb;
        std::ifstream _streamDb;
        std::ifstream _streamSecondDb;
} ;