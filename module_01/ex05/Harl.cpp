
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

void 	Harl::_debug()	{ std::cout << "DEBUG: ..." << std::endl;}
void 	Harl::_info()		{ std::cout << "INFO: ..." << std::endl; }
void 	Harl::_warning()	{ std::cout << "WARNING: ..." << std::endl;}
void 	Harl::_error()	{ std::cout << "ERROR: ..." << std::endl;}