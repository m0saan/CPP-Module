//
// Created by moboustt on 3/8/2021.
//

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat& other);
	virtual ~Cat();

	virtual void makeSound() const;
	virtual const std::string& getType() const;

private:

	Brain *_brain;
};


#endif // __CAT_HPP__
