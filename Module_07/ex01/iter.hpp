
#pragma once
#include<iostream>

template < typename T >
void    iter(T *arr, int size, void (ft_print)(T j))
{
    for (int i = 0; i < size; i++)
        ft_print(arr[i]);
}

template < typename T >
void    ft_print(T j)
{
    std::cout << j << std::endl;
}