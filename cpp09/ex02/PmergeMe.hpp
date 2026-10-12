#pragma once
#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <cctype>
#include <limits.h>
#include <stdlib.h>
#include <cerrno>
#include <algorithm>
#include <stdexcept>

class pmergme
{
    private :
        std::deque<int> _container1;
        std::vector<int> _container2;
        int _pairs;
    public :
        pmergme();
        ~pmergme();
        pmergme(std::string str);
        void deque_ford(int number, int position);
} ;