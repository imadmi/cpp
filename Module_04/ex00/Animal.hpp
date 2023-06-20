
#pragma once
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        void makeSound() = 0;
};