
#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

#define TRUE 1
#define FALSE 0


class Btc
{
	private:
		std::map <std::string, double> data;
		// std::map<std::string, double> _exchangeRates;

	public:
		Btc();
		// Btc(const std::string& databaseFile);
		// Btc(const Btc& copy);
		// ~Btc();

		// Btc & operator=(const Btc& copy);

		// double getExchangeRate(const std::string& date, double value) const;

		// bool	_isValidDate(const std::string& dateStr) const;

		class runtimeError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: could not open bitcoin price database file.");
				}
		};

		class invalidArgument : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: no exchange rate found for given date.");
				}
		};

		class negativeValue : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: not a positive number.");
				}
		};

		class tooLargeNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large a number.");
				}
		};

		class inexistentDate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: inexistent date.");
				}
		};
};

// std::ostream&	operator<<(std::ostream& o, const Btc& i);
