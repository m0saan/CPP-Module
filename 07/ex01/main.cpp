//
// Created by moboustt on 6/8/2021.
//

#include "Iter.hpp"

void multiplyByTwo(int t) {
	std::cout << t * 2 << std::endl;
}

void multiplyByTwoDouble(double t) {
	std::cout << t * 2 << std::endl;
}

void toUpper(char c) {
	std::cout << static_cast<char>(toupper(c)) << std::endl;
}

int main() {
	std::cout << "****************** Testing with an array of ints ******************" << std::endl;
	int intArr[] =  {1,2,3,4,5,6,7,8};
	::Iter(intArr, 8, multiplyByTwo);

	std::cout << std::endl << "****************** Testing with an array of double ******************" << std::endl;
	double doubleArr[] = {1.8,2.2,3.6,4.,5.5,6.1,7.2,8.22};
	::Iter(doubleArr, 8, multiplyByTwoDouble);

	std::cout << std::endl << "****************** Testing with an array of chars ******************" << std::endl;
	char characters[] = {'h', 'e', 'l','l', 'o', ' ', ',', 'w', 'o','r','l','d', '\0' };
	::Iter(characters, 12, toUpper);
	return 0;
}