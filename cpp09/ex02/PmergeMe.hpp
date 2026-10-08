#pragma once
#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <cctype>
#include <limits.h>
#include <stdlib.h>
#include <cerrno>
#include "PairOfPair.hpp"
#include <stdexcept>

class pairofpair;
class pmergme
{
    private :
        std::deque<pairofpair> _container1;
        std::vector<pairofpair> _container2;
        int _pairs;
    public :
        pmergme();
        ~pmergme();
        pmergme(std::string str);
        void deque_ford(int number, int position);
} ;