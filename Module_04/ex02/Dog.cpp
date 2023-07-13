
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    setType("Dog");
    brain = new Brain();
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    delete brain;
}

Dog& Dog::operator=(Dog &copy)
{
    std::cout << "Dog copy assainement operator called" << std::endl;
    if (this !=&copy)
    {
        type = copy.type;
        brain = new Brain();
        *(this->brain) = *(copy.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " 🐕 : Hoow a khouya" << std::endl;
}