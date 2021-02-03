//
// Created by moboustt on 2/2/2021.
//

#include "Fixed.h"
#define FIXED_POINT_ONE (1 << 8)


Fixed::Fixed() : fixedPointValue(0) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
    return fixedPointValue;
}

void Fixed::setRawBits(int const fixedPointValue) {
    this->fixedPointValue = fixedPointValue;
}

Fixed::Fixed(Fixed const &other) {
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    if (this != &other)
        this->fixedPointValue = other.getRawBits();
    return *this;
}

Fixed::Fixed(const int x) {
    fixedPointValue = (x << Fixed::NUM_FRAC_BITS);
}

Fixed::Fixed(const float f)  {
    fixedPointValue = std::roundf(f * FIXED_POINT_ONE);
}

float Fixed::toFloat() const {
    return (float )fixedPointValue / FIXED_POINT_ONE;
}

int Fixed::toInt() const {
    return fixedPointValue >> NUM_FRAC_BITS;
}

bool Fixed::operator>(Fixed const &rhs) const {
    return this->fixedPointValue > rhs.fixedPointValue;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->fixedPointValue < rhs.fixedPointValue;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->getRawBits() <= rhs.getRawBits();;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->getRawBits() == rhs.getRawBits();;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return !(*this == rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    return Fixed(this->getRawBits() + this->getRawBits());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(this->getRawBits() - this->getRawBits());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.getRawBits() > 0)
        return Fixed(this->getRawBits() * rhs.getRawBits());
    else throw std::runtime_error ("Cannot divide by zero");
}

Fixed Fixed::operator++(int) {
    Fixed fixed(*this);
    ++fixedPointValue;
    return fixed;
}

Fixed &Fixed::operator++() {
    this->fixedPointValue++;
    return *this;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if(fixed1.fixedPointValue < fixed2.fixedPointValue) return fixed1;
    else return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
    if(fixed1.fixedPointValue < fixed2.fixedPointValue) return fixed1;
    else return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if(fixed1.fixedPointValue > fixed2.fixedPointValue) return fixed1;
    else return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
    if(fixed1.fixedPointValue > fixed2.fixedPointValue) return fixed1;
    else return fixed2;
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}
