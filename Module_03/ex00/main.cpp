
#include "ClapTrap.hpp"



int main()
{
    ClapTrap imad("imad");
    imad.setAttackDamage(30);
    std::cout << "energy for " << imad.getName() << " is "<< imad.getEnergy() << std::endl;
    
    ClapTrap  mimouni("mimouni");
    mimouni.setAttackDamage(5);
    // mimouni.setHitPoint(0);
    std::cout << "energy for " << mimouni.getName() << " is " << mimouni.getEnergy() << std::endl;
    imad.attack("mimouni");

    std::cout << "energy for " << imad.getName() << " is " << imad.getEnergy() << std::endl;
    std::cout << "energy for " << mimouni.getName() << " is " << mimouni.getEnergy() << std::endl;

    std::cout << "hitPoint for " << imad.getName() << " is " << imad.getHitPoint() << std::endl;
    std::cout << "hitPoint for " << mimouni.getName() << " is " << mimouni.getHitPoint() << std::endl;

    std::cout << "attackDamage for " << imad.getName() << " is " << imad.getAttackDamage() << std::endl;
    std::cout << "attackDamage for " << mimouni.getName() << " is " << mimouni.getAttackDamage() << std::endl;

    imad.takeDamage(100);

    std::cout << "energy for " << imad.getName() << " is " << imad.getEnergy() << std::endl;
    std::cout << "energy for " << mimouni.getName() << " is " << mimouni.getEnergy() << std::endl;

    std::cout << "hitPoint for " << imad.getName() << " is " << imad.getHitPoint() << std::endl;
    std::cout << "hitPoint for " << mimouni.getName() << " is " << mimouni.getHitPoint() << std::endl;

    std::cout << "attackDamage for " << imad.getName() << " is " << imad.getAttackDamage() << std::endl;
    std::cout << "attackDamage for " << mimouni.getName() << " is " << mimouni.getAttackDamage() << std::endl;

    imad.beRepaired(200);

    std::cout << "energy for " << imad.getName() << " is " << imad.getEnergy() << std::endl;
    std::cout << "energy for " << mimouni.getName() << " is " << mimouni.getEnergy() << std::endl;

    std::cout << "hitPoint for " << imad.getName() << " is " << imad.getHitPoint() << std::endl;
    std::cout << "hitPoint for " << mimouni.getName() << " is " << mimouni.getHitPoint() << std::endl;

    std::cout << "attackDamage for " << imad.getName() << " is " << imad.getAttackDamage() << std::endl;
    std::cout << "attackDamage for " << mimouni.getName() << " is " << mimouni.getAttackDamage() << std::endl;
    


    return (EXIT_SUCCESS);
}