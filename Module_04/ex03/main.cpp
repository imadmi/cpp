

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    // Creating a new MateriaSource object
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    // Temporary AMateria pointer
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");

    // "me" uses the Materia at slot 0 on "bob"
    me->use(0, *bob);
    // "me" uses the Materia at slot 1 on "bob"
    me->use(1, *bob);

    me->use(4, *bob);

    delete bob;
    delete me;
    delete src;
    
    return 0;
}