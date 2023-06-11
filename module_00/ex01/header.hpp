
#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string fname;
	std::string lname;
	std::string nick;
	std::string phone_num;
	std::string secret;

public:
	std::string get_fname(void);
	std::string get_lname(void);
	std::string get_nick(void);
	std::string get_phone_num(void);
	std::string get_secret(void);
	void set_fname(std::string str);
	void set_lname(std::string str);
	void set_nick(std::string str);
	void set_phone_num(std::string str);
	void set_secret(std::string str);
};

class Phonebook
{
private:
	Contact contacts[8];
	int index;

public:
	void add(void);
	void search(void);

	int get_index(void);
	void set_index(int index);
	Contact get_contact(int index);
};

#endif