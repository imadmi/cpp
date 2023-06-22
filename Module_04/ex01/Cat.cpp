
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->setType("Cat");
    this->brain = new Brain();
}

Cat::Cat(Cat& copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    delete this->brain;
}

Cat& Cat::operator=(Cat& copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain();
        *(this->brain) = *(copy.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " 😸 : Meow a khouya" << std::endl;
}

