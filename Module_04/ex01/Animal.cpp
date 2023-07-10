
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;   
}

Animal::Animal(std::string TYPE) : type(TYPE)
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    *this = copy;
}

Animal& Animal::operator=(Animal &copy)
{
    std::cout << "Animal copy assignement called" << std::endl;
    if (this !=&copy)
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

void Animal::makeSound() const
{
    std::cout << "Animal : animal sound" << std::endl;
}