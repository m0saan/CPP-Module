//
// Created by Mohammad  Boustta on 2/6/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap Default constructor called" << std::endl;
	m_HitPoints =  100;
	m_EnergyPoints = 100;
	m_AttackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	m_HitPoints =  other.m_HitPoints;
	m_EnergyPoints = other.m_EnergyPoints;
	m_AttackDamage = other.m_AttackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		std::cout << "FragTrap constructor called" << std::endl;
		m_HitPoints =  other.m_HitPoints;
		m_EnergyPoints = other.m_EnergyPoints;
		m_AttackDamage = other.m_AttackDamage;
	}
	return *this;
}

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << m_Name << " attacks " << target << " causing ";
	std::cout << m_HitPoints << " points of damage!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, FragTrap const & scavTrap) {
	std::cout << "Name: " << scavTrap.m_Name << " HP: " << scavTrap.m_HitPoints
			  << " EP: " << scavTrap.m_EnergyPoints << " Attack Damage: " << scavTrap.m_AttackDamage << std::endl;
	return out;
}

void FragTrap::highFivesGuys() {
	std::cout << "\033[1;32m";

	std::cout << "   _.-._" << std::endl;
	std::cout << "  | | | |_ " << std::endl;
	std::cout << "  | | | | | " << std::endl;
	std::cout << "  | | | | | " << std::endl;
	std::cout << "_ |  '-._ | " << std::endl;
	std::cout << "\\`\\`-.'-._; " << std::endl;
	std::cout << " \\    '   | " << std::endl;
	std::cout << "  \\  .`  / " << std::endl;
	std::cout << "   |    | " << std::endl;

	std::cout << "\033[0m";
}
