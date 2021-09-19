//
// Created by moboustt on 4/8/2021.
//

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

class Form {

public:

	// Constructors and Destructor
	Form(const std::string &name, int gradeToExec, int gradeToSign);
	Form(const Form& other);
	~Form();

	// Overloaded operators.
	Form& operator=(const Form& other);

	// Other member functions
	void beSigned(const Bureaucrat& bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;


	// Getters and Setters
	const std::string &getName() const;
	bool isIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExec() const;


private:

	const std::string _name;
	bool 		_isSigned;
	const int	_gradeToExec;
	const int	_gradeToSign;


};

std::ostream& operator<<(std::ostream& out, const Form& form);


#endif // __FORM_HPP__
