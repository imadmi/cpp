
#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>

#define TRUE 1
#define FALSE 0

class RPN
{
    public :
        RPN();
        ~RPN();
        RPN(const RPN& copy);
        RPN & operator=(const RPN& copy); 
};
