
#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure &copy);
        Cure & operator=(Cure &copy);
        virtual ~Cure();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};