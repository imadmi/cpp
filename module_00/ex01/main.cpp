#include "header.hpp"

Contact	Phonebook::get_contact(int index)
{
	return (this->contacts[(index - 1) % 8]);
}

string	Contact::get_fname(void)
{
	return (this->fname);
}

string	Contact::get_lname(void)
{
	return (this->lname);
}

string	Contact::get_nick(void)
{
	return (this->nick);
}

string	Contact::get_phone_num(void)
{
	return (this->phone_num);
}

string	Contact::get_secret(void)
{
	return (this->secret);
}

int	Phonebook::get_index(void)
{
	return (this->index);
}

void	Phonebook::set_index(int str)
{
	this->index = str;
}

void	Contact::set_fname(string str)
{
	this->fname = str;
}

void	Contact::set_lname(string str)
{
	this->lname = str;
}

void	Contact::set_nick(string str)
{
	this->nick = str;
}

void	Contact::set_phone_num(string str)
{
	this->phone_num = str;
}

void	Contact::set_secret(string str)
{
	this->secret = str;
}

void	Phonebook::add(void)
{
	string	fname = "";
	string	lname = "";
	string	nick_name = "";
	string	phone_num = "";
	string	dark_secret = "";

	if (get_index() >= 2)
		std::cout << "\e[31mOverwriting contact '" << this->contacts[get_index() % 2].get_fname() << "'\e[0m\n";
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

void	Phonebook::search(void)
{
	string	str;
	int		i;
	int		j = 0;
	// if (!search_ui(this->_contacts))
	// {
	// 	std::cout << std::endl << "Phonebook is empty!" << std::endl;
	// 	return ;
	// }
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (get_contact(++j).get_fname().size() != 0)
	{
		std::cout << "First Name: " << get_contact(j).get_fname() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (true)
	{
		std::cout << "Select an index: ";
		std::getline(std::cin, str);
		i = std::atoi(str.c_str());
		if (str != "")
		{
			if (i >= 1 && i <= 8)
				break ;
			std::cout << "Invalid index!\n";
		}
	}
	std::cout << "First Name: " << get_contact(i).get_fname() << std::endl;
	std::cout << "Last Name: " << get_contact(i).get_lname() << std::endl;
	std::cout << "Nickname: " << get_contact(i).get_nick() << std::endl;
	std::cout << "Phone Number: " << get_contact(i).get_phone_num() << std::endl;
	std::cout << "Darkest Secret: " << get_contact(i).get_secret() << std::endl;
}

int	main(void)
{
	Phonebook 	PhoneBook;
	string		str;

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