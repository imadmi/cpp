
#include "BitcoinExchange.hpp"

Btc::Btc()
{

}

Btc::~Btc()
{
}

Btc &Btc::operator=(Btc const &copy)
{
	data = copy.data;
	return (*this);
}

Btc::Btc(Btc const &copy)
{
	*this = copy;
}

