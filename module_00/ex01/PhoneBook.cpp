#include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	std::string	fname;
	std::string	lname;
	std::string	nick_name;
	std::string	phone_num;
	std::string	dark_secret;

	if (get_index() >= 8)
		std::cout << "\e[31mOverwriting contact '" << this->contacts[get_index() % 8].get_fname() << "'\e[0m\n";
	while (fname == "")
	{
		std::cout << "Enter a first name: ";
		std::getline(std::cin, fname);
		if (fname != "")
			this->contacts[get_index() % 8].set_fname(fname);
	}
	while (lname == "")
	{
		std::cout << "Enter " << this->contacts[get_index() % 8].get_fname() << "'s last name: ";
		std::getline(std::cin, lname);
		if (lname != "")
			this->contacts[get_index() % 8].set_lname(lname);
	}
	while (nick_name == "")
	{
		std::cout << "Enter " << this->contacts[get_index() % 8].get_fname() << "'s nickname: ";
		std::getline(std::cin, nick_name);
		if (nick_name != "")
			this->contacts[get_index() % 8].set_nick(nick_name);
	}
	while (phone_num == "")
	{
		std::cout << "Enter " << this->contacts[get_index() % 8].get_fname() << "'s phone number: ";
		std::getline(std::cin, phone_num);
		if (phone_num != "")
			this->contacts[get_index() % 8].set_phone_num(phone_num);
	}
	while (dark_secret == "")
	{
		std::cout << "Enter " << this->contacts[get_index() % 8].get_fname() << "'s darkest secret: ";
		std::getline(std::cin, dark_secret);
		if (dark_secret != "")
		{
			this->contacts[get_index() % 8].set_secret(dark_secret);
			std::cout << "\e[32mContact successfully added to PhoneBook [" << get_index() % 8 + 1 << "/8]\e[0m\n";
		}
	}
	set_index(get_index() + 1);
}

#include "PhoneBook.hpp"

std::string	print(std::string text)
{
    std::string str = text;

    if (str.length() > 10)
        str = str.substr(0, 9) + ".";

    str = std::string(10 - str.length(), ' ') + str;

    return (str);
}

void	PhoneBook::search(void)
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
