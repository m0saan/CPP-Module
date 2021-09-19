//
// Created by moboustt on 18/9/2021.
//

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public  Form {
public:

	typedef Bureaucrat::GradeTooHighException GradeTooHighException;
	typedef Bureaucrat::GradeTooLowException GradeTooLowException;

	explicit PresidentialPardonForm(const std::string &target);

	virtual ~PresidentialPardonForm();

	void execute(const Bureaucrat &executor) const;
};


#endif // __PRESIDENTIALPARDONFORM_HPP__
