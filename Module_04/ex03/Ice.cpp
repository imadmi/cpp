

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice distructor called" << std::endl;
}

Ice::Ice(Ice &copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy; 
}

Ice &Ice::operator=(Ice &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

AMateria *Ice::clone() const
{
    AMateria *ICE = new Ice();
    return ICE;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}