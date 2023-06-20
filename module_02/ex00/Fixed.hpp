

#pragma once
#include <iostream>


class   Fixed
{
    private:

        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:

        Fixed();
        Fixed(Fixed const &copy);
        ~Fixed();
        Fixed&     operator=(Fixed const &copy);
        int         getRawBits(void) const;
        void        setRawBits(int const raw);
};
