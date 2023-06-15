


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(Fixed const &copy);
        ~Fixed();
        Fixed & operator=(Fixed const &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif