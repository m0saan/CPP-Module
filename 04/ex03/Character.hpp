//
// Created by moboustt on 3/8/2021.
//

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	explicit Character(const std::string& name);
	Character(const Character& other);
	virtual ~Character();
	const std::string &getName() const;

	Character& operator=(const Character& other);
	friend bool operator==(const Character& lhs, const Character& rhs);

	virtual void equip(AMateria *m);

	virtual void unequip(int idx);

	virtual void use(int idx, ICharacter &target);

private:

	std::string _name;
	AMateria*	_inventory[4];
};


#endif // __CHARACTER_HPP__
