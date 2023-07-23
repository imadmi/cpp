
#include "iter.hpp"

int main( void )
{
	std::cout << "Int : " << std::endl;
	int arr[3] = {1, 33, 7};
	iter(arr, 3, ft_print);

	std::cout << "String : " << std::endl;
	std::string stringR[2] = { "salam", "3alikom"};
	iter(stringR, 2, ft_print);
	return 0;
}
