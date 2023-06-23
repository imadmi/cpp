
#pragma once
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria * m) = 0;
        virtual void unequip(int INT) = 0;
        virtual void use(int INT, ICharacter& target) = 0;
};