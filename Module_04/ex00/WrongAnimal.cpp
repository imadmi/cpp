
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;   
}

WrongAnimal::WrongAnimal( std::string TYPE ) : type( TYPE )
{
    std::cout << "WrongAnimal " << this->type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy assignement called" << std::endl;
    if (this !=&copy)
        this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal distructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal : Wronganimal sound" << std::endl;
}