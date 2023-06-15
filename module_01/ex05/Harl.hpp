#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
private:
	std::string	_level;
	void 	_debug()	;
	void 	_info()		;
	void 	_warning()	;
	void 	_error()	;

public:
	Harl(std::string	_level);
	~Harl();

	void		complain();
	std::string	get_level(void);
};

#endif