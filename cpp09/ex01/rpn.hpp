#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <vector>

class rpn
{
    public :
        rpn();
        rpn(std::string str);
        rpn(const rpn& other);
        rpn& operator=(const rpn& other);
        ~rpn();
    private :
        std::stack<double> rppn;
} ;