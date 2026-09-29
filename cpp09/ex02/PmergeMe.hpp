#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <cctype>
#include <limits.h>
#include <stdlib.h>
#include <cerrno>

class pmergme
{
    private :
        std::deque<int> _container1;
        std::vector<int> _container2;
    public :
        pmergme();
        ~pmergme();
        pmergme(std::string str);
} ;