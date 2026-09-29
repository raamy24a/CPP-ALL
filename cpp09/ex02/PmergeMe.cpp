#include "PmergeMe.hpp"


int is_positive_int(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!std::isdigit(str.c_str()[i]))
            return (-1);
        i++;
    }
    char *endptr;
    long number = std::strtoll(str.c_str(), &endptr, 10);
    if (errno == ERANGE)
        return (-1);
    if (number > INT_MAX || number < 0)
        return (-1);
    return (number);
}

pmergme::pmergme()
{
    std::cout << "pmergme default constructor called" << std::endl;
}
pmergme::~pmergme()
{

}
pmergme::pmergme(std::string str)
{
    std::cout << "pmergme constructor called" << std::endl;
    std::stringstream ss(str);

    std::string word;

    while (getline(ss, str, ' '))
    {
        if (is_positive_int(str) != -1)
            _container1.push_back(is_positive_int(str));
        else
            throw("non");
    }
    while (getline(ss, str, ' '))
    {
        if (is_positive_int(str) != -1)
            _container2.push_back(is_positive_int(str));
        else
            throw("non");
    }
}
