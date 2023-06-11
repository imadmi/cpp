
#ifndef HEADER_HPP
#define HEADER_HPP

# include <iostream>
# include <iomanip>
# include <string>

using std::string;

class	Contact
{
	private:
		string		fname;
		string		lname;
		string		nick;
		string		phone_num;
		string		secret;
	public:
		string		get_fname(void);
		string		get_lname(void);
		string		get_nick(void);
		string		get_phone_num(void);
		string		get_secret(void);
		void		set_fname(string str);
		void		set_lname(string str);
		void		set_nick(string str);
		void		set_phone_num(string str);
		void		set_secret(string str);
};


class	Phonebook
{
	private:
		Contact		contacts[8];
		int			index;
	public:
		void		add(void);
		void		search(void);

		int			get_index(void);
		void		set_index(int index);
		Contact		get_contact(int index);
};

#endif 