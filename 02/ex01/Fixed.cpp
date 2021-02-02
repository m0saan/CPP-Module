//
// Created by moboustt on 2/2/2021.
//

#include "Fixed.h"
#define FIXED_POINT_ONE (1 << 8)


Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return fixedPointValue;
}

void Fixed::setRawBits(int const fixedPointValue) {
    this->fixedPointValue = fixedPointValue;
}

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        this->fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::Fixed(const int x) {
    std::cout << "Int constructor called" << std::endl;
    fixedPointValue = (x << Fixed::NUM_FRAC_BITS);
}

Fixed::Fixed(const float f)  {
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = std::roundf(f * FIXED_POINT_ONE);
}

float Fixed::toFloat() const {
    return (float )fixedPointValue / FIXED_POINT_ONE;
}

int Fixed::toInt() const {
    return fixedPointValue >> NUM_FRAC_BITS;
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}
