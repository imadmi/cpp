
#pragma once
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int              _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(Fixed const &copy);
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();

        Fixed & operator=(Fixed const &copy);
        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);
        Fixed operator+(Fixed const &rhs);
        Fixed operator-(Fixed const &rhs);
        Fixed operator*(Fixed const &rhs);
        Fixed operator/(Fixed const &rhs);
        bool operator>(Fixed const &rhs);
        bool operator<(Fixed const &rhs);
        bool operator>=(Fixed const &rhs);
        bool operator<=(Fixed const &rhs);
        bool operator==(Fixed const &rhs);
        bool operator!=(Fixed const &rhs);

        int     toInt(void) const;
        float   toFloat(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        static Fixed min(Fixed const &a, Fixed const &b);
        static Fixed max(Fixed const &a, Fixed const &b);
        static Fixed & min(Fixed &a, Fixed &b);
        static Fixed & max(Fixed &a, Fixed &b);
};
