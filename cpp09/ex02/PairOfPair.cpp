#include "PairOfPair.hpp"

pairofpair::pairofpair()
{
    std::cout << "default pairofpair constructor called" << std::endl;
}
pairofpair::pairofpair(std::pair<int, int> first, std::pair<int, int> second)
{
    _pairs.first = first;
    _pairs.second = second;
}
pairofpair& pairofpair::operator=(const pairofpair& other)
{
    
}
pairofpair::~pairofpair()
{

}
void pairofpair::sort()
{
    int temp;
    if (_pairs.first.first < _pairs.first.second)
    {
        temp = _pairs.first.first;
        _pairs.first.first = _pairs.first.second;
        _pairs.first.second = temp;
    }
    if (_pairs.second.first < _pairs.second.second)
    {
        temp = _pairs.second.first;
        _pairs.second.first = _pairs.second.second;
        _pairs.second.second = temp;
    }
}
void pairofpair::sort_pairs()
{
    std::pair<int, int> temp;
    if (_pairs.first.first < _pairs.second.first)
    {
        temp = _pairs.first;
        _pairs.first = _pairs.second;
        _pairs.second = temp;
    }
}