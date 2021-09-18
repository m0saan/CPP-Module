//
// Created by moboustt on 18/9/2021.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
		Form(target, 5, 25) {}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if(this->isIsSigned() && executor.getGrade() <= this->getGradeToExec())
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	else
		throw GradeTooLowException("Grade too low.");
}
