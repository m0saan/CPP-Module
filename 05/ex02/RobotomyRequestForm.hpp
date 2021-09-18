//
// Created by moboustt on 18/9/2021.
//

#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:

	typedef Bureaucrat::GradeTooHighException GradeTooHighException;
	typedef Bureaucrat::GradeTooLowException GradeTooLowException;

	explicit RobotomyRequestForm(std::string const &target);

	virtual ~RobotomyRequestForm();

	void execute(const Bureaucrat &executor) const;
};


#endif // __ROBOTOMYREQUESTFORM_HPP__
