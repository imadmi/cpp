
#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
		// std::ifstream ifs;
		// std::ifstream ofs;
	public:
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed();
		int	replace(char **argv, std::string str);
};
 
#endif