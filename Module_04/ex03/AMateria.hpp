
#pragma once
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria // the pure virtual function clone(), makes AMateria an abstract class
{
    protected:
        std::string type;

    public:
        AMateria(std::string const &type);
        AMateria();
        AMateria(AMateria &copy);
        AMateria & operator=(AMateria &copy);
        virtual ~AMateria();

        std::string const & getType() const;

        virtual AMateria* clone() const = 0; //is a pure virtual function that returns a pointer to a cloned instance of the materia. This function is meant to be overridden by derived classes.
        virtual void use(ICharacter& target);
};