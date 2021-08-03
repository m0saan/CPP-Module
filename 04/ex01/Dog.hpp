//
// Created by moboustt on 3/8/2021.
//

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog& other);
	virtual ~Dog();

	virtual void makeSound() const;
	virtual const std::string& getType() const;

private:

	Brain *_brain;
};


#endif // __DOG_HPP__
