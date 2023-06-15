
#include "Sed.hpp"

std::string Error_handling(char *str)
{
	std::ifstream	infile;
    std::string     buffer;
    std::string     line;

	infile.open(str);
	if (infile.fail())
	{
		std::cout << "Error: '" << str << ":" << "' no such file or directory." << std::endl;
		return ("");
	}
    while (std::getline(infile, line))
    {
        if (infile.eof())
        {
            buffer += line;
            infile.close();
            return (buffer);
        }
        buffer += line + "\n";
    }
	infile.close();
    return (buffer);
}

int	main(int argc, char **av)
{
    if (argc == 4)
    {
        if (!Error_handling(av[1]).empty())
        {
            Sed sed;
            if (sed.replace(av, Error_handling(av[1])) == 0)
                return (EXIT_SUCCESS);
        }
        return (EXIT_FAILURE);
    }
    std::cout << "Usage: ./Sed [filename] [s1] [s2]" << std::endl;
    return (EXIT_FAILURE);
}