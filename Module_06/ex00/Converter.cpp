

#include "Converter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter Default Constructor called\n" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string input): _input(input)
{
	// std::cout << "ScalarConverter Constructor called for : " << _input << " input.\n" << std::endl;
	_double = atof(_input.c_str());
	convert();
	printOutput();
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy): _input(copy._input)
{
	// std::cout << "ScalarConverter Copy Constructor called\n" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "\nScalarConverter Deconstructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	// std::cout << "ScalarConverter Assignation operator called" << std::endl;
	if (this != &copy)
    {
        _type   = copy._type;
        _char   = copy._char;
        _int    = copy._int;
        _float  = copy._float;
        _double = copy._double;
    }
	return (*this);
}

int	ScalarConverter::checkInput()
{
	if (_input.compare("nan") == 0 || _input.compare("+inf") == 0 ||
		_input.compare("-inf") == 0 || _input.compare("+inff") == 0 ||
		_input.compare("-inff") == 0)
	{
		return (NANN);
	}
	if (_input.find_first_not_of("+-0123456789") == std::string::npos)
	{
        return (INT);
    }	
	else if (_input.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		return (FLOAT);
	}
    else if (_input.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		return (DOUBLE);
	}
    return (CHAR);
}

void ScalarConverter::fromChar()
{
	_char = static_cast<char>(_input[0]);
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void ScalarConverter::fromInt()
{
	_int = static_cast<int>(_double);
	_char = static_cast<char>(_double);
	_float = static_cast<float>(_double);
}

void ScalarConverter::fromFloat()
{
	_float = static_cast<float>(_double);
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
}

void ScalarConverter::fromDouble()
{
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

void ScalarConverter::fromNan()
{
	// _char = static_cast<char>(_input);
	// _int = static_cast<int>(_input);
	// _float = static_cast<float>(_input);
}

void	ScalarConverter::convert()
{
	void (ScalarConverter::*ptr_to_mbr[])() = {&ScalarConverter::fromChar, &ScalarConverter::fromInt, &ScalarConverter::fromFloat, &ScalarConverter::fromDouble, &ScalarConverter::fromNan};
	int types[] = {CHAR, INT, FLOAT, DOUBLE, NANN};

	_type = checkInput();

	for (int i = 0; i < 5; i++)
	{
		if (_type == types[i])
		{
			(this->*ptr_to_mbr[i])();
			return ;
		}
	}
	throw ScalarConverter::ErrorException();
}

void	ScalarConverter::printOutput() const
{
    if (isprint(_char))
        std::cout << "char: '" << _char << "'" << std::endl;
    else if (_type == NANN)
        std::cout << "char: '" << "impossible" << "'" << std::endl;
    else
        std::cout << "char: not printable" << std::endl;
    if (_type != NANN)
        std::cout << "int: '" << _int << "'" << std::endl;
    else
        std::cout << "int: '" << "impossible" << "'" << std::endl;
    std::cout << "float: '" << _float;
    if (_float - _int == 0)
        std::cout << ".0f'" << std::endl;
    else
        std::cout << "f'" << std::endl;
    std::cout << "double: '" << _double;
    if (_double - _int == 0)
        std::cout << ".0'" << std::endl;
    else
        std::cout << "'" <<std::endl;
}

