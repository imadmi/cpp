

#include "Ice.hpp"

Ice::Ice()
{
    // std::cout << "Ice default constructor called" << std::endl;
    type = "ice";
}

Ice::~Ice()
{
    // std::cout << "Ice distructor called" << std::endl;
}

Ice::Ice(Ice &copy)
{
    // std::cout << "Ice copy constructor called" << std::endl;
    *this = copy; 
}

Ice &Ice::operator=(Ice &copy)
{
    // std::cout << "Ice copy assainement operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

AMateria *Ice::clone() const
{
    AMateria *ICE = new Ice();
    return (ICE); // return a new instance of the same type
}

void Ice::use(ICharacter& ICE)
{
    std::cout << "* shoots an ice bolt at " << ICE.getName() << " *" << std::endl;
}