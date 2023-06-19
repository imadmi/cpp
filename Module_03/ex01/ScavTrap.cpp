

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout<< "Scavtrap default constructor called"<<std::endl;
    setHitPoint(100);
    setEnergy(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout<< "Scavtrap constructor called"<<std::endl;
    setName(name);
    setHitPoint(100);
    setEnergy(50);
    setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
     std::cout<< "Scavtrap distructor called"<<std::endl;
}

ScavTrap :: ScavTrap(ScavTrap & copy)
{
    std::cout << "copy constructor called " << std::endl;
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(ScavTrap &copy)
{    
    std::cout<< "copy assignement operator called" << std::endl;
    setName(copy.getName());
    setAttackDamage(copy.getAttackDamage());
    setHitPoint(copy.getHitPoint());
    setEnergy(copy.getEnergy());
    return (*this);
}

void    ScavTrap::attack(const std:: string& target)
{
    if (getEnergy() <= 0 || getHitPoint() <= 0)
        std::cout << "no more energy or hit points left for  " << getName() << std::endl;
    else
    {
        std::cout<<"ScavTrap "<< getName() << " attacks " << target <<" , causing "<< getAttackDamage() << "  points of damage!" << std::endl;
        setEnergy(getEnergy() - 1);
    }
}

void    ScavTrap::guardGate()
{
    std::cout <<"ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
