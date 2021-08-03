//
// Created by moboustt on 3/8/2021.
//

#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif // __IMATERIASOURCE_HPP__
