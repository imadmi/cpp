

#include "Character.hpp"

Character::Character()
{
   std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
}

Character::Character(std::string name)
{
    std::cout << "Character constructor called" << std::endl;
    this->_name = name;
    for(int i = 0; i < 4; i++)
    {
        this->materias[i] = NULL;
    }
}

Character::Character(Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = copy;
}

Character & Character::operator=(Character &copy)
{
    std::cout << "Character copy assainement operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy.getName();
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
            {
                delete this->materias[i];
                this->materias[i] = NULL;
            }
            this->materias[i] = copy.materias[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character disconstructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (this->materias[i])
            delete this->materias[i];
    }
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* EQUIP)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = EQUIP;
            return;
        }
    }
}

void Character::unequip(int INT)
{
    if (this->materias[INT])
    {
        this->materias[INT] = NULL;
    }
}

void Character::use(int INT, ICharacter& target)
{
    if (this->materias[INT])
        this->materias[INT]->use(target);
}

