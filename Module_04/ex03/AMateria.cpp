

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor called" << std::endl;
    this->type = "default";
}

AMateria::AMateria(std::string const &type)
{
    // std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria &copy)
{
    // std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria disconstructor called" << std::endl;
}

AMateria &AMateria:: operator=(AMateria &copy)
{
    // std::cout << "AMateria copy assainement operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    // std::cout << "AMateria use function called" << std::endl;
    (void)target;
}