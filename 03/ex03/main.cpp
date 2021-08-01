//
// Created by moboustt on 3/2/2021.
//

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {

	std::cout << std::endl << "------ Constructing a ScavTrap ------" << std::endl;

	FragTrap fragTrapJon("Jean");
	std::cout << fragTrapJon;

	fragTrapJon.attack("Eric");
	fragTrapJon.beRepaired(5);
	fragTrapJon.takeDamage(10);

	std::cout << fragTrapJon << std::endl;
	fragTrapJon.highFivesGuys();

	fragTrapJon.takeDamage(200);
    return 0;
}