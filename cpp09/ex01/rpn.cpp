#include "rpn.hpp"
#include <istream>
#include <sstream>

rpn::rpn()
{
    std::cout << "default constructor called" << std::endl;
}
rpn::rpn(const rpn& other)
{
    this->rppn = other.rppn;
}
rpn::rpn(std::string str)
{
    std::istringstream a(str);
    std::string aa;
    double x;
    double y;
    int i = 2;
    if (!isdigit(str[0]) || !isdigit(str[2]))
    {
        std::cout << "Error" << std::endl;
        return;
    }
    while (str[i])
    {
        if (i % 2 == 1 && str[i] != ' ')
        {
            std::cout << "Error" << std::endl;
            return;
        }
        else if (i % 4 == 0 && str[i] != '-' && str[i] != '+' && str[i] != '/' && str[i] != '*')
        {
            std::cout << "Error" << std::endl;
            return;
        }
        else if (i % 2 == 0 && i % 4 != 0&& !isdigit(str[i]))
        {
            std::cout << "Error" << std::endl;
            return;
        }
        i++;
    }
    i--;
    if (str[i] != '-' && str[i] != '+' && str[i] != '/' && str[i] != '*')
    {
        std::cout << "Error" << std::endl;
        return;
    }
    std::cout << aa << std::endl;
    while(a >> aa)
    {
        if (aa[0] == '-' || aa[0] == '+' || aa[0] == '/' || aa[0] == '*')
        {
            x = rppn.top();
            rppn.pop();
            y = rppn.top();
        }
        if (aa[0] == '-')
        {
            rppn.push(y - x);
        }
        else if (aa[0] == '+')
        {
            rppn.push(y + x);
        }
        else if (aa[0] == '*')
        {
            rppn.push(y * x);
        }
        else if (aa[0] == '/')
        {
            if (y == 0)
            {
                std::cerr << "division by 0 error" << std::endl;
                return;
            }
            rppn.push(y / x);
        }
        else
            rppn.push(aa[0] - '0');
    }
    std::cout << rppn.top() << std::endl;
}

rpn& rpn::operator=(const rpn& other)
{
    if (this != &other)
    {
        this->rppn = other.rppn;
    }
    return (*this);
}
rpn::~rpn()
{
    std::cout << "default destructor called" << std::endl;
}