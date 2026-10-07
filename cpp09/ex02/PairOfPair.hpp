#pragma once
#include <vector>
#include <iostream>

class pairofpair
{
    private:
        std::pair<std::pair<int, int>, std::pair<int, int>> _pairs;
    public:
        pairofpair();
        void sort();
        void sort_pairs();
        pairofpair(std::pair<int, int> first, std::pair<int, int> second);
        pairofpair& operator=(const pairofpair& other);
        ~pairofpair();
} ;