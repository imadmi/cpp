
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

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T  const & x ) { std::cout << x << std::endl; return; }

// int main()
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print<const int> );
//     iter( tab2, 5, ft_print<Awesome>);
//     return 0;
// }