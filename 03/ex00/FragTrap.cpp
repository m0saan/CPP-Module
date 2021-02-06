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
    std::cout << "FR4G-TP " << "Hey, watch out! " << "got " << amount << " of damage."<< std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP "  << "got " << amount << " of Sweet life juice! " << std::endl;
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

int FragTrap::getMHitPoints() const {
    return m_HitPoints;
}

void FragTrap::setMHitPoints(int p_HitPoints) {
    if (!(m_HitPoints + p_HitPoints > m_MaxHitPoints))
        m_HitPoints += p_HitPoints;
    else
        m_HitPoints = m_MaxHitPoints;

}

int FragTrap::getMEnergyPoints() const {
    return m_EnergyPoints;
}

void FragTrap::setMEnergyPoints(int p_EnergyPoints) {
    if (!(m_EnergyPoints + p_EnergyPoints > m_MaxEnergyPoints))
        m_EnergyPoints += p_EnergyPoints;
    else
        m_EnergyPoints = m_MaxEnergyPoints;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (m_EnergyPoints - 25 < 0)
        std::cout << "Brrrh... you're out of energy!!" << std::endl;
    else{
        m_EnergyPoints -= 25;
        std::cout << "Yaaay!.. This time it'll be awesome, I promise!" << std::endl;
    }
}

