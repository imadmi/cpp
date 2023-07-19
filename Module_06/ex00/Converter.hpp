
#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define NANN 5

class ScalarConverter
{
	private:
		int                 _type;
		const std::string   _input;
		char                _char;
		int                 _int;
		double              _double;
		float               _float;

	public:
		ScalarConverter();
		ScalarConverter(const std::string input);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
		~ScalarConverter();

		int checkInput();
		void convert();

		void fromChar();
		void fromInt();
		void fromFloat();
		void fromDouble();
		void fromNan();

		void printOutput(void)const;

	class ErrorException : public std::exception
	{
        public :
            virtual const char* what() const throw()
            {
                return ("ERROR");
            }
	};
};