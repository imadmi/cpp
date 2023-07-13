

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void p()
{
    system("leaks AMateria");
}
int main()
{
    atexit(p);
    // Cure constructors and getType() function
    Cure cure1;
    Cure cure2 = cure1;

    std::cout << "Cure 1 type: " << cure1.getType() << std::endl;
    std::cout << "Cure 2 type: " << cure2.getType() << std::endl;

    std::cout << std::endl;

    // the clone() function (polymorphism)
    AMateria* clonedCure = cure1.clone();
    std::cout << "Cloned Cure type: " << clonedCure->getType() << std::endl;
    delete clonedCure; // Don't forget to clean up the dynamically allocated object
    std::cout << std::endl;

    // Creating a new MateriaSource object
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    // Temporary AMateria pointer
    AMateria* tmp;
    AMateria* tmp1;
    tmp1 = src->createMateria("fgygygh");
    me->equip(tmp1);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(0);
    delete tmp1;
    ICharacter* bob = new Character("bob");

    // "me" uses the Materia at slot 0 on "bob"
    me->use(0, *bob);
    // "me" uses the Materia at slot 1 on "bob"
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob); //

    delete bob;
    delete me;
    delete src;
    
    return (EXIT_SUCCESS);
}