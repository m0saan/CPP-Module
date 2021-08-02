//
// Created by moboustt on 3/2/2021.
//

enum COLORS {

};

#include "DiamondTrap.hpp"

void testClapTrap()
{
	std::cout << "************************* Testing ClapTrap *************************" << std::endl;

	DiamondTrap dt("Wiss");
	ClapTrap *clapTrap = &dt;
	std::cout << std::endl << *clapTrap << std::endl;

	clapTrap->attack("Eric");
	clapTrap->takeDamage(10);
	clapTrap->beRepaired(15);

	std::cout << std::endl;

	ScavTrap st("SCAV");
	clapTrap = &st;
	std::cout << std::endl << *clapTrap << std::endl;

	clapTrap->attack("Bobby");
	clapTrap->takeDamage(5);
	clapTrap->beRepaired(7);

	std::cout <<  std::endl << "DONE!!" << std::endl;
}

void testScaTrap()
{
	std::cout << "************************* Testing ScavTrap *************************" << std::endl;
	DiamondTrap dt("Jonathan");
	dt.whoAmI();
	ScavTrap *st = &dt;
	std::cout << std::endl << st << std::endl;

	st->attack("Eric");
	st->takeDamage(10);
	st->beRepaired(15);
	std::cout <<  std::endl << "DONE!!" << std::endl;
}

void testFragTrap()
{
	std::cout << "************************* Testing FragTrap *************************" << std::endl;
	DiamondTrap dt("frag");
	dt.whoAmI();
	FragTrap *ft = &dt;
	std::cout << std::endl << ft << std::endl;

	ft->attack("Eric");
	ft->takeDamage(10);
	ft->beRepaired(15);
	std::cout <<  std::endl << "DONE!!" << std::endl;
}

void testDiamondTrap()
{
	std::cout << "************************* Testing FragTrap *************************" << std::endl;
	DiamondTrap dt("frag");
	dt.whoAmI();
	std::cout << std::endl << dt << std::endl;

	dt.attack("Eric");
	dt.takeDamage(10);
	dt.beRepaired(15);
	std::cout <<  std::endl << "DONE!!" << std::endl;
}

int main() {
	testClapTrap();
	// testFragTrap();
	// testScaTrap();
	// testDiamondTrap();
    return 0;
}