//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"


int main(void)
{
	Form ff("", 3, 2);
	Bureaucrat ss("haha", 1);
	try {
		ss.incrementGrade();
		std::cout << ff << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << "Exception caught: "<< e.what() << RESET <<std::endl;
	}

	Bureaucrat b2("haha", 1);
	ff.beSigned(b2);
	b2.signForm(ff);
}