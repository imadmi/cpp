#include "header.hpp"


int	main(void)
{
	Phonebook 	PhoneBook;
	std::string		str;

	PhoneBook.set_index(0);
	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			PhoneBook.add();
		else if (str == "SEARCH")
			PhoneBook.search();
	}
	return (EXIT_SUCCESS);
}