#include "header.hpp"

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

// void	Phonebook::add(void)
// {
// 	std::string	str;

// 	str = "";
// 	if (this->_index > 7)
// 		std::cout << "Warning: overwriting info about " << this->_contacts[this->_index % 8].get_fname() << std::endl;
// 	while (!std::cin.eof() && str == "")
// 	{
// 		std::cout << "Enter a first name: ";
// 		if (std::getline(std::cin, str) && str != "")
// 			this->_contacts[this->_index % 8].set_fname(str);
// 	}
// 	str = "";
// 	while (!std::cin.eof() && str == "")
// 	{
// 		std::cout << "Enter " << this->_contacts[this->_index % 8].get_fname() << "'s last name: ";
// 		if (std::getline(std::cin, str) && str != "")
// 			this->_contacts[this->_index % 8].set_lname(str);
// 	}
// 	str = "";
// 	while (!std::cin.eof() && str == "")
// 	{
// 		std::cout << "Enter " << this->_contacts[this->_index % 8].get_fname() << "'s nickname: "; 
// 		if (std::getline(std::cin, str) && str != "")
// 			this->_contacts[this->_index % 8].set_nick(str);
// 	}
// 	str = "";
// 	while (!std::cin.eof() && str == "")
// 	{
// 		std::cout << "Enter " << this->_contacts[this->_index % 8].get_fname() << "'s phone number: ";
// 		if (std::getline(std::cin, str) && str != "")
// 			this->_contacts[this->_index % 8].set_phone_num(str);
// 	}
// 	str = "";
// 	while (!std::cin.eof() && str == "")
// 	{
// 		std::cout << "Enter " << this->_contacts[this->_index % 8].get_fname() << "'s darkest secret: ";
// 		if (std::getline(std::cin, str) && str != "")
// 		{
// 			this->_contacts[this->_index % 8].set_secret(str);
// 			std::cout << this->_contacts[this->_index % 8].get_fname() << \
// 				" successfully added to phonebook [" << this->_index % 8 + 1 << "/8]" << std::endl;
// 		}
// 	}
// 	this->_index++;
// }
void	Phonebook::add(void)
{
	string	fname = "";
	string	lname = "";
	string	nick_name = "";
	string	phone_num = "";
	string	dark_secret = "";
	// string	str;

	// fname = "";
	// if (this->index > 7)
	// 	std::cout << "Warning: overwriting info about " << this->contacts[this->index % 8].get_fname() << std::endl;
	while (fname == "")
	{
		std::cout << "Enter a first name: ";
		std::getline(std::cin, fname);
		if (fname != "")
			this->contacts[this->index % 8].set_fname(fname);
	}
	while (lname == "")
	{
		std::cout << "Enter " << this->contacts[this->index % 8].get_fname() << "'s last name: ";
		std::getline(std::cin, lname);
		if (lname != "")
			this->contacts[this->index % 8].set_lname(lname);
	}
	while (nick_name == "")
	{
		std::cout << "Enter " << this->contacts[this->index % 8].get_fname() << "'s nickname: ";
		std::getline(std::cin, nick_name);
		if (nick_name != "")
			this->contacts[this->index % 8].set_nick(nick_name);
	}
	while (phone_num == "")
	{
		std::cout << "Enter " << this->contacts[this->index % 8].get_fname() << "'s phone number: ";
		std::getline(std::cin, phone_num);
		if (phone_num != "")
			this->contacts[this->index % 8].set_phone_num(phone_num);
	}
	while (dark_secret == "")
	{
		std::cout << "Enter " << this->contacts[this->index % 8].get_fname() << "'s darkest secret: ";
		std::getline(std::cin, dark_secret);
		if (dark_secret != "")
		{
			this->contacts[this->index % 8].set_secret(dark_secret);
			std::cout << "The contact successfully added to phonebook [" << this->index % 8 + 1 << "/8]\n";
		}
	}
	this->index++;
}

void	Phonebook::search(void)
{
}

void	Phonebook::print(Contact contact)
{
}

int	main(void)
{
	Phonebook 	ph1;
	string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add();
		// else if (str == "SEARCH")
		// 	ph1.search();
	}
	return (0);
}