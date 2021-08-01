//
// Created by moboustt on 1/8/2021.
//

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:

	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap &operator=(DiamondTrap const& other);
	~DiamondTrap();

	friend std::ostream &operator<<(std::ostream &out, DiamondTrap const & diamondTrap);

	void    attack(std::string const & target);
	void    takeDamage(uint32_t amount);
	void    beRepaired(uint32_t amount);

	void whoAmI();

private:

	DiamondTrap();
	std::string name;
};


#endif //__DIAMONDTRAP_H__
