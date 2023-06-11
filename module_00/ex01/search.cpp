#include "header.hpp"

std::string	print(std::string text)
{
    std::string str = text;

    if (str.length() > 10)
        str = str.substr(0, 9) + ".";

    str = std::string(10 - str.length(), ' ') + str;

    return (str);
}

void	Phonebook::search(void)
{
	std::string	str;
	int		i;
	int		j = 1;

	std::cout << "\e[31m_____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|\e[0m" << std::endl;
	while (get_contact(j).get_fname().length() != 0 && j < 9)
	{
    	std::cout << "\e[31m|\e[0m" <<"         " <<  j << "\e[31m|\e[0m" 
		<< print(get_contact(j).get_fname()) << "\e[31m|\e[0m"
		<< print(get_contact(j).get_lname()) << "\e[31m|\e[0m"
		<< print(get_contact(j).get_nick()) << "\e[31m|\e[0m\n";
		++j;
	}
	std::cout << "\e[31m---------------------------------------------\e[0m" << std::endl;
	while (true)
	{
		std::cout << "Select an index: ";
		std::getline(std::cin, str);
		i = std::atoi(str.c_str());
		if (str != "")
		{
			if (i >= 1 && i <= 8 && get_contact(i).get_fname().length() != 0)
				break ;
			std::cout << "Invalid index!\n";
			return ;
		}
	}
	std::cout << "First Name: " << get_contact(i).get_fname() << std::endl;
	std::cout << "Last Name: " << get_contact(i).get_lname() << std::endl;
	std::cout << "Nickname: " << get_contact(i).get_nick() << std::endl;
	std::cout << "Phone Number: " << get_contact(i).get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << get_contact(i).get_secret() << std::endl;
}
