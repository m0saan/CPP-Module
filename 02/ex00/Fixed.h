//
// Created by moboustt on 2/2/2021.
//

#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H

#include <iostream>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();

    Fixed & operator=(const Fixed &other);

    int getRawBits() const;
    void setRawBits(int fixedPointValue);

private:
    int fixedPointValue;
    static const int NUMBER_OF_FRAC_BITS = 8;
};


#endif //CPP_MODULE_FIXED_H
