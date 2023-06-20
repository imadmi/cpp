
#pragma once 
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap &copy);
        FragTrap & operator=(FragTrap &copy);
        ~FragTrap(void);

        void highFivesGuys(void);
};