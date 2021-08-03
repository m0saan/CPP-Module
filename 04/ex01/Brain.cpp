//
// Created by moboustt on 3/8/2021.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor." << std::endl;
}

Brain::Brain(const Brain &other) {
	for(int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructor." << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator" << std::endl;

	if (this != &other)
	{
		for(int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}