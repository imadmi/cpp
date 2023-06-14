#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
private:
	std::string	_level;
	void 	_debug()	{ std::cout << "DEBUG: ..." << std::endl;}
	void 	_info()		{ std::cout << "INFO: ..." << std::endl; }
	void 	_warning()	{ std::cout << "WARNING: ..." << std::endl;}
	void 	_error()	{ std::cout << "ERROR: ..." << std::endl;}

public:
	Harl(std::string	_level);
	~Harl();

	void		complain();
	std::string	get_level(void);
};

#endif