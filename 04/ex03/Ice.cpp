//
// Created by moboustt on 3/8/2021.
//

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Ice constructor." << std::endl;
}

Ice::~Ice() {
	// std::cout << "Ice destructor." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)  {
	// std::cout << "Ice copy constructor." << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
