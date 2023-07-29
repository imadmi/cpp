
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <list>


template <typename T>
void    easyfind(T& container_of_int, int int_to_find)
{
    typename T::iterator it;
    it = std::find(container_of_int.begin(), container_of_int.end(), int_to_find);
	if (it != container_of_int.end())
    {
    	std::cout << "The Number " << int_to_find << " Existed." << std::endl;
    }
	else
	{
        std::cout << "The Number " << int_to_find << " is not found." << std::endl;
    }	
}


// template< class InputIt, class T >
// InputIt std::find( InputIt first, InputIt last, const T& value );

// template <typename T>
// typename T::iterator easyfind(T& container, int value)
// {
//     typename T::iterator it;
//     for (it = container.begin(); it != container.end(); ++it)
//     {
//         if (*it == value)
//         {
//             return (it);
//         }
//     }
//     throw "ok";
// }