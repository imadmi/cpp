
#pragma once

#include <iostream>
#include <stack>
#include <vector>
#include <list>


template <class T, class Container = std::vector<T> >
class MutantStack : public std::stack<T, Container>
{
    public:

        MutantStack() : std::stack<T , Container>() {}

        MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy) {}

        ~MutantStack() {}

        MutantStack<T> &operator = (const MutantStack<T, Container> &copy)
        {
            if (this != &copy)
                std::stack<T, Container>::operator=(copy);
            return (*this);
        }

        typedef typename std::vector<T>::iterator iterator; // create an alias for the iterator type // typename is necessary when using typedef in templates 

        iterator begin() { return this->c.begin(); } // c refers to the underlying container used by the std::stack
        iterator end() { return this->c.end(); }
};
