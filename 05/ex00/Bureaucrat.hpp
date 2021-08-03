//
// Created by moboustt on 3/8/2021.
//

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>

class Bureaucrat {

public:

	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();

	const std::string &getName() const;

	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

private:

	const std::string _name;
	int 		_grade;
	Bureaucrat();
};


#endif // __BUREAUCRAT_HPP__
