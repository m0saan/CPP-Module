//
// Created by moboustt on 3/8/2021.
//

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type) : _type(type) {
	// std::cout << "AMateria constructor." << std::endl;
}

AMateria::~AMateria() {
	// std::cout << "AMateria destructor." << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type) {
	// std::cout << "AMateria copy constructor." << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other) {
	// std::cout << "AMateria copy assignment constructor." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << std::endl;
}
