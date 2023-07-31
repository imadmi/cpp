
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
		std::map<int, double> _data;

	public:
		Btc();
		Btc & operator=(const Btc& copy);
		Btc(const Btc& copy);
		~Btc();


		double getExchangeRate(std::string date);
};

int isDateValid(std::string date);
