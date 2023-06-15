
#include "Sed.hpp"

Sed :: Sed()
{}

Sed::~Sed()
{}

int Sed::replace(char **av, std::string str)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
    {
        std::cout << "Error : creation of the file failed" << std::endl;
		return (EXIT_FAILURE);
    }
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos == i && strlen(av[2]) != 0)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (EXIT_SUCCESS);
}