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
        void executeBitcoin(std::string fileName);
        ~BitcoinExchange();
    private :
        std::map<Date, float> _db;
        std::map<Date, float> _secondDb;
} ;