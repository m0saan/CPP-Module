//
// Created by moboustt on 3/8/2021.
//

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal {
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal &operator=(const Animal& other);
	virtual void makeSound() const = 0;
	virtual const std::string& getType() const = 0;

protected:
	std::string _type;
};


#endif // __ANIMAL_H__
