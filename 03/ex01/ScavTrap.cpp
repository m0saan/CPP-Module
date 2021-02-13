//
// Created by Mohammad  Boustta on 2/6/21.
//

#include "ScavTrap.h"

std::string ScavTrap::funnyChallenges[ScavTrap::nOfChallenges] = {
        "Kill varkid pods before they hatch.",
        "Shoot bullymong-tossed projectiles out of midair.",
        "Kill enemies with corrosive damage.",
        "Loot or purchase purple items.",
        "Collect Money from cash drops."
};

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
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

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(int amount) {

    amount = amount - m_ArmorDamageReduction;
    std::cout << "<" << m_Name << "> * takes damage for "<< amount << " hit points *" << std::endl;
    m_HitPoints = (m_HitPoints - amount > 0) ? (m_HitPoints - amount) : 0;
}

void ScavTrap::beRepaired(int amount) {
    amount = m_HitPoints + (int)amount > m_MaxHitPoints ? m_MaxHitPoints - m_HitPoints : m_HitPoints + amount;
    m_HitPoints += amount;
    std::cout << "FR4G-TP "  << "got " << amount << " of Sweet life juice! " << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target) {
    std::size_t randomIndex;
    std::srand(time(nullptr));

    randomIndex = std::rand() % ScavTrap::nOfChallenges;
    std::cout << "SC4V-TP "<< m_Name << " challenge " << target
              << " with " << ScavTrap::funnyChallenges[randomIndex] << std::endl;
}
