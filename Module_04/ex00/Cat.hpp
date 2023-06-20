
#pragma once
#include "Animal.hpp"

class Cat : Animal
{
    public:
        void setName(std::string &type);
        std::string getName() const;
};