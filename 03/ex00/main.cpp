//
// Created by moboustt on 3/2/2021.
//

#include "ClapTrap.hpp"
#include <iostream>

int main(){
    ClapTrap clapTrap("PIVOX");
    std::cout << clapTrap;

    clapTrap.attack("Eric");
    clapTrap.beRepaired(20);
    clapTrap.takeDamage(8);

    std::cout << clapTrap;

    return 0;
}
