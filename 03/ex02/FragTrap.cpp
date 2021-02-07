//
// Created by moboustt on 3/2/2021.
//

#include "FragTrap.h"

typedef void (FragTrap::*CALL_MEMBER_FUNC)() const;

FragTrap::FragTrap() {
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &pName) {
    m_Name = pName;
    std::cout << "FragTrap Default constructor called with 1 parameter" << std::endl;
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

