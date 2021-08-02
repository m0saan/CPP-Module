//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef _SCAVTRAP_H__
#define _SCAVTRAP_H__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

    ScavTrap();
    explicit ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const &scavTrap);
    virtual ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &other);

	friend std::ostream &operator<<(std::ostream &out, ScavTrap const & scavTrap);

	virtual void    attack(std::string const & target);
	virtual void    takeDamage(uint32_t amount);
	virtual void    beRepaired(uint32_t amount);

	void guardGate();
};


#endif // __SCAVTRAP_H__
