
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called"<<std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat default destructor called"<<std::endl;
}

WrongCat & WrongCat::operator=(WrongCat &copy)
{
    std::cout << "WrongCat copy assignement called" << std::endl;
    if (this !=&copy)
        this->type = copy.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << this->getType() << " 😸 : Meow a khouya" << std::endl;
}
