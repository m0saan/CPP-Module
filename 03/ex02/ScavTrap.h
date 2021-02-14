//
// Created by Mohammad  Boustta on 2/6/21.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include <string>
#include <iostream>
#include <random>

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {

public:
    ScavTrap();
    explicit ScavTrap(std::string const& pName);
    ScavTrap(ScavTrap const &scavTrap);
    virtual ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    void challengeNewcomer(std::string const &target);

private:
    static const std::size_t nOfChallenges = 5;
    static std::string funnyChallenges[5];
};


#endif //CPP_MODULE_SCAVTRAP_H
