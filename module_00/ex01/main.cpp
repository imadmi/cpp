#include "PhoneBook.hpp"


int	main(void)
{
	PhoneBook 	PhoneBook;
	std::string		str;

	PhoneBook.set_index(0);
	while (str != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT) > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			PhoneBook.add();
		else if (str == "SEARCH")
			PhoneBook.search();
		else if (str == "EXIT")
			std::cout << "\e[31mEXIT" <<std::endl;
		else if (str != "EXIT" && str != "ADD" && str != "SEARCH")
			std::cout << "\033[0;93mcommand not found\033[0m" <<std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_SUCCESS);
}