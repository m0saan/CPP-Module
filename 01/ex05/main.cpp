//
// Created by moboustt on 31/1/2021.
//

#include "Karen.hpp"

int main() {

	Karen k;
	std::cout << std::endl;

	k.complain(std::string("warning"));
	std::cout << std::endl;

	k.complain(std::string("info"));
	std::cout << std::endl;

	k.complain(std::string("debug"));
	std::cout << std::endl;

	k.complain(std::string("error"));
	std::cout << std::endl;
	return 0;
}
