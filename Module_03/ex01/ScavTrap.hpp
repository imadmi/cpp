

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        ScavTrap & operator=(ScavTrap &copy);
        ~ScavTrap(void);

        void attack(const std::string& target);

        void guardGate();
};