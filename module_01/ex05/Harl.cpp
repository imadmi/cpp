
#include "Harl.hpp"


Harl::Harl(std::string level) : _level(level)
{
};

Harl::~Harl(void)
{
};

std::string	Harl::get_level(void)
{
    return(this->_level);
}
