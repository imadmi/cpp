
#pragma once

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<std::string> _data;
    
    public :
        RPN();
        ~RPN();
        RPN(const RPN& copy);
        RPN & RPN::operator=(const RPN& copy); 

};