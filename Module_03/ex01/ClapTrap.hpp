
#pragma once
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hitPoint;
        int         _energy;
        int         _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &copy);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap &copy);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setAttackDamage(int attackDamage);
        void setHitPoint(int amount);
        void setEnergy(int amount);
        void setName(std::string name);

        std::string getName() const;
        int getAttackDamage() const;
        int getHitPoint() const;
        int getEnergy() const;
};