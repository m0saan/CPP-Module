//
// Created by moboustt on 2/2/2021.
//

#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H

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
    void setRawBits(int fixedPointValue);

    float toFloat() const;
    int toInt() const;

    // Overloading the comparison operators >, <, >=, <=, == and !=.
    bool operator>(Fixed const &rhs) const;
    bool operator<(Fixed const &rhs) const;
    bool operator>=(Fixed const &rhs) const;
    bool operator<=(Fixed const &rhs) const;
    bool operator==(Fixed const &rhs) const;
    bool operator!=(Fixed const &rhs) const;

    // Overloading the arithmetic operators +, -, *, and /.
    Fixed operator+(Fixed const &rhs) const ;
    Fixed operator-(Fixed const &rhs) const ;
    Fixed operator*(Fixed const &rhs) const ;
    Fixed operator/(Fixed const &rhs) const ;


private:
    int fixedPointValue;
    static const int NUM_FRAC_BITS = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif //CPP_MODULE_FIXED_H
