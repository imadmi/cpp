
#pragma once
#include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T &x, T &y)
{
	if (x > y)
		return (y);
	else
		return (x);
}

template <typename T>
T	max(T &x, T &y)
{
	if (x <= y)
		return (y);
	else
		return (x);
}