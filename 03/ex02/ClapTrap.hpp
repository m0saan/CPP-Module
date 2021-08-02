//
// Created by moboustt on 3/2/2021.
//

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <string>
#include <iostream>


class ClapTrap {

public:

	// Constructors and Destructor.
	explicit ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap();

	// Copy assignment operator.
	ClapTrap &operator=(ClapTrap const &other);

	// class's member functions.
	virtual void    attack(std::string const & target);
	virtual void    takeDamage(uint32_t amount);
	virtual void    beRepaired(uint32_t amount);

	friend std::ostream &operator<<(std::ostream &out, ClapTrap const & clapTrap);

protected:

	std::string m_Name;
	int         m_HitPoints;
	int         m_EnergyPoints;
	int         m_AttackDamage;
	ClapTrap();

};

#endif // __CLAPTRAP_H__
