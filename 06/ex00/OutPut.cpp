//
// Created by moboustt on 5/8/2021.
//

#include "OutPut.hpp"

OutPut::OutPut(const std::string &chOut, const std::string &intOut, const std::string &floatOut,
			   const std::string &doubleOut) {
	std::cout << "char: " << chOut << std::endl;
	std::cout << "int: " << intOut << std::endl;
	std::cout << "float: " << floatOut << std::endl;
	std::cout << "double: " << doubleOut << std::endl;
}

OutPut::OutPut(char chOut, int intOut, float floatOut, double doubleOut, bool add_0) {
	if (static_cast<int>(chOut) > 32 && static_cast<int>(chOut) < 128)
		std::cout << "char: '" << chOut << "'" << std::endl;
	else
		std::cout << "char: Non Displayable." << std::endl;
	std::cout << "int: " << intOut << std::endl;
	if (add_0)
	{
		std::cout << "float: " << floatOut << ".0f" << std::endl;
		std::cout << "double: " << doubleOut << ".0" << std::endl;
	} else {
		std::cout << "float: " << floatOut << 'f' << std::endl;
		std::cout << "double: " << doubleOut << std::endl;
	}
}
