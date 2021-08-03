//
// Created by moboustt on 3/8/2021.
//

#include "Brain.hpp"
#include <sstream>

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

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator" << std::endl;

	if(this != &other) {
		for(int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
	out << "[ ";
	for(int i = 0; i < 100; ++i) {
		out << brain._ideas[i] << " ,";
	}
	out << " ]" << std::endl;
	return out;
}

void Brain::setIdeas() {
	std::string idea (
			" abstraction,cogitation,concept,conception,image,impression,intellection,"
			"mind's eye,notion,picture,thought,Words,Related,to idea,apprehension,premonition,"
			"presentiment,preconception,prejudice,prepossession,chimera,delusion,hallucination,"
			"illusion,phantasm,caprice,conceit,fancy,freak,kink,vagary,whim,cognition,observation,"
			"perception,reflection,assumption,belief,conclusion,conviction,conjecture,guess,hunch,"
			"hypothesis,speculation,supposition,surmise,theory,brainchild,brainstorm,brain,wave,inspiration");
	std::stringstream ss(idea);
	std::string word;
	int i = 0;
	while(std::getline(ss, word, ',') && i < 100)
		_ideas[i++] = word;
	if (i<100)
		while(i < 100)
			_ideas[i++] = "No Idea.";
}
