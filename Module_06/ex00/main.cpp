
#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "./Convert : [args to covert]" << std::endl;
		return (EXIT_FAILURE);
	}
    try
    {
        ScalarConverter::convert(atof(argv[1]), argv[1]);
    }
    catch (const ScalarConverter::ErrorException& ex)
    {
        std::cout << "Conversion failed: " << ex.what() << std::endl;
    }
	return (EXIT_SUCCESS);
}
