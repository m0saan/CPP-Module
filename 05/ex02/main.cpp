//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"


int main(void) {

	std::cout << RED << "*------------------Testing the ShrubberyCreationForm------------------*" << RESET << std::endl;
	Bureaucrat bureaucrat1("haha", 1);
	Bureaucrat bureaucrat2("braiiz", 10);
	ShrubberyCreationForm scf("Home");
	std::cout << "name: " << scf.getName() << std::endl;
	std::cout << "GradeToExec: " << scf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << scf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try {
		scf.execute(bureaucrat1);
	} catch (std::exception &e) {
		std::cout << GREEN << e.what() << RESET << std::endl;
	}
	scf.beSigned(bureaucrat2);
	scf.execute(bureaucrat2);
	std::cout << std::endl;

	std::cout << RED << "*------------------Testing the RobotomyRequestForm------------------*" << RESET << std::endl;
	RobotomyRequestForm rrf("homeAgain");
	std::cout << "name: " << rrf.getName() << std::endl;
	std::cout << "GradeToExec: " << rrf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << rrf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try {
		rrf.execute(bureaucrat1);
	} catch (std::exception &e) {
		std::cout << GREEN << e.what() << RESET << std::endl;
	}
	rrf.beSigned(bureaucrat2);
	rrf.execute(bureaucrat2);
	std::cout << std::endl;

	std::cout << RED << "*------------------Testing the PresidentialPardonForm------------------*" << RESET << std::endl;
	Bureaucrat bureaucrat3("haha", 4);
	PresidentialPardonForm ppf("homeAgain");
	std::cout << "name: " << ppf.getName() << std::endl;
	std::cout << "GradeToExec: " << ppf.getGradeToExec() << std::endl;
	std::cout << "GradeToSign: " << ppf.getGradeToSign() << std::endl;
	std::cout << std::endl;

	try {
		ppf.execute(bureaucrat3);
	} catch (std::exception &e) {
		std::cout << GREEN << e.what() << RESET << std::endl;
	}
	ppf.beSigned(bureaucrat3);
	ppf.execute(bureaucrat3);
}