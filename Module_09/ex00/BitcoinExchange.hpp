
#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>

#define TRUE 1
#define FALSE 0


class Btc
{
	private:
		std::map<unsigned int, double> _data;
		// std::map<std::string, double> _exchangeRates;

	public:
		Btc();
		Btc & operator=(const Btc& copy);
		Btc(const Btc& copy);
		~Btc();


		double getExchangeRate(std::string date);
};

int isDateValid(std::string date);

// std::ostream&	operator<<(std::ostream& o, const Btc& i);
