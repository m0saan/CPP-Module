//
// Created by moboustt on 3/2/2021.
//

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor called" << std::endl;
	m_Name = "";
	m_HitPoints = 10;
	m_EnergyPoints = 10;
	m_AttackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &pName) : m_Name(pName) {
	std::cout << "ClapTrap constructor called" << std::endl;
	m_HitPoints = 10;
	m_EnergyPoints = 10;
	m_AttackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & other) {
	if (this != &other) {
		std::cout << "ClapTrap copy assignment operator" << std::endl;
		this->m_Name = other.m_Name;
		this->m_HitPoints = other.m_HitPoints;
		this->m_EnergyPoints = other.m_EnergyPoints;
		this->m_AttackDamage = other.m_AttackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = other;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << m_Name << " attacks " << target << " causing ";
	std::cout << m_HitPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(uint32_t amount) {

	if (m_HitPoints - amount < 0) return ;
	m_HitPoints -= amount;
	if (m_HitPoints < 0) m_HitPoints = 0;
	std::cout << "<" << m_Name << "> * takes damage for "<< amount << " hit points *" << std::endl;
}

void ClapTrap::beRepaired(uint32_t amount) {
	m_HitPoints += amount;
	std::cout << "ClapTrap "  << m_Name << " got " << amount << " of Sweet life juice! " << std::endl;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const & clapTrap) {
	out << "Name: " << clapTrap.m_Name << " HP: " << clapTrap.m_HitPoints
		<< " EP: " << clapTrap.m_EnergyPoints << " Attack Damage: " << clapTrap.m_AttackDamage << std::endl;
	return out;
}