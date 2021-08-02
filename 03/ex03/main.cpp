//
// Created by moboustt on 3/2/2021.
//

#include "DiamondTrap.hpp"

int main() {

	std::cout << std::endl << "------ Constructing a DiamondTrap ------" << std::endl;
	DiamondTrap dtWiss("Wiss");
	std::cout << std::endl << dtWiss;
	dtWiss.whoAmI();
	 DiamondTrap *dTrap = new DiamondTrap("Jean");
	std::cout << std::endl << *dTrap;
	dTrap->whoAmI();

	dtWiss.attack("Mckinny");
	dTrap->attack("Eric");
	dtWiss.takeDamage(10);
	dTrap->beRepaired(5);

	DiamondTrap diamondTrapCopy(dtWiss);
	std::cout << std::endl << diamondTrapCopy;

	std::cout << std::endl << "------ Destructing created objects ------" << std::endl;
    return 0;
}