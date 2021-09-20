//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
	if(grade <= 0)
		throw GradeTooHighException("Grade to high.");
	else if(grade > 150)
		throw GradeTooLowException("Grade too low.");
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() {
	--_grade;
	if(_grade <= 0)
		throw GradeTooHighException("Grade too high.");
}

void Bureaucrat::decrementGrade() {
	++_grade;
	if(_grade > 150)
		throw GradeTooLowException("Grade too low.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << "name: " << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
	return out;
}

void Bureaucrat::signForm(const Form &form) {
	if(form.isIsSigned())
		std::cout << _name << " signs " << form << std::endl;
	else
		std::cout << "bureaucrat " << _name<< " cannot sign "<< form << " because it is not eligible." << std::endl;
}


/*
 * GradeTooHighException Implementation
 */

const char *Bureaucrat::GradeTooHighException::what() const throw() { return _error.c_str(); }

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &str) : std::exception(), _error(str) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}


/*
 * GradeTooLowException Implementation
 */

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &str) : _error(str) {}

const char *Bureaucrat::GradeTooLowException::what() const throw() { return _error.c_str(); }

Bureaucrat::GradeTooLowException::~GradeTooLowException() _NOEXCEPT {}
