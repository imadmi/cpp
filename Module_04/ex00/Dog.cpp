
#include "Dog.hpp"

void Dog :: setName(std::string &TYPE)
{
    type = TYPE;
}

std::string Dog:: getName() const
{
    return (type);
}