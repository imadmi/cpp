
#pragma once
#include <iostream>
#define RED "\033[41m"
#define DEF "\033[0m"
#define YELLOW "\033[0;33m\0"

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain &copy);
        Brain & operator=(Brain &copy);
        ~Brain();
};