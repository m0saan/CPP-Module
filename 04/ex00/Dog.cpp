//
// Created by moboustt on 3/8/2021.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor." << std::endl;
	_type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor." << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor." << std::endl;
	_type = other._type;
}

Dog & Dog::operator=(const Dog &other) {
	if (this != &other)
	{
		std::cout << "Dog copy assignment operator." << std::endl;
		_type = other._type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!!" << std::endl;
}

const std::string &Dog::getType() const {
	return Animal::getType();
}
