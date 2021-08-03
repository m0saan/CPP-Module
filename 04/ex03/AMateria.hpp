//
// Created by moboustt on 3/8/2021.
//

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{

public:

	explicit AMateria(std::string const & type);
	AMateria(const AMateria& other);
	virtual ~AMateria();
	AMateria &operator=(const AMateria& other);
	std::string const & getType() const; // Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:

	std::string _type;
};


#endif // __AMATERIA_HPP__
