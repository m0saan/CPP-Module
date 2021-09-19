//
// Created by moboustt on 18/9/2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
		: Form(target, 45, 72) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->isIsSigned() && executor.getGrade() <= this->getGradeToExec()) {
		srand(time(NULL));
		int r = rand() % 2;
		if (r)
			std::cout << this->getName() << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << "it's a failure." << std::endl;
	} else
		throw GradeTooLowException("Grade too low.");
}

