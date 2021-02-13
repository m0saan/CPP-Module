//
// Created by Mohammad  Boustta on 2/7/21.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called!" << std::endl;

}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap Copy constructor called!" << std::endl;
    m_HitPoints =  other.m_HitPoints;
    m_MaxHitPoints = other.m_MaxHitPoints;
    m_EnergyPoints = other.m_EnergyPoints;
    m_MaxEnergyPoints = other.m_MaxEnergyPoints;
    m_Level = other.m_Level;
    m_MeleeAttackDamage = other.m_MeleeAttackDamage;
    m_RangedAttackDamage = other.m_RangedAttackDamage;
    m_ArmorDamageReduction = other.m_ArmorDamageReduction;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
    std::cout << "ClapTrap Copy assignment operator called!" << std::endl;
    if (this != &other){
        m_HitPoints =  other.m_HitPoints;
        m_MaxHitPoints = other.m_MaxHitPoints;
        m_EnergyPoints = other.m_EnergyPoints;
        m_MaxEnergyPoints = other.m_MaxEnergyPoints;
        m_Level = other.m_Level;
        m_MeleeAttackDamage = other.m_MeleeAttackDamage;
        m_RangedAttackDamage = other.m_RangedAttackDamage;
        m_ArmorDamageReduction = other.m_ArmorDamageReduction;
    }
    return *this;
}

void ClapTrap::rangedAttack(const std::string &target) {
    std::cout << "ClapTrap " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
    std::cout << "ClapTrap " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(int amount) {

    amount = amount - m_ArmorDamageReduction;
    std::cout << "<" << m_Name << "> * takes damage for "<< amount << " hit points *" << std::endl;
    m_HitPoints = (m_HitPoints - amount > 0) ? (m_HitPoints - amount) : 0;
}

void ClapTrap::beRepaired(int amount) {
    amount = m_HitPoints + (int)amount > m_MaxHitPoints ? m_MaxHitPoints - m_HitPoints : m_HitPoints + amount;
    m_HitPoints += amount;
    std::cout << m_Name << "got " << amount << " of Sweet life juice! " << std::endl;
}