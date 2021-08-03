//
// Created by moboustt on 3/8/2021.
//

#ifndef _MATERIASOURCE_HPP__
#define _MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

	virtual void learnMateria(AMateria *materia);
	virtual AMateria *createMateria(const std::string &type);

private:

	AMateria* _inventory[4];
};


#endif // _MATERIASOURCE_HPP__
