
#pragma once

#include <iostream>
#include <map>

class Btc
{
	private:
		std::map <std::string, double> data;

	public:
		Btc();
		Btc& operator=(Btc const &copy);
		Btc(Btc const &var);
		~Btc();

};
