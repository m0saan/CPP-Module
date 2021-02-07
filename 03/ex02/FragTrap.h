//
// Created by moboustt on 3/2/2021.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include <string>
#include <iostream>

#include "ClapTrap.h"

class FragTrap : public ClapTrap {

public:
    FragTrap();
    explicit FragTrap(std::string const &name);
    FragTrap(FragTrap const &fragTrap);
    ~FragTrap();

    FragTrap &operator=(FragTrap const &fragTrap);
    void vaulthunter_dot_exe(const std::string &target);
};


#endif //CPP_MODULE_FRAGTRAP_H
