
#include "ClapTrap.hpp"

ClapTrap :: ClapTrap() : _hitPoint(10) , _energy(10) , _attackDamage(0)
{
    std::cout << "ClapTrap default constructor is called " << std::endl;
}

ClapTrap :: ClapTrap(std::string name): _name(name), _hitPoint(10) , _energy(10) , _attackDamage(0)
{
    std::cout << "ClapTrap constructor is called " << std::endl;
}

ClapTrap ::~ClapTrap()
{
    std::cout << "ClapTrap distructor is called" << std::endl;
}

ClapTrap :: ClapTrap(ClapTrap & copy)
{
    std::cout << "copy constructor called " << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap &copy)
{    
    std::cout<< "copy assignement operator called" << std::endl;
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this-> _hitPoint = copy._hitPoint;
    this->_energy = copy._energy;
    return (*this);
}

//   getters

std::string ClapTrap::getName() 
{
    return _name;
}

int ClapTrap::getHitPoint()
{
    return _hitPoint;
}

int ClapTrap::getEnergy()
{
    return _energy;
}

int ClapTrap:: getAttackDamage() 
{
    return _attackDamage;
}

//   setters

void ClapTrap::setName(std::string name)
{
    _name = name;
}

void ClapTrap::setHitPoint(int hitPoint)
{
    _hitPoint = hitPoint;
}

void ClapTrap::setEnergy(int energy)
{
    _energy = energy;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    _attackDamage = attackDamage;
}

// *------------------*

void  ClapTrap::attack(const std:: string& target)
{
    if (_energy <= 0 || _hitPoint <= 0)
        std::cout << "no more energy or hit points left for  " << _name << std::endl;
    else
    {
        std::cout<<"ClapTrap "<< _name<< " attacks " << target <<" , causing "<< _attackDamage << "  points of damage!" << std::endl;
        _energy--;
    }
}

void ClapTrap::takeDamage(unsigned int INT)
{
    if (_energy <= 0 || _hitPoint <= 0)
        std::cout << "no more energy or hit points left for " << _name << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " takes " << INT << " points of damage!" << std::endl;
        _hitPoint -= INT;
    }
}

void ClapTrap::beRepaired(unsigned int INT)
{
    if (_energy <= 0 || _hitPoint <= 0)
        std::cout << "no more energy or hit points left for " << _name<<std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " takes a recovery of " << INT << " points!" << std::endl;
        _hitPoint += INT;
        _energy--;
    }
}
