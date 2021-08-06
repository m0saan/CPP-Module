//
// Created by moboustt on 5/8/2021.
//

#include "Scalar.hpp"

Scalar::Scalar(const std::string &input) : _input(input) { }

Scalar::~Scalar() {}

void Scalar::parseInput() {
	// if(isFloat())
}

bool Scalar::checkInput() {
	if (isZero()) {
		OutPut("Non displayable", "0", "0.0f", "0.0");
		return true;
	}
	if(_input == _NAN || _input == NANF) {
		OutPut("impossible", "impossible", NANF, _NAN);
		return true;
	} else if(_input == MINF || _input == MINFF) {
		OutPut("impossible", "impossible", MINFF, MINF);
		return true;
	} else if(_input == PINF || _input == PINFF) {
		OutPut("impossible", "impossible", PINFF, PINF);
		return true;
	}
	for(size_t i = 0; i < _input.size(); ++i) {
		if (_input[0] == '-' || _input[0] == '+') continue;
		if(_input[i] != '.' && !isdigit(_input[i]) && _input[i] != 'f')
			exit_error("conversion is impossible.", EXIT_FAILURE);
	}
	try {
	long long ll = std::stoll(_input);
	if (ll > std::numeric_limits<int64_t>::max() || ll < std::numeric_limits<int64_t>::min())
		exit_error("conversion is impossible.", EXIT_FAILURE);
	} catch (std::exception &e) {
		//std::cout << "conversion is impossible." << std::endl;
	}
	return false;
}

bool Scalar::isZero() {
	for(size_t i = 0; i < _input.size(); ++i) {
		if (i == 0 &&_input[i] == '-' || _input[i] == '+') continue;
		if(_input[i] != '0' && _input[i] != '.')
			return false;
	}
	return true;
}

bool Scalar::isInt() {
	for(size_t i = 0; i < _input.size(); ++i) {
		if (i == 0 &&_input[i] == '-' || _input[i] == '+') continue;
		if(!isdigit(_input[i]))
			return false;
	}
	return true;
}

bool Scalar::isFloat() {
	if(_input[_input.size() - 1] == 'f') {
		for(size_t i = 0; i < _input.size(); ++i) {
			if (i == 0 &&_input[i] == '-' || _input[i] == '+') continue;
			if(isdigit(_input[i])) continue;
			if(_input.at(i) == '.')
				return true;
		}
	}
	return false;
}

bool Scalar::isDouble() {
	if(_input[_input.size() - 1] != 'f') {
		for(size_t i = 0; i < _input.size(); ++i) {
			if (i == 0 &&_input[i] == '-' || _input[i] == '+') continue;
			if(isdigit(_input[i])) continue;
			if(_input.at(i) == '.')
				return true;
		}
	}
	return false;
}