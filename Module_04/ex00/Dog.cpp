
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

Dog& Dog::operator=(Dog &copy)
{
    std::cout << "Dog copy assignement called" << std::endl;
    if (this !=&copy)
        this->type = copy.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " 🐕 : Hoow a khouya" << std::endl;
}
