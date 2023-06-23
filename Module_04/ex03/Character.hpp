
#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *materias[4];

    public:
        Character();
        Character(std::string name);
        Character(Character &copy);
        Character & operator=(Character &copy);
        virtual ~Character();

        virtual std::string const & getName() const;
        virtual void equip(AMateria* MATERIA);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};