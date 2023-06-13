#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class	Harl
{
private:
	std::string	_level;
	void debug()	{ std::cout << "DEBUG: ..." << std::endl;}
	void info()		{ std::cout << "INFO: ..." << std::endl; }
	void warning()	{ std::cout << "WARNING: ..." << std::endl;}
	void error()	{ std::cout << "ERROR: ..." << std::endl;}

public:
	Harl(std::string	_level);
	~Harl();

	void		complain( std:: string level );

};

#endif