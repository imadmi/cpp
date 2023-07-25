
#pragma once

#include <iostream>
#include <string>

template <class T>
class Array
{
	private:
		T				*_data;
		unsigned int	_size;

	public:
		Array() : _data(new T(0)), _size(0) {};
		Array(unsigned int n): _data(new T[n]), _size(n) {};
		Array(const Array &copy) {*this = copy;};
		~Array() {delete []_data;};

		Array &operator=(const Array & copy)
		{
			if (this != &copy)
			{
				_size = copy._size;
				_data = new T[_size];
				for (int i = 0; i < _size; i++)
					_data[i] = copy._data[i];
			}
			return (*this);
		};

		T &operator[] (unsigned int n)
		{
			if (n > _size)
				throw Array::out_of_range();
			return (_data[n]);
		};

		unsigned int size() const {return (_size);};

		class out_of_range: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("*Error : out of range*");
			}
		};
};

#include "Array.tpp"