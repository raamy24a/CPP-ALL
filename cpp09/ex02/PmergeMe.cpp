#include "PmergeMe.hpp"


int is_positive_int(std::string str)
{
    if (str.empty())
        return (-1);
    int i = 0;
    while (str[i])
    {
        if (!std::isdigit(str.c_str()[i]))
            return (-1);
        i++;
    }
    char *endptr;
    long number = std::strtol(str.c_str(), &endptr, 10);
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

void deque_initial_sort(std::deque<pairofpair> container)
{
    std::deque<pairofpair>::iterator it;
    while (it != container.end())
    {
        (*it).sort();
        it++;
    }
}

std::deque<pairofpair> deque_ford(std::deque<pairofpair> container)
{
    int i = 0;
    if (container.size() <= 1)
        return (container);
    int last_pair_a = -1;
    int last_pair_b = -1;
    std::deque<pairofpair> con;

    it = container.begin();
    
    if (last_pair_a != -1)
        con.push_back(std::make_pair(last_pair_a, last_pair_b));

    return deque_ford(con);
}
pmergme::pmergme(std::string str)
{
    std::cout << "pmergme constructor called" << std::endl;
    std::stringstream ss(str);

    std::string word;

    int first_val = -1;
    int leftover = -1;
    while (getline(ss, str, ' '))
    {
        if (is_positive_int(str) != -1 && first_val == -1)
            first_val = is_positive_int(str);
        else if (is_positive_int(str) != -1)
        {
            std::pair<int, int> pair;
            pair.first = first_val;
            pair.second = is_positive_int(str);
            _container1.push_back(pair);
            first_val = -1;
            _pairs++;
        }
        else
            throw("non");
    }
    //starttimer

    
    // if (first_val != -1)
    //     leftover = first_val;
    // std::stringstream ss(str);
    // while (getline(ss, str, ' '))
    //get time start
    _container1
}
