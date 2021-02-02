//
// Created by moboustt on 2/2/2021.
//

#include "Fixed.h"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointValue;
}

void Fixed::setRawBits(int const fixedPointValue) {
    std::cout << "setRawBits member function called" << std::endl;
    Fixed::fixedPointValue = fixedPointValue;
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


/*
 Default constructor called
Copy constructor called
Assignation operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Assignation operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
 */

