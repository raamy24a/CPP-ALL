#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
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
        std::map<std::string, int> _db;
        std::map<std::string, int> _secondDb;
        std::ifstream _streamDb;
        std::ifstream _streamSecondDb;
} ;