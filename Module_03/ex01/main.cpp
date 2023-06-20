
#include "ScavTrap.hpp"

int main()
{

    {
        ScavTrap simo("simo");
        std::cout << std::endl;
    }
    {
        ScavTrap imad("imad");
        ScavTrap mimouni("mimouni");
        imad.attack("mimouni");
        mimouni.takeDamage(imad.getAttackDamage());
        std::cout << mimouni.getHitPoint() << std::endl;
        imad.guardGate();
        imad = mimouni;
        std::cout << imad.getHitPoint() << std::endl;
    }
    return (EXIT_SUCCESS);
}
