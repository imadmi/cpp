
#include "BitcoinExchange.hpp"

Btc::Btc()
{}

// Btc::Btc(const std::string& databaseFile)
// {
// 	std::ifstream file(databaseFile.c_str());
// 	if (!file.is_open())
// 		throw runtimeError();
// 	std::string line;
// 	while (std::getline(file, line))
// 	{
// 		std::stringstream ss(line);
// 		std::string date;
// 		float price;
// 		if (std::getline(ss, date, ',') && ss >> price)
// 			data[date] = price;
// 	}
// }

// Btc::Btc(const Btc& obj)
// {
// 	*this = obj;
// 	return ;
// }

// Btc::~Btc()
// {
// 	return ;
// }

// Btc& Btc::operator=(const Btc& obj)
// {
// 	if (this != &obj)
// 		this->data = obj.data;
// 	return (*this);
// }

// bool	Btc::_isValidDate(const std::string& dateStr) const
// {
// 	int year, month, day;
// 	char separator;
// 	std::istringstream ss(dateStr);
// 	ss >> year >> separator >> month >> separator >> day;
// 	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
// 		return (false);
// 	if (month == 4 || month == 6 || month == 9 || month == 11)
// 	{
// 		if (day > 30)
// 			return (false);
// 	}
// 	else if (month == 2)
// 	{
// 		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
// 		{
// 			if (day > 29)
// 				return (false);
// 		}
// 		else
// 		{
// 			if (day > 28)
// 				return (false);
// 		}
// 	}
// 	return (true);
// }

// float Btc::getExchangeRate(const std::string& date, float value) const
// {
// 	if (value < 0)
// 		throw negativeValue();
// 	if (value > 1000)
// 		throw tooLargeNumber();
// 	if (_isValidDate(date) == false)
// 		throw inexistentDate();
// 	std::map<std::string, float>::const_iterator it = data.find(date);
// 	if (it == data.end())
// 	{
// 		it = data.upper_bound(date);
// 		if (it == data.begin())
// 			throw invalidArgument();
// 		--it;
// 	}
// 	return (it->second);
// }


// std::ostream&	operator<<(std::ostream& o, const Btc& i)
// {
// 	()i;
// 	return o;
// }
