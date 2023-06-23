

#include "Character.hpp"

Character::Character()
{
//    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        materias[i] = 0;
    }
}

Character::Character(std::string name) : _name(name)
{
    // std::cout << "Character constructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        materias[i] = 0;
    }
}

Character::Character(Character &copy)
{
    // std::cout << "Character copy constructor called" << std::endl;
    *this = copy;
}

Character &Character::operator=(Character &copy)
{
    // std::cout << "Character copy assainement operator called" << std::endl;
    if (this != &copy)
    {
        _name = copy.getName();
        for (int i = 0; i < 4; i++) // Deep copy
        {
            if (materias[i])
            {
                delete materias[i];
                materias[i] = 0;
            }
            materias[i] = copy.materias[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    // std::cout << "Character disconstructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (materias[i])
            delete materias[i];
    }
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* EQUIP)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == 0)
        {
            materias[i] = EQUIP;
            return ;
        }
    }
}

void Character::unequip(int INT)
{
    if (materias[INT] != 0 && INT < 4)
        materias[INT] = 0;
}

void Character::use(int INT, ICharacter& target)
{
    if (materias[INT] != 0 && INT < 4)
        materias[INT]->use(target);
}

