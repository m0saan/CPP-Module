//
// Created by Mohammad  Boustta on 2/6/21.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &pName) {
    std::cout << "ScavTrap default constructor with 1 parameter called!" << std::endl;
    m_Name = pName;
    m_HitPoints =  100;
    m_MaxHitPoints = 100;
    m_EnergyPoints = 50;
    m_MaxEnergyPoints = 50;
    m_Level = 1;
    m_MeleeAttackDamage = 20;
    m_RangedAttackDamage = 15;
    m_ArmorDamageReduction = 3;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)  : ClapTrap(other) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
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
        std::cout << "ScavTrap copy assignment constructor called" << std::endl;
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

void ScavTrap::challengeNewcomer() const {

}
