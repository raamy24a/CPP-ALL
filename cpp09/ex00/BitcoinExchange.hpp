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
        std::map<std::string, int> csvToMap(std::string fileName);

    private :
        std::map<Date, int> _db;
        std::map<Date, int> _secondDb;
        std::ifstream _streamDb;
        std::ifstream _streamSecondDb;
} ;