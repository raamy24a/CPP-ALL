#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <cctype>
#include <limits.h>
#include <stdlib.h>
#include <cerrno>
#include <stdexcept>

class pmergme
{
    private :
        std::deque<std::pair<int, int>> _container1;
        std::vector<std::pair<int, int>> _container2;
    public :
        pmergme();
        ~pmergme();
        pmergme(std::string str);
        std::deque<std::pair<int, int>> deque_ford(int number, std::iterator<std::deque<std::pair<int, int>>> it);
} ;