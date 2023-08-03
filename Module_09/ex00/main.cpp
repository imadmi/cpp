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

  std::string yyyy;
  std::string mm;
  std::string dd;
  std::stringstream sstringstream(date);
  std::getline(sstringstream, yyyy, '-');
  std::getline(sstringstream, mm, '-');
  std::getline(sstringstream, dd, ' ');

  // std::cout << "'" << yyyy << "-" <<mm << "-" << dd << "'" << std::flush;

  if (atoi(yyyy.c_str()) > 2023 || atoi(yyyy.c_str()) < 2009 || atoi(mm.c_str()) > 12 || atoi(mm.c_str()) < 1 || atoi(dd.c_str()) > 31)
    return (FALSE);

  int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (atoi(mm.c_str()) == 2 && (atoi(yyyy.c_str()) % 4 == 0))
  {
      if (atoi(dd.c_str()) > 29)
      {
        return (FALSE);
      }
  }
  else if (atoi(dd.c_str()) > daysInMonth[atoi(mm.c_str())])
  {
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

std::string trimString(const std::string& input)
{
    std::string trimmedString = input;

    int start = 0;
    while (start < trimmedString.length() && std::isspace(trimmedString[start]))
    {
        ++start;
    }
    trimmedString.erase(0, start);

    int end = trimmedString.length() - 1;
    while (end > 0 && std::isspace(trimmedString[end]))
    {
        --end;
    }
    trimmedString.erase(end + 1);

    return (trimmedString);
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
      // if (isDateValid(date) == FALSE || line1[11] != '|' || line1.size() < 11)
      if (isDateValid(date) == FALSE || line1.size() < 11)
      {
          std::cout << "Error: bad input => " << date << std::endl;
          continue;
      }

      std::getline(stringstream, value, '|');
      std::getline(stringstream, value, '\n');
      std::string value1 = trimString(value);

      if (isDoubleValid(value1) == FALSE)
      {
          continue;
      }

      Btc btc;
      double newValue = btc.getExchangeRate(date) * atof(value1.c_str());
      std::cout << date << " => " << value1 << " = " << newValue << std::endl;
    }
  }
  catch (std::exception &e)
  {
      std::cerr << e.what() << std::endl;
  }
  catch (...)
  {
      std::cerr << "ERROR" << std::endl;
  }

  return (EXIT_SUCCESS);
}

