
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    setType("Cat");
    brain = new Brain();
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
        std::cout << "Cat default destructor called" << std::endl;
        delete this->brain;
}

Cat & Cat::operator=(Cat &copy)
{
    std::cout << "Cat copy assainement operator called" << std::endl;
    if (this != &copy)
    {
        type = copy.type;
        brain = new Brain();
        *(this->brain) = *(copy.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " 😸 : Meow a khouya" << std::endl;
}

