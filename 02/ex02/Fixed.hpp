//
// Created by moboustt on 2/2/2021.
//

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();

	Fixed(int x);

	Fixed(float f);

	Fixed(const Fixed &other);

	~Fixed();

	Fixed &operator=(const Fixed &other);

	int getRawBits() const;

	void setRawBits(int raw);

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
	Fixed operator+(Fixed const &rhs) const;

	Fixed operator-(Fixed const &rhs) const;

	Fixed operator*(Fixed const &rhs) const;

	Fixed operator/(Fixed const &rhs) const;

	Fixed operator++(int);

	Fixed &operator++();

	static Fixed &min(Fixed &fixed1, Fixed &fixed2);

	static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);

	static Fixed &max(Fixed &fixed1, Fixed &fixed2);

	static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

private:
	int fixedPointValue;
	static const int NUM_FRAC_BITS = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif // __FIXED_HPP__
