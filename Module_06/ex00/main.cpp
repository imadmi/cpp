
#include "Converter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "./Convert : [args to covert]" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		ScalarConverter covert(argv[1]);
	}
	catch(ScalarConverter::ErrorException& exeception)
	{
		std::cerr << exeception.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
