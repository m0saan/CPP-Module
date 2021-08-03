//
// Created by moboustt on 3/8/2021.
//

#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__

#include <iostream>
#include <string>

#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif // __ICHARACTER_HPP__
