
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    setHitPoint(100);
    setEnergy(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    setName(name);
    setHitPoint(100);
    setEnergy(100);
    setAttackDamage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap distructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap & FragTrap::operator=(FragTrap &copy)
{
    std::cout << "FragTrap copy assignement operator called" << std::endl;
    if (this !=&copy)
    {
        setName(copy.getName());
        setAttackDamage(copy.getAttackDamage());
        setHitPoint(copy.getHitPoint());
        setEnergy(copy.getEnergy());
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << ": high fives" << std::endl;
}