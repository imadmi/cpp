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

int isValidDouble(const std::string &value)
{
  int dotCount = 0;

  if (value.find_first_not_of("+-0123456789.") != std::string::npos)
    return (FALSE);
  for (std::size_t i = 0; i < value.size(); i++)
  {
    if (value[i] == '.' && dotCount == 0)
    {
      dotCount++;
      continue;
    }
    if (!isdigit(value[i]) && value[0] != '-')
    {
      throw std::runtime_error("Error: bad input => " + value);
    }
  }

  double ret = std::stod(value);
  if (ret < 0) {
    throw std::runtime_error("Error: not a positive number.");
  } else if (ret > 1000) {
    throw std::runtime_error("Error: too large as number.");
  }
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
        {
            std::string line;
            std::getline(file, line);
            if (line != "date | value")
            {
                std::cerr << "Invalid input file format" << std::endl;
                return (EXIT_FAILURE);
            }
        }

      // Go through the file line by line, and print the exchange rate
        {
            std::string line;
            while (getline(file, line))
            {
                if (line == "")
                  continue;
                std::stringstream stringstream(line);
                std::string date;
                std::string value;
                std::getline(stringstream, date, ' ');
                // std::cout << line[11]  << std::endl;
                if (isDateValid(date) == FALSE || line[11] != '|' || line.size() < 11)
                {
                    std::cout << "Error: bad input => " << date << std::endl;
                    continue;
                }
                std::getline(stringstream, value, ' ');
                std::getline(stringstream, value, ' ');
                std::cout << value << std::endl;
                if (isValidDouble(value) == TRUE)
                {
                    continue;
                }
                // try
                // {
                //     isValidDouble(value);  // throw if invalid
                // }
                // catch (std::exception &e)
                // {
                //     std::cout << e.what() << std::endl;
                //     continue;
                // }
                // double newValue =
                //     btcExchange.getExchangeRate(date) * std::stod(value);
                // std::cout << date << " => " << value << " = " << newValue
                //         << std::endl;
            }
        }

    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (EXIT_SUCCESS);
}
