//
// Created by moboustt on 3/8/2021.
//

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>
#include <exception>

# define BLUE "\e[0;34m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[1;33m"
# define RESET "\e[0m"

class Form;

class Bureaucrat {

public:

	class GradeTooHighException : public std::exception {

	public:

		explicit GradeTooHighException(const std::string& str) ;

		const char *what() const throw();

		~GradeTooHighException() _NOEXCEPT;

	private:
		std::string _error;
	};

	class GradeTooLowException : public std::exception {

	public:

		explicit GradeTooLowException(const std::string& str);

		const char *what() const throw();

		~GradeTooLowException() _NOEXCEPT;

	private:
		std::string _error;
	};

	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	void signForm(const Form& form);

private:

	const std::string _name;
	int 		_grade;
	Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif // __BUREAUCRAT_HPP__
