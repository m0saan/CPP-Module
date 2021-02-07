//
// Created by Mohammad  Boustta on 2/6/21.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "ScavTrap constructor called" << std::endl;
    m_HitPoints =  other.m_HitPoints;
    m_MaxHitPoints = other.m_MaxHitPoints;
    m_EnergyPoints = other.m_EnergyPoints;
    m_MaxEnergyPoints = other.m_MaxEnergyPoints;
    m_Level = other.m_Level;
    m_MeleeAttackDamage = other.m_MeleeAttackDamage;
    m_RangedAttackDamage = other.m_RangedAttackDamage;
    m_ArmorDamageReduction = other.m_ArmorDamageReduction;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other){
        std::cout << "ScavTrap constructor called" << std::endl;
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

ScavTrap::ScavTrap(const std::string &pName) : m_Name(pName) {
    m_HitPoints =  100;
    m_MaxHitPoints = 100;
    m_EnergyPoints = 50;
    m_MaxEnergyPoints = 50;
    m_Level = 1;
    m_MeleeAttackDamage = 20;
    m_RangedAttackDamage = 15;
    m_ArmorDamageReduction = 3;
}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::actionKillbot() const {
    std::cout << "actionKillbot has been launched!"<< std::endl;
}

void ScavTrap::actionRepulsive() const {
    std::cout << "actionRepulsive has been launched!" << std::endl;
}

void ScavTrap::actionCombustion() const {
    std::cout << "actionCombustion has been launched!" << std::endl;
}

void ScavTrap::actionHammer() const {
    std::cout << "actionHammer has been launched!" << std::endl;
}

void ScavTrap::actionHyperion() const {
    std::cout << "actionHyperion has been launched!"  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP " << "Hey, watch out! " << "got " << amount << " of damage."<< std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP "  << "got " << amount << " of Sweet life juice! " << std::endl;
}

int ScavTrap::getMHitPoints() const {
    return m_HitPoints;
}

int ScavTrap::getMEnergyPoints() const {
    return m_EnergyPoints;
}

void ScavTrap::setMHitPoints(int p_HitPoints) {
    if (m_HitPoints + p_HitPoints <= m_MaxHitPoints)
        m_HitPoints += p_HitPoints;
    else
        m_HitPoints = m_MaxHitPoints;
}

void ScavTrap::setMEnergyPoints(int p_EnergyPoints) {
    if (m_EnergyPoints + p_EnergyPoints <= m_MaxEnergyPoints)
        m_EnergyPoints += p_EnergyPoints;
    else
        m_EnergyPoints = m_MaxEnergyPoints;
}

void ScavTrap::challengeNewcomer() const {

}
