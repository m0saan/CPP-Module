//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include <string>
#include <iostream>

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {

public:
    ScavTrap();
    explicit ScavTrap(std::string const& pName);
    ScavTrap(ScavTrap const &scavTrap);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    void challengeNewcomer() const;
};


#endif //CPP_MODULE_SCAVTRAP_H
