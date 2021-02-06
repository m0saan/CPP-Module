//
// Created by moboustt on 3/2/2021.
//

#include "FragTrap.h"

FragTrap::FragTrap(const std::string &pName) : m_Name(pName) {
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Default destructor called" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

}

void FragTrap::beRepaired(unsigned int amount) {

}

FragTrap &FragTrap::operator=(FragTrap const &fragTrap) {
    if (this != &fragTrap) {
        this->m_Name = fragTrap.m_Name;
        this->m_HitPoints = fragTrap.m_HitPoints;
        this->m_MaxHitPoints = fragTrap.m_MaxHitPoints;
        this->m_EnergyPoints = fragTrap.m_EnergyPoints;
        this->m_MaxEnergyPoints = fragTrap.m_MaxEnergyPoints;
        this->m_Level = fragTrap.m_Level;
        this->m_MeleeAttackDamage = fragTrap.m_MeleeAttackDamage;
        this->m_RangedAttackDamage   = fragTrap.m_RangedAttackDamage;
        this->m_ArmorDamageReduction = fragTrap.m_ArmorDamageReduction;
    }
    return *this;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
    this->m_Name = fragTrap.m_Name;
    this->m_HitPoints = fragTrap.m_HitPoints;
    this->m_MaxHitPoints = fragTrap.m_MaxHitPoints;
    this->m_EnergyPoints = fragTrap.m_EnergyPoints;
    this->m_MaxEnergyPoints = fragTrap.m_MaxEnergyPoints;
    this->m_Level = fragTrap.m_Level;
    this->m_MeleeAttackDamage = fragTrap.m_MeleeAttackDamage;
    this->m_RangedAttackDamage   = fragTrap.m_RangedAttackDamage;
    this->m_ArmorDamageReduction = fragTrap.m_ArmorDamageReduction;
}

