
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called"<<std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout<< "Cat default destructor called"<<std::endl;
}

Cat & Cat::operator=(Cat &copy)
{
    std::cout << "Cat copy assignement called" << std::endl;
    if (this !=&copy)
        this->type = copy.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " 😸 : Meow a khouya" << std::endl;
}
