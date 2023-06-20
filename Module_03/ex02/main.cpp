
#include "FragTrap.hpp"

int main()
{
    FragTrap khoya("khoya");
    FragTrap l3ziz("l3ziz");
    khoya.attack(l3ziz.getName());
    l3ziz.takeDamage(khoya.getAttackDamage());
    l3ziz.beRepaired(3);
    std::cout<< l3ziz.getName()<<" energy points are "<<l3ziz.getEnergy()<< " and hitPoints are "<<l3ziz.getHitPoint()<<std::endl;
    khoya.highFivesGuys();
    l3ziz.highFivesGuys();

    return (EXIT_SUCCESS);
}