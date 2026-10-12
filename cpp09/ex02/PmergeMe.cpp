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
int jacobsthal(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    int value = 0;
    int antelast = 0;
    int last = 1;
    int i = 1;
    while (i < n)
    {
        value = antelast * 2 + last;
        antelast = last;
        last = value;
        i++;
    }
    return (value);
}
void mergeInsertionSort(std::deque<int>& main_chain)
{
    if (main_chain.size() <= 1)
        return;
    std::deque<std::pair<int, int> > pairs;
    int orphan = -1;
    bool has_orphan = false;
    size_t i = 0;
    while (i < main_chain.size())
    {
        if (i + 1 < main_chain.size())
        {
            int a = main_chain[i];
            int b = main_chain[i + 1];
            if (a < b)
                pairs.push_back(std::make_pair(b, a));
            else
                pairs.push_back(std::make_pair(a, b));
            i += 2;
        }
        else
        {
            orphan = main_chain[i];
            has_orphan = true;
            i++;
        }
    }
    std::deque<int> highs;
    size_t j_idx = 0;
    while (j_idx < pairs.size())
    {
        highs.push_back(pairs[j_idx].first);
        j_idx++;
    }
    mergeInsertionSort(highs);
    std::deque<std::pair<int, int> > sorted_pairs;
    size_t h = 0;
    while (h < highs.size())
    {
        int val = highs[h];
        size_t k = 0;
        while (k < pairs.size())
        {
            if (pairs[k].first == val)
            {
                sorted_pairs.push_back(pairs[k]);
                pairs.erase(pairs.begin() + k);
                break;
            }
            k++;
        }
        h++;
    }
    pairs = sorted_pairs;
    main_chain.clear();
    size_t p_idx = 0;
    while (p_idx < pairs.size())
    {
        main_chain.push_back(pairs[p_idx].first);
        p_idx++;
    }
    main_chain.push_front(pairs[0].second);
    std::deque<int> pend;
    size_t p_next = 1;
    while (p_next < pairs.size())
    {
        pend.push_back(pairs[p_next].second);
        p_next++;
    }
    if (has_orphan)
        pend.push_back(orphan);
    size_t jacob_idx = 3;
    size_t prev_j = 2;
    size_t inserted_count = 0;
    while (inserted_count < pend.size())
    {
        size_t current_j = jacobsthal(jacob_idx);
        if (current_j > pend.size())
            current_j = pend.size();

        size_t curr_loop = current_j;
        while (curr_loop > prev_j)
        {
            int val_to_insert = pend[curr_loop - 1];
            std::deque<int>::iterator bound = main_chain.end();
            if (curr_loop < pairs.size())
            {
                int corresponding_a = pairs[curr_loop].first;
                bound = std::find(main_chain.begin(), main_chain.end(), corresponding_a);
            }
            std::deque<int>::iterator pos = std::lower_bound(main_chain.begin(), bound, val_to_insert);
            main_chain.insert(pos, val_to_insert);
            inserted_count++;
            curr_loop--;
        }
        prev_j = current_j;
        jacob_idx++;
        if (current_j >= pend.size())
            break;
    }
}