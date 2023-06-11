#include "header.hpp"

void	Phonebook::add(void)
{
	string	fname;
	string	lname;
	string	nick_name;
	string	phone_num;
	string	dark_secret;

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
			std::cout << "\e[32mContact successfully added to phonebook [" << get_index() % 8 + 1 << "/8]\e[0m\n";
		}
	}
	set_index(get_index() + 1);
}
