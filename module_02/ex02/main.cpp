
#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &OSTREAM, Fixed const &FIXED)
{
    OSTREAM << FIXED.toFloat();
    return (OSTREAM);
}

int main( void )
{
    Fixed    a;
    Fixed    c(2);
    Fixed    d((float)3.2);
    Fixed    const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << "c + d = " << c + d << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    std::cout << "min " << a.Fixed::min( a, b ) << std::endl;
    std::cout << "min " << a.min( a, b ) << std::endl;
    
    return 0;
}