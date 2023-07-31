
#include "BitcoinExchange.hpp"

Btc::Btc()
{}

double Btc::getExchangeRate(std::string date)
{
    std::ifstream data_file;
    
    data_file.open("data.csv");

    if (!data_file.is_open())
    {
        throw std::runtime_error("data.csv not found");
    }

    std::string firstLineCheck;
    std::getline(data_file, firstLineCheck);
    if (firstLineCheck != "date,exchange_rate")
    {
      throw std::runtime_error("Invalid data.csv format");
    }

    std::string line;
    while (getline(data_file, line))
    {
        std::stringstream StringStream(line);
        std::string date;
        std::string exchangeRate;
        std::getline(StringStream, date, ',');
        if (isDateValid(date) == TRUE)
        {
          date = date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2);
          int i = std::stoul(date);
          std::getline(StringStream, exchangeRate, ',');
          _data[i] = std::stod(exchangeRate);
        }
    }
    data_file.close();


    int input = std::stoul(date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2));

    try
    {
        return (_data.at(input));
    }
    catch (std::out_of_range &exception)
    {
        while (input > 0)
        {
            input--;
            try
            {
                return (_data.at(input));
            }
            catch (std::out_of_range &exception)
            {
                continue;
            }
        }
    }
    return (0);
}

Btc &Btc::operator=(const Btc &copy)
{
	return (*this);
}

Btc::Btc(const Btc &copy)
{
	*this = copy;
}

Btc::~Btc()
{}