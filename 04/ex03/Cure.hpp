//
// Created by moboustt on 3/8/2021.
//

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria{

public:

	Cure();
	virtual ~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);

	virtual AMateria *clone() const;

	virtual void use(ICharacter &target);
};


#endif // __CURE_HPP__
