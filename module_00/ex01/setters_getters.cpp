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
