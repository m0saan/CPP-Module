//
// Created by moboustt on 4/8/2021.
//

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToExec, int gradeToSign) :
		_name(name),
		_isSigned(false),
		_gradeToExec(gradeToExec),
		_gradeToSign(gradeToSign) {
	if (gradeToExec < 1 || gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high.");
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low.");
}

Form::~Form() {}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException("Grade too low.");
}

const std::string &Form::getName() const {
	return _name;
}

bool Form::isIsSigned() const {
	return _isSigned;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExec() const {
	return _gradeToExec;
}

Form::Form(const Form &other) :
		_name(other._name),
		_isSigned(other._isSigned),
		_gradeToExec(other._gradeToExec),
		_gradeToSign(other._gradeToSign) {
}

Form &Form::operator=(const Form &other) {
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "name: " << form.getName() << std::endl;
	out << "is signed: " << form.isIsSigned() << std::endl;
	out << "grade to exec: " << form.getGradeToExec() << std::endl;
	out << "grade to sign: " << form.getGradeToSign() << std::endl;
	return out;
}

