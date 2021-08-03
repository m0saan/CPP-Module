//
// Created by moboustt on 3/8/2021.
//

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor." << std::endl;
	_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor." << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor." << std::endl;
	_type = other._type;
}

Cat & Cat::operator=(const Cat &other) {
	if (this != &other)
	{
		std::cout << "Cat copy assignment operator." << std::endl;
		_type = other._type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}

const std::string &Cat::getType() const {
	return Animal::getType();
}
