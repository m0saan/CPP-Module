//
// Created by moboustt on 3/2/2021.
//

#include "DiamondTrap.hpp"

void testDiamondTrap()
{
	std::cout << "************************* Testing FragTrap *************************" << std::endl;
	DiamondTrap dt("frag");
	dt.whoAmI();
	std::cout << std::endl << dt << std::endl;

	dt.attack("Eric");
	dt.takeDamage(10);
	dt.beRepaired(15);
}

int main() {
	testDiamondTrap();
    return 0;
}