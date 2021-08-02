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

    std::cout << "--------- Creating a ClapTrap copy <Using copy constructor> ---------" << std::endl;
    ClapTrap clapTrapCopy(clapTrap);
    std::cout << clapTrapCopy;

	std::cout << "--------- Creating a ClapTrap copy <Using copy assignment operator> ---------" << std::endl;
	ClapTrap clapTrapBiter("Biter");
	clapTrapCopy = clapTrapBiter;
	std::cout << clapTrapCopy;

    return 0;
}
