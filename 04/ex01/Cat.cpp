//
// Created by moboustt on 3/8/2021.
//

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain) {
	std::cout << "Cat constructor." << std::endl;
	_type = "Cat";
	_brain->setIdeas();
}

Cat::~Cat() {
	std::cout << "Cat destructor." << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other)  : Animal(other) {
	std::cout << "Cat copy constructor." << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}

Cat & Cat::operator=(const Cat &other) {
	if (this != &other)
	{
		std::cout << "Cat copy assignment operator." << std::endl;
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}

const std::string &Cat::getType() const {
	return Animal::getType();
}

const Brain &Cat::getBrain() const {
	return *_brain;
}

