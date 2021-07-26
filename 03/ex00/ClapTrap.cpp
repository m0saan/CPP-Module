//
// Created by moboustt on 3/2/2021.
//

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default constructor called" << std::endl;
    m_Name = "";
    m_HitPoints = 10;
    m_EnergyPoints = 10;
    m_AttackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &pName) : m_Name(pName) {
    std::cout << "ClapTrap Default constructor called with 1 parameter" << std::endl;
	m_HitPoints = 10;
	m_EnergyPoints = 10;
	m_AttackDamage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & other) {
    if (this != &other) {
        this->m_Name = other.m_Name;
        this->m_HitPoints = other.m_HitPoints;
        this->m_EnergyPoints = other.m_EnergyPoints;
        this->m_AttackDamage = other.m_AttackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    this->m_Name = other.m_Name;
    this->m_HitPoints = other.m_HitPoints;
    this->m_EnergyPoints = other.m_EnergyPoints;
    this->m_AttackDamage = other.m_AttackDamage;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_HitPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(uint32_t amount) {

    if (m_EnergyPoints - amount < 0)
        return ;
    m_EnergyPoints -= amount;
    std::cout << "<" << m_Name << "> * takes damage for "<< amount << " hit points *" << std::endl;
}

void ClapTrap::beRepaired(uint32_t amount) {
    m_EnergyPoints += amount;
    std::cout << "ClapTrap "  << "got " << amount << " of Sweet life juice! " << std::endl;
}

int ClapTrap::getHitPoints() const {
    return m_HitPoints;
}

void ClapTrap::setHitPoints(int p_HitPoints) {
    m_HitPoints += p_HitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return m_EnergyPoints;
}

void ClapTrap::setEnergyPoints(int p_EnergyPoints) {
        m_EnergyPoints += p_EnergyPoints;
}

