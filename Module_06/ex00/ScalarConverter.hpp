
#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <cmath>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define NANN 5

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const std::string _input);
		static int checkInput(const std::string   _input);
		static void fromChar(double _double, const std::string _input, int _type);
		static void fromInt(double _double, const std::string _input, int _type);
		static void fromFloat(double _double, const std::string _input, int _type);
		static void fromDouble(double _double, const std::string _input, int _type);
		static void fromNan(double _double, const std::string _input, int _type);

	public:
		static void convert(double _double, const std::string _input);

	class ErrorException : public std::exception
	{
        public :
            virtual const char* what() const throw()
            {
                return ("ERROR");
            }
	};
};