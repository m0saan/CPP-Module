//
// Created by moboustt on 1/8/2021.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	m_HitPoints = FragTrap::m_HitPoints;
	m_EnergyPoints = ScavTrap::m_EnergyPoints;
	m_AttackDamage = FragTrap::m_AttackDamage;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap &other) {
	std::cout << "DiamondTrap copy assignment operator." << std::endl;
	swap(*this, other);
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is: " << _name << " my ClapTrap name is: " << ClapTrap::m_Name << std::endl;
}

void swap(DiamondTrap &first, DiamondTrap &second) {
	using std::swap;

	swap(first._name, second._name);
	swap(first.m_Name, second.m_Name);
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &diamondTrap) {
	out << "Name: " << diamondTrap._name << " HP: " << diamondTrap.m_HitPoints
			  << " EP: " << diamondTrap.m_EnergyPoints << " Attack Damage: " << diamondTrap.m_AttackDamage << std::endl;
	return out;
}

void DiamondTrap::takeDamage(uint32_t amount) {
	FragTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(uint32_t amount) {
	FragTrap::beRepaired(amount);
}

