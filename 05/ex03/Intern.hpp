//
// Created by Mohammad  Boustta on 9/19/21.
//

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <string>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

	Form* makeForm(const std::string &formName, const std::string &formTarget);
};


#endif // __INTERN_HPP__
