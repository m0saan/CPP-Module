//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"


int main()
{
	Bureaucrat b1("mosan", 15);
	std::cout << b1 << std::endl;

	for(int i = 0; i < 14; ++i)
		b1.incrementGrade();

	std::cout << b1 << std::endl;

	b1.incrementGrade();

	std::cout << b1 << std::endl;

	for(int i = 0; i < 151; ++i)
		b1.decrementGrade();

	std::cout << b1 << std::endl;


	Bureaucrat b2("mamoussa", 0);
	return 0;
}