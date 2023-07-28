
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
// #include <iterator>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vector;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span & copy);
		~Span();
		Span & operator=(const Span & copy);

		void	addNumber(int Numbre);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class NoSpan: public std::exception
		{
			virtual const char* what() const throw()
            {
                return ("NO Numbers Stored, or Only One.");
            }
		};

		class NoSpaceLeft: public std::exception
		{
			virtual const char* what() const throw()
            {
                return ("More numbers than the container size");
            }
		};

        void printNumbers() const;
};
