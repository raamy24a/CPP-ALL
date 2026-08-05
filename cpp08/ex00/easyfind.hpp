#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
int easyfind( T valueT, int valueInt ) {
    typename T::iterator it = std::find (valueT.begin(), valueT.end(), valueInt);
    if (it == valueT.end())
        return (-1);
    return std::distance(valueT.begin(), it);
}