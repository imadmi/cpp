
#pragma once

#include <iostream>
#include <stack>


template <class T>
class MutantStack : public std::stack<T>
{
    public:

        MutantStack() : std::stack<T>()
        {
            std::cout << "Default constructor called" << std::endl;
        }

        MutantStack(const MutantStack &copy) : std::stack<T>(copy)
        {
            std::cout << "Copy Constructor called" << std::endl;
        }

        ~MutantStack()
        {
            std::cout << "Deconstuctor called" << std::endl;
        }

        MutantStack<T> &operator = (const MutantStack<T> &copy)
        {
            std::cout << "Copy assainement Constructor called" << std::endl;
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator; // create an alias for the iterator type

        // iterator begin() { return this->c.begin(); }
        // iterator end() { return this->c.end(); }
};
