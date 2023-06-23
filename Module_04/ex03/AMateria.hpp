
#pragma once
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria &copy);
        virtual ~AMateria();
        AMateria & operator=(AMateria &copy);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0; //is a pure virtual function that returns a pointer to a cloned instance of the materia. This function is meant to be overridden by derived classes.
        virtual void use(ICharacter& target);
};