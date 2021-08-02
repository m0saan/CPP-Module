//
// Created by Mohammad  Boustta on 2/6/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	m_HitPoints =  100;
    m_EnergyPoints = 50;
    m_AttackDamage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    m_HitPoints =  other.m_HitPoints;
    m_EnergyPoints = other.m_EnergyPoints;
    m_AttackDamage = other.m_AttackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        std::cout << "ScavTrap constructor called" << std::endl;
        m_HitPoints =  other.m_HitPoints;
        m_EnergyPoints = other.m_EnergyPoints;
        m_AttackDamage = other.m_AttackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << m_Name << " attacks " << target << " causing ";
	std::cout << m_HitPoints << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(uint32_t amount) {
	ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(uint32_t amount) {
	m_HitPoints += amount;
	std::cout << "ScavTrap "  << m_Name << " got " << amount << " of Sweet life juice! " << std::endl;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const & scavTrap) {
	std::cout << "Name: " << scavTrap.m_Name << " HP: " << scavTrap.m_HitPoints
			  << " EP: " << scavTrap.m_EnergyPoints << " Attack Damage: " << scavTrap.m_AttackDamage << std::endl;
	return out;
}

void ScavTrap::guardGate() {
	std::cout << "Yayyy!! ScavTrap have entered in Gate keeper mode." << std::endl;
}
