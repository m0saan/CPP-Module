//
// Created by moboustt on 3/8/2021.
//

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain {

public:

	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

	void setIdeas();
	friend std::ostream& operator<<(std::ostream& out, const Brain &brain);

protected:
	std::string _ideas[100];
};


#endif // __BRAIN_HPP__
