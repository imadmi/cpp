
#include "Fixed.hpp"


Fixed::Fixed() : _fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int NBR) : _fixedPointValue( NBR << _fractionalBits )
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float NBR) : _fixedPointValue( roundf( NBR * ( 1 << _fractionalBits ) ) )
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &copy)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    _fixedPointValue = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPointValue / 256);
}

int Fixed::toInt(void) const
{
    return (_fixedPointValue >> _fractionalBits);
}

//   Increment/Decrement operators

Fixed&   Fixed::operator++( void )
{
    ++this->_fixedPointValue;
    return *this;
}

Fixed   Fixed::operator++( int )
{
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue++;
    return tmp;
}

Fixed& Fixed::operator--( void )
{
    --this->_fixedPointValue;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue--;
    return tmp;
}

//   Arithmetic operators

Fixed   Fixed::operator+( const Fixed &rhs )
{
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &rhs )
{
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &rhs )
{
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &rhs )
{
    return Fixed( this->toFloat() / rhs.toFloat() );
}

//   Comparison operators

bool    Fixed::operator>( const Fixed &rhs )
{
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator<( const Fixed &rhs )
{
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator>=( const Fixed &rhs )
{
    return this->getRawBits() >= rhs.getRawBits();
}

bool   Fixed::operator<=( const Fixed &rhs )
{
    return this->getRawBits() <= rhs.getRawBits();
}

bool  Fixed::operator==( const Fixed &rhs )
{
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator!=( const Fixed &rhs )
{
    return this->getRawBits() != rhs.getRawBits();
}

//    Max and Min

Fixed Fixed::min(Fixed const &a,Fixed const &b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return (b);
    return (a);
}

Fixed Fixed::max(Fixed const &a,Fixed const &b)
{
       if (a._fixedPointValue > b._fixedPointValue)
        return (a);
    return (b);
}

const Fixed & Fixed::min(Fixed &a,Fixed &b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return (b);
    return (a);
}

const Fixed & Fixed::max(Fixed  &a,Fixed  &b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return (a);
    return (b);
}