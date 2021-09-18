//
// Created by moboustt on 5/8/2021.
//

#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:

	typedef Bureaucrat::GradeTooHighException GradeTooHighException;
	typedef Bureaucrat::GradeTooLowException GradeTooLowException;

	explicit ShrubberyCreationForm(std::string const & target);
	virtual ~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const;


private:
	std::string _target;
};


#endif // __SHRUBBERYCREATIONFORM_HPP__
