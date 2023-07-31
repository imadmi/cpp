#include "BitcoinExchange.hpp"

int isDateValid(std::string date)
{
  if (date.size() != 10)
    return (FALSE);
  for (int i = 0; i < 10; i++)
  {
    if (i == 4 || i == 7)
    {
      if (date[i] != '-')
        return (FALSE);
      continue;
    }
    if (!isdigit(date[i]))
      return (FALSE);
  }
  return (TRUE);
}

int isDoubleValid(std::string value)
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
  else if (DoubleValue > 1000)
  {
    std::cout << "Error: too large as number." << std::endl;
    return (FALSE);
  }

  return (TRUE);
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    std::cerr << "Usage: ./btc <input_file>" << std::endl;
    return (EXIT_FAILURE);
  }

  try
  {
    Btc btcExchange;
    std::ifstream file(argv[1]);

    // Check if the file is open
    if (!file.is_open())
    {
        std::cerr << "Input file not found" << std::endl;
        return (EXIT_FAILURE);
    }

    // Check if the first line is valid
    std::string line;
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cerr << "Invalid input file format" << std::endl;
        return (EXIT_FAILURE);
    }

  // Go through the file line by line, and print the exchange rate
    std::string line1;
    while (getline(file, line1))
    {
      if (line1 == "")
        continue;
      std::stringstream stringstream(line1);
      std::stringstream str;
      std::string date;
      std::string value;
      std::getline(stringstream, date, ' ');
      if (isDateValid(date) == FALSE || line1[11] != '|' || line1.size() < 11)
      {
          std::cout << "Error: bad input => " << date << std::endl;
          continue;
      }
      std::getline(stringstream, value, ' ');
      std::getline(stringstream, value, ' ');
      if (isDoubleValid(value) == FALSE)
      {
          continue;
      }

      Btc btc;
      double newValue = btc.getExchangeRate(date) * atof(value.c_str());
      std::cout << date << " => " << value << " = " << newValue << std::endl;
    }
  }
  catch (std::exception &e)
  {
      std::cerr << e.what() << std::endl;
  }

  return (EXIT_SUCCESS);
}
