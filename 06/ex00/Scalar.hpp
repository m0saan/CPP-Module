//
// Created by moboustt on 5/8/2021.
//

#ifndef __SCALAR_HPP__
#define __SCALAR_HPP__

#include <string>
#include <iostream>
#include <cmath>

#include "OutPut.hpp"


class Scalar {
public:
	explicit Scalar(const std::string& input);
	~Scalar();

	void parseInput();
	bool checkInput();

	bool isZero();
	bool isInt();
	bool isFloat();
	bool isDouble();

private:
	std::string _input;
	char	_chLiteral;
	int		_intLiteral;
	float	_floatLiteral;
	double	_doubleLiteral;
};

int exit_error(std::string const &error, int exit_code);

#endif // __SCALAR_HPP__
