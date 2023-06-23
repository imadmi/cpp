

#include "Cure.hpp"

Cure::Cure()
{
    // std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
    // std::cout << "Cure distructor called" << std::endl;
}

Cure::Cure(Cure &copy)
{
    // std::cout << "Cure copy constructor called" << std::endl;
    *this = copy; 
}

Cure &Cure::operator=(Cure &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

AMateria *Cure::clone() const
{
    AMateria *CLONE = new Cure();
    return (CLONE); // return a new instance of the same type
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}