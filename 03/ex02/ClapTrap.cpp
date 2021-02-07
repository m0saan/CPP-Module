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
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::actionKillbot() const {
    std::cout << "actionKillbot has been launched!"<< std::endl;
}

void ClapTrap::actionRepulsive() const {
    std::cout << "actionRepulsive has been launched!" << std::endl;
}

void ClapTrap::actionCombustion() const {
    std::cout << "actionCombustion has been launched!" << std::endl;
}

void ClapTrap::actionHammer() const {
    std::cout << "actionHammer has been launched!" << std::endl;
}

void ClapTrap::actionHyperion() const {
    std::cout << "actionHyperion has been launched!"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP " << "Hey, watch out! " << "got " << amount << " of damage."<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP "  << "got " << amount << " of Sweet life juice! " << std::endl;
}

int ClapTrap::getMHitPoints() const {
    return m_HitPoints;
}

int ClapTrap::getMEnergyPoints() const {
    return m_EnergyPoints;
}

void ClapTrap::setMHitPoints(int p_HitPoints) {
    if (m_HitPoints + p_HitPoints <= m_MaxHitPoints)
        m_HitPoints += p_HitPoints;
    else
        m_HitPoints = m_MaxHitPoints;
}

void ClapTrap::setMEnergyPoints(int p_EnergyPoints) {
    if (m_EnergyPoints + p_EnergyPoints <= m_MaxEnergyPoints)
        m_EnergyPoints += p_EnergyPoints;
    else
        m_EnergyPoints = m_MaxEnergyPoints;
}