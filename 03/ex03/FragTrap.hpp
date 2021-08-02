//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	explicit FragTrap(std::string const& name);
	FragTrap(FragTrap const &scavTrap);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	friend std::ostream &operator<<(std::ostream &out, FragTrap const & fragTrap);

	void    attack(std::string const & target);
	void    takeDamage(uint32_t amount);
	void    beRepaired(uint32_t amount);

	void highFivesGuys(void);

private:
	FragTrap();
};


#endif // __FRAGTRAP_H__
