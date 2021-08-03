//
// Created by moboustt on 3/8/2021.
//

#include "Cure.hpp"
#include "ICharacter.hpp"


Cure::Cure() : AMateria("cure") {
	//std::cout << "Cure constructor." << std::endl;
}

Cure::~Cure() {
	//std::cout << "Cure destructor." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
	//std::cout << "Cure copy constructor constructor." << std::endl;
}

Cure& Cure::operator=(const Cure &other) {
	//std::cout << "Cure copy assignment operator." << std::endl;
	if (this != &other)
	{

	}
	return *this;
}
AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}