
#pragma once
#include "Animal.hpp"

class Dog : Animal
{
    public:
        void setName(std::string &type);
        std::string getName() const;
};