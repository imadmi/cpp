

#include "Converter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter Default Constructor called\n" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string _input)
{
	// std::cout << "ScalarConverter Constructor called for : " << _input << " input.\n" << std::endl;
	double _double = atof(_input.c_str());
	convert(_double, _input);
}

// ScalarConverter::ScalarConverter(const ScalarConverter &copy)
// {
// 	// std::cout << "ScalarConverter Copy Constructor called\n" << std::endl;
// 	*this = copy;
// }

// ScalarConverter::~ScalarConverter()
// {
// 	// std::cout << "\nScalarConverter Deconstructor called" << std::endl;
// }

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
// {
// 	// std::cout << "ScalarConverter Assignation operator called" << std::endl;
// 	if (this != &copy)
//     {}
// 	return (*this);
// }

int	ScalarConverter::checkInput(const std::string _input)
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
    else if (_input.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		return (DOUBLE);
	}
	else if (_input.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		return (FLOAT);
	}
    return (CHAR);
}

void ScalarConverter::fromChar(double _doublee, const std::string _input, int _type)
{
	char _char = static_cast<char>(_input[0]);
	int _int = static_cast<int>(_char);
	float _float = static_cast<float>(_char);
	double _double = static_cast<double>(_char);
    
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

void ScalarConverter::fromInt(double _double, const std::string   _input, int _type)
{
	int _int = static_cast<int>(_double);
	char _char = static_cast<char>(_double);
	float _float = static_cast<float>(_double);

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

void ScalarConverter::fromFloat(double _double, const std::string   _input, int _type)
{
	float _float = static_cast<float>(_double);
	char _char = static_cast<char>(_double);
	int _int = static_cast<int>(_double);

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

void ScalarConverter::fromDouble(double _double, const std::string _input, int _type)
{
	char _char = static_cast<char>(_double);
	int _int = static_cast<int>(_double);
	float _float = static_cast<float>(_double);

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

void ScalarConverter::fromNan(double _double, const std::string   _input, int _type)
{
	char _char = static_cast<char>(_double);
	int _int = static_cast<int>(_double);
	float _float = static_cast<float>(_double);

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

void	ScalarConverter::convert(double _double, const std::string _input)
{
	int _type = checkInput(_input);

	if (_type == CHAR)
	{
		fromChar(_double, _input, _type);
		return ;
	}	
	if (_type == INT)
	{
		fromInt(_double, _input, _type);
		return ;
	}	
	if (_type == FLOAT)
	{
		fromFloat(_double, _input, _type);
		return ;
	}
	if (_type == DOUBLE)
	{
		fromDouble(_double, _input, _type);
		return ;
	}
	if (_type == NANN)
	{
		fromNan(_double, _input, _type);
		return ;
	}
	throw ScalarConverter::ErrorException();
}

// void	ScalarConverter::printOutput() const
// {
    // if (isprint(_char))
    //     std::cout << "char: '" << _char << "'" << std::endl;
    // else if (_type == NANN)
    //     std::cout << "char: '" << "impossible" << "'" << std::endl;
    // else
    //     std::cout << "char: not printable" << std::endl;
    // if (_type != NANN)
    //     std::cout << "int: '" << _int << "'" << std::endl;
    // else
    //     std::cout << "int: '" << "impossible" << "'" << std::endl;
    // std::cout << "float: '" << _float;
    // if (_float - _int == 0)
    //     std::cout << ".0f'" << std::endl;
    // else
    //     std::cout << "f'" << std::endl;
    // std::cout << "double: '" << _double;
    // if (_double - _int == 0)
    //     std::cout << ".0'" << std::endl;
    // else
    //     std::cout << "'" <<std::endl;
// }

