//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef _FRAGTRAP_H__
#define _FRAGTRAP_H__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap();
	explicit FragTrap(std::string const& name);
	FragTrap(FragTrap const &scavTrap);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	friend std::ostream &operator<<(std::ostream &out, FragTrap const & fragTrap);

	void    attack(std::string const & target);

	void highFivesGuys(void);
};


#endif // _FRAGTRAP_H__
