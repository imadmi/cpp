
#pragma once
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter // Interface (or pure abstract class) ==> all member functions are declared as pure virtual functions
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria *MATERIA) = 0;
        virtual void unequip(int INT) = 0;
        virtual void use(int INT, ICharacter& TARGET) = 0;
};