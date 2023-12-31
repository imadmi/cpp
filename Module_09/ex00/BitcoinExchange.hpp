
#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <cstdlib>

#define TRUE 1
#define FALSE 0

#define CSVFILEPATH "/Users/imimouni/Desktop/cpp/Module_09/ex00/data.csv"

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
int isDoubleValid(std::string value);
