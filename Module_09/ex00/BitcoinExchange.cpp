
#include "BitcoinExchange.hpp"

Btc::Btc()
{}

int isDoubleValid1(std::string value)
{
  int dotCount = 0;
  if (value.find_first_not_of("+-0123456789.") != std::string::npos)
  {
    std::cout << "Error: bad input => " + value << std::endl;
    return (FALSE);
  }
  for (int i = 0; i < value.size(); i++)
  {
    if (value[i] == '.')
      dotCount++;
  }
  if (dotCount > 1)
  {
    std::cout << "Error: bad input => " + value << std::endl;
    return (FALSE);
  }


  double DoubleValue = atof(value.c_str());
  if (DoubleValue < 0)
  {
    std::cout << "Error: not a positive number." << std::endl;
    return (FALSE);

  }

  return (TRUE);
}


int csvFormValid(std::string exchangeRate)
{
  for (int i = 0; i < exchangeRate.size(); i++)
  {
    if (exchangeRate[i] == '.')
        continue;
    if (!isdigit(exchangeRate[i]))
      return (FALSE);
  }
  return (TRUE);
}

double Btc::getExchangeRate(std::string date)
{
    std::ifstream data_file;
    
    data_file.open(CSVFILEPATH);

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
        if (isDateValid(date) == FALSE)
            throw "";

        date = date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2);
        int i = atof(date.c_str());
        std::getline(StringStream, exchangeRate, ',');

        if (csvFormValid(exchangeRate) == FALSE || isDoubleValid1(exchangeRate) == FALSE)
            throw "";
        _data[i] = atof(exchangeRate.c_str());
    }
    data_file.close();


    int input = atof((date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2)).c_str());

    try
    {
        return (_data.at(input));
    }
    catch (std::out_of_range &exception)
    {
        while (input > 20090101)
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