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
        BitcoinExchange(std::string fileName);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        void executeBitcoin();
        ~BitcoinExchange();
    private :
        std::map<Date, float> _db;
        std::map<Date, float> _secondDb;
} ;