//
// Created by moboustt on 3/2/2021.
//

#include "FragTrap.h"

typedef void (FragTrap::*CALL_MEMBER_FUNC)() const;

FragTrap::FragTrap() {
    std::cout << "FragTrap Default constructor called" << std::endl;
    m_Name = "";
    m_HitPoints =100;
    m_MaxHitPoints = 100;
    m_EnergyPoints = 100;
    m_MaxEnergyPoints = 100;
    m_Level = 1;
    m_MeleeAttackDamage = 30;
    m_RangedAttackDamage   = 20;
    m_ArmorDamageReduction = 5;
}

FragTrap::FragTrap(const std::string &pName) : m_Name(pName) {
    std::cout << "FragTrap Default constructor called with 1 parameter" << std::endl;
    m_HitPoints =100;
    m_MaxHitPoints = 100;
    m_EnergyPoints = 100;
    m_MaxEnergyPoints = 100;
    m_Level = 1;
    m_MeleeAttackDamage = 30;
    m_RangedAttackDamage   = 20;
    m_ArmorDamageReduction = 5;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Default destructor called" << std::endl;
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

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_RangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << m_Name << " attacks " << target << " at range, causing ";
    std::cout << m_MeleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(int amount) {

    amount = amount - m_ArmorDamageReduction;
    std::cout << "<" << m_Name << "> * takes damage for "<< amount << " hit points *" << std::endl;
    m_HitPoints = (m_HitPoints - amount > 0) ? (m_HitPoints - amount) : 0;
}

void FragTrap::beRepaired(int amount) {
    amount = m_HitPoints + (int)amount > m_MaxHitPoints ? m_MaxHitPoints - m_HitPoints : m_HitPoints + amount;
    m_HitPoints += amount;
    std::cout << "FR4G-TP "  << "got " << amount << " of Sweet life juice! " << std::endl;
}

void FragTrap::actionKillbot() {
    std::cout << "actionKillbot has been launched!"<< std::endl;
}

void FragTrap::actionRepulsive() {
    std::cout << "actionRepulsive has been launched!" << std::endl;
}

void FragTrap::actionCombustion() {
    std::cout << "actionCombustion has been launched!" << std::endl;
}

void FragTrap::actionHammer() {
    std::cout << "actionHammer has been launched!" << std::endl;
}

void FragTrap::actionHyperion() {
    std::cout << "actionHyperion has been launched!"  << std::endl;
}

int FragTrap::getMHitPoints() const {
    return m_HitPoints;
}

void FragTrap::setMHitPoints(int p_HitPoints) {
    if (m_HitPoints + p_HitPoints <= m_MaxHitPoints)
        m_HitPoints += p_HitPoints;
    else
        m_HitPoints = m_MaxHitPoints;

}

int FragTrap::getMEnergyPoints() const {
    return m_EnergyPoints;
}

void FragTrap::setMEnergyPoints(int p_EnergyPoints) {
    if (m_EnergyPoints + p_EnergyPoints <= m_MaxEnergyPoints)
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
        std::string funcPool[] = { "actionKillbot", "actionRepulsive", "actionCombustion", "actionHammer", "actionHyperion" };
        CALL_MEMBER_FUNC actionsPool[] = { &FragTrap::actionCombustion, &FragTrap::actionHammer, &FragTrap::actionKillbot, &FragTrap::actionRepulsive, &FragTrap::actionHyperion };
        for (int i = 0; i < 5; ++i) {
            if (target == funcPool[i]){
                CALL_MEMBER_FUNC func = actionsPool[i];
                (this->*func)();
            }
        }
    }
}

