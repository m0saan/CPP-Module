//
// Created by moboustt on 3/8/2021.
//

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain) {
	std::cout << "Dog constructor." << std::endl;
	_type = "Dog";
	_brain->setIdeas();
}

Dog::~Dog() {
	std::cout << "Dog destructor." << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other)  : Animal(other) {
	std::cout << "Dog copy constructor." << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}

Dog & Dog::operator=(const Dog &other) {
	if (this != &other)
	{
		std::cout << "Dog copy assignment operator." << std::endl;
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!!" << std::endl;
}

const std::string &Dog::getType() const {
	return Animal::getType();
}

const Brain &Dog::getBrain() const {
	return *_brain;
}
