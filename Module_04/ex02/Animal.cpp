
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;   
}

Animal::Animal(Animal &copy)
{
    *this = copy;
}

Animal &Animal::operator=(Animal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal distructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}