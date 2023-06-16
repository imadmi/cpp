
#pragma once
#include <iostream>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:
        Fixed();
        Fixed(Fixed const &copy);
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();

        Fixed &     operator=(Fixed const &copy);
        int         toInt(void) const;
        float       toFloat(void) const;
        int         getRawBits(void) const;
        void        setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);
