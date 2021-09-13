//
// Created by moboustt on 2/2/2021.
//

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int x);
    Fixed(const Fixed &other);
    Fixed(float const f);
    ~Fixed();

    Fixed & operator=(const Fixed &other);

    int getRawBits() const;
    void setRawBits(int raw);

    float toFloat() const;
    int toInt() const;

private:
    int fixedPointValue;
    static const int NUM_FRAC_BITS = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif // __FIXED_H__
