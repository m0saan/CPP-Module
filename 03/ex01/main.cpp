//
// Created by moboustt on 3/2/2021.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(){
	ClapTrap clapTrap_belly("Belly");
	std::cout << clapTrap_belly;

	std::cout << std::endl << "*------ Constructing a ScavTrap ------*" << std::endl;

	ScavTrap scavTrap_jean("Jean");
	std::cout << scavTrap_jean;

	scavTrap_jean.attack("Eric");
	scavTrap_jean.beRepaired(20);
	scavTrap_jean.takeDamage(8);

	std::cout << scavTrap_jean << std::endl;
	scavTrap_jean.guardGate();

	scavTrap_jean.takeDamage(200);
	std::cout << scavTrap_jean;

	std::cout << std::endl << "*------ Constructing a ScavTrap from another Scavtrap ------*" << std::endl;

	ScavTrap scavTrapCopy(scavTrap_jean);
	std::cout << scavTrapCopy;

	std::cout << std::endl << "*------ Create a reference to ScavTrap ------*" << std::endl;
	ClapTrap &clapTrapRef = scavTrap_jean;
	clapTrapRef.beRepaired(10);

	std::cout << std::endl << "*------ Destructing created objects ------*" << std::endl;

    return 0;
}