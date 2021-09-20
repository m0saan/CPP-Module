//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {


	std::cout << GREEN << "*------------------- Creating a robotomy request form -------------------*" << RESET << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat b("haha", 5);
	rrf->beSigned(b);
	rrf->execute(b);
	std::cout << std::endl;


	std::cout << GREEN << "*------------------- Creating a shrubbery creation form -------------------*" << RESET << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Beaaaarish");
	rrf->beSigned(b);
	rrf->execute(b);

	return 0;
}